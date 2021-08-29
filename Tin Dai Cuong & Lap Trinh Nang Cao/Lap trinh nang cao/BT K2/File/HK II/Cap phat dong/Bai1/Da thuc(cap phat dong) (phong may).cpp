/*Da thuc
- Viet ham nhap da thuc tu file hoac ban phim co cap phat bo nho dong
- Viet ham tinh gia tri cua da thuc
- Viet ham tinh gia tri dao ham cua da thuc
- Viet ham tinh he so tong cua hai da thuc
- Viet ham main nhap 2 da thuc tu man hinh va file sau do nhap t tinh gtri va nhap ten file xuat ra da thuc tong
- Yeu cau phai co ham menu dieu tiet thao tac cua main
*/
//struct dt
//{
//	int n;
//	float *a;
//};
#include<stdio.h>
#include<math.h>   //Ham pow
#include<stdlib.h>  //cap phat bo nho ham calloc
#include<windows.h> //Cac ham he thong - dung man hinh va xoa man hinh ham system
int menu()
{
	system("cls");   //xoa man hinh phai #include<windows.h>ik
	printf("1. Nhap da thuc thu nhat tu ban phim P(x)\n");
	printf("2. Nhap da thuc thu hai tu file Q(x)\n");
	printf("3. Gia tri t tinh P(t)+Q(t)\n");
	printf("4. Gia tri t tinh P'(t)*Q'(t)\n");
	printf("5. Tinh cac he so P(x)+Q(x)\n");
	printf("6. Tinh cac he so P(x)-Q(x)\n");
	printf("7. Xuat cac da thuc P(x),Q(x),(P+Q)(),(P-Q)(x) ra file\n");
	printf("8. Thoat\n");
	printf("Moi chon mon : "); 
	int chon; 
	scanf("%d",&chon);
	if(1<=chon && chon <=8) return chon;
	return menu();  //De quy chon lai khi chon chua dung	
}
float *Nhap(int *n,FILE *f=stdin)   //Nhap tu file tra ve con tro tro toi vi tri duoc cap phat
{
	fscanf(f,"%d",n);  //chu y n la con tro
	float *a = (float *) calloc(*n+1,sizeof(float)); //Chu y da thuc bac n co n+1 he so
	if(a==NULL) {printf("Loi cap phat bo nho dong");return 0;}
	for(int i=0;i<=*n;i++) fscanf(f,"%f",a+i);   //a+i tuong duong voi &a[i]	
	return a;
}
void Xuat(int n,float *a,FILE *f=stdout)
{
	fprintf(f,"%d\n",n);
	for(int i=0;i<=n;i++) fprintf(f,"%8.2f",*(a+i));   //Chu y xuat n+1 he so
}
float giatri(int n,float *a,float t)		// Thay so tinh
{
	float s=0;
	for(int i=0;i<=n;i++)	s+=a[i]*pow(t,i);
	return s;
}
float daoham(int n,float *a,float t)	// gtri cua day so sau dao ham`
{
	float s=0;
	for(int i=1;i<=n;i++)	s+=i*a[i]*pow(t,i-1);
	return s;
}
void tong(int n,float *a,int m,float *b,int *k,float **c,float z) //in:n,a,m,b,z out:k,c
{
	*k=n>m?n:m;
	*c=(float *)calloc(*k+1,sizeof(float));
	for(int i=0;i<=*k;i++)
	(*c)[i]=i<=n && i<=m?a[i]+z*b[i]:(i<=n?a[i]:z*b[i]);
}
int main()
{
	int n,m,k,p;
	float *a=NULL,*b=0,t,*c=0,*d=0;   //Khoi gan la con tro rong  NULL trong thu vien values.h
	FILE *f;
	char tenfile[100];
	do
	{
		switch(menu())
		{
			case 8: 
					if(a) free(a);
					if(b) free(b);
					if(c) free(c);
					if(d) free(d);
					exit(1);  //Ham exit la thoat khan cap khoi chuong trinh
			case 1: 
					printf("Nhap da thuc thu nhat P(x) tu ban phim \n");
					a=Nhap(&n);
					printf("\nDa thuc nhap duoc :\n"); Xuat(n,a,stdout);
					break;
			case 2:
					printf("Nhap da thuc thu hai Q(x) tu file \n");
					printf("Ten file : "); fflush(stdin); gets(tenfile);
					f=fopen(tenfile,"r");
					if(!f) {printf("Loi mo file"); break;}		
					b=Nhap(&m,f);	fclose(f);
					printf("\nDa thuc Q(x) nhap duoc :\n"); Xuat(m,b);
					break;
			case 3:
					printf("Nhap vao so thuc t = ");scanf("%f",&t);
					printf("\nTong P(t)+Q(t) = %f",giatri(n,a,t)+giatri(m,b,t));
					break;
			case 4:
					printf("Nhap vao so thuc t = ");scanf("%f",&t);
					printf("\nTich P'(t)*Q'(t) = %f",daoham(n,a,t)*daoham(m,b,t));
					break;
			case 5:
					printf("Tong hai da thuc P(x)+Q(x)\n");
					tong(n,a,m,b,&k,&c,1);
					Xuat(n,a); printf("\n");
					Xuat(m,b); printf("\n");
					Xuat(k,c);
					break;
			case 6:
					printf("Hieu hai da thuc P(x)-Q(x)\n");
					tong(n,a,m,b,&p,&d,-1);
					Xuat(n,a); printf("\n");
					Xuat(m,b); printf("\n");
					Xuat(p,d);
					break;
			case 7: 
					printf("Nhap ten file can xuat : "); fflush(stdin); gets(tenfile);
					f=fopen(tenfile,"w");
					Xuat(n,a,f); fprintf(f,"\n");
					Xuat(m,b,f); fprintf(f,"\n");
					Xuat(k,c,f); fprintf(f,"\n");
					Xuat(p,d,f); fprintf(f,"\n");
					fclose(f);					
		}
		printf("\n");
		system("pause");  //dung man hinh
	}while(1); //lap vo han
}
