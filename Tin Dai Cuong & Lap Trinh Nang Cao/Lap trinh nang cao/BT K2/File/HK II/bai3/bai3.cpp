/*Day diem: cac ham
- Nhap day diem tu file co cap phat bo nho dong
- Xuat day diem ra file
- Tinh do dai duong gap khuc 
- Tim vi tri 1 diem thuoc goc 1 ma gan O nhat
- Dem so doan thang co 2 dau mut nam trong hinh tron tam O ban kinh R
- Menu
- main
*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
struct Diem{float x,y;};
Diem *Nhap(int *n,FILE *f=stdin)
{
	int m;
	fscanf(f,"%d",&m);
	Diem *A=(Diem *)calloc(m,sizeof(Diem));  //cap phat bo nho dong
	for(int i=0;i<m;i++) fscanf(f,"%f%f",&A[i].x,&A[i].y);
	*n=m;
	return A;
}
void Xuat(int n,Diem *A,FILE *f=stdout)
{
	fprintf(f,"%d\n",n);
	for(Diem *p=A;p<A+n;p++) fprintf(f,"%.3f %.3f\n",p->x,p->y); //duyet bang con tro	
}
float kc(Diem A,Diem B)
{
	return sqrt(pow(A.x-B.x,2)+pow(A.y-B.y,2));
}
float dgk(int n,Diem *A)
{
	float s=0;
	//for(int i=1;i<n;i++) s+=kc(A[i-1],A[i]);
	for(Diem *p=A+1;p<A+n;p++) s+=kc(*(p-1),*p);
	return s;
}
int GanO_goc1(int n,Diem *A) //Tra ve -1 neu khong co diem nao thuoc goc I
{
	int v=-1;
	Diem O; O.x=O.y=0;
	float kc_min=1e+18;
	for(int i=0;i<n;i++)
	if(A[i].x>0 && A[i].y>0)
	{
		float z=kc(O,A[i]);
		if(v==-1 || (kc_min>z)) {v=i;kc_min=z;}
	}
	return v; //khi ko co diem nao thi v=-1
}
int Dem_doan(int n,Diem *A,float R)
{
	int d=0;
	Diem O; O.x=O.y=0;  //Khai bao goc toa do
	for(int i=0;i<n;i++) d+=kc(A[i],O)<R;		// dieu kien nho hon R dung +1 sai +0
	return d*(d-1)/2;			// to hop chap 2 cua d (d la so diem nam trong BK R)
}
int menu()
{
	int select;
	system("cls");  //xoa man hinh thay cho lenh clrscr();
	printf("1. Nhap day diem tu file\n");
	printf("2. Xuat day diem ra file\n");
	printf("3. Duong gap khuc\n");
	printf("4. Goc 1 gan O nhat\n");
	printf("5. Doan trong hinh tron\n");
	printf("6. Xuat cac thong tin tinh duoc va ca day diem ra file\n");
	printf("7. Sieu thoat\n");
	printf("Xin moi chon : "); scanf("%d",&select);
	return 1<=select&&select<=7?select:menu();		
}
int main()
{
	int n;
	Diem *A=NULL;
	FILE *fi,*fo;	
	char fname[100];
	do
	{
		switch(menu())
		{
			case 7: if(A) free(A); return 0;
			case 1:
					printf("Nhap ten file de doc :");fflush(stdin); gets(fname); 
					fi=fopen(fname,"r");
					if(!fi) {printf("loi mo file");break;}
					A=Nhap(&n,fi);
					printf("\nThong tin doc duoc:\n"); Xuat(n,A);
					fclose(fi);
					break;
			case 2: 
					printf("Nhap ten file de xuat :");fflush(stdin); gets(fname); 
					fo=fopen(fname,"w");
					if(!fo) {printf("loi mo file");break;}
					Xuat(n,A,fo);
					printf("\nDa ghi vao file %s",fname);
					fclose(fo);
					break;
			case 3:
					if(!A) printf("\nChua co du lieu");
					else printf("Duong gap khuc %f",dgk(n,A));
					break;
			case 4:
					if(!A) printf("\nChua co du lieu");
					else 
					{
						int kq=GanO_goc1(n,A);
						if(kq==-1) printf("Khong co diem nao thuoc goc 1");
						else printf("Diem gan O nhat %d",kq);
					}
					break;
			case 5:
					if(!A) printf("\nChua co du lieu");
					else 
					{
						float R;
						printf("Nhap ban kinh R = ");scanf("%f",&R);
						printf("\nSo doan %d",Dem_doan(n,A,R));
					}
					break;
			case 6:	
					printf("Nhap ten file de xuat :");fflush(stdin); gets(fname); 
					fo=fopen(fname,"w");
					if(!fo) {printf("loi mo file");break;}
					Xuat(n,A,fo);
					fprintf(fo,"\nDuong gap khuc %f",dgk(n,A));
					fprintf(fo,"\nVi tri goc 1 gan O nhat",GanO_goc1(n,A));
					printf("\nDa ghi vao file %s",fname);
					fclose(fo);
					break;
		}
		system("pause");  //dung man hinh thay cho len getch()
	}while(1);
}
