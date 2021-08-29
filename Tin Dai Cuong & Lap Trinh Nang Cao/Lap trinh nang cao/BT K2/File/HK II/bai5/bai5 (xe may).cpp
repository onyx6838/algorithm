/*Cau truc xe may
- Hang san xuat
- Mau sac
- Phan khoi
- Gia ban
Viet cac ham
- Doc cau truc xe tu file co cap bo nho dong
- Xuat danh sach xe ra man hinh
- Tinh gia ban trung binh
- Thong ke so xe theo tung phan khoi
- Nhap ten xe tim kiem
- Tim xe Honda co gia ban thap nhat
- So sanh gia thap nhat cua xe Honda voi thap nhat cua Yamaha
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct xemay
{
	char ten[30],mau[30];
	int gia,phankhoi;
};
void nhap(int *n,xemay **A,FILE *f)
{
	fscanf(f,"%d\n",n);
	*A=(xemay *)calloc(*n,sizeof(xemay));
	for(int i=0;i<*n;i++)
	{
		fscanf(f,"%[^\n]\n",(*A)[i].ten);
		fscanf(f,"%[^\n]\n",(*A)[i].mau);
		fscanf(f,"%d\n%d\n",&(*A)[i].phankhoi,&(*A)[i].gia);
	}	
}
void xuat(int n,xemay *a,FILE *f=stdout)
{
	fprintf(f,"Thong tin xe may\n");
	for(int i=0;i<n;i++)
	fprintf(f,"%-30s%-20s%15d%15d\n",a[i].ten,a[i].mau,a[i].phankhoi,a[i].gia);
}
xemay *read(int *n,FILE *f)
{
	int i=0;
	xemay *A=(xemay *)calloc(1000,sizeof(xemay));
	for(i=0;!feof(f);i++)   
	fscanf(f,"%[^\n]\n%[^\n]\n%d\n%d\n",A[i].ten,A[i].mau,&A[i].phankhoi,&A[i].gia);
	*n=i;
	return A;
}
float giatrungbinh(int n,xemay *a)
{
	int s=0;
	for(int i=0;i<n;i++) s+=a[i].gia;
	return s/float(n);
}
int dem(int n,xemay *a,int pk)
{
	int d=0;
	for(int i=0;i<n;i++) d+=a[i].phankhoi==pk;
	return d;
}
void thongke(int n,xemay *a)
{
	for(int p=0;p<2000;p++)
	{
		int d=dem(n,a,p);
		if(d) printf("\n\nLoai xe phan khoi %d co %d xe",p,d);
	}
}
void timkiem(int n,xemay *a)
{
	char ten[30];
	printf("\nNhap ten xe : ");fflush(stdin);gets(ten);
	for(int i=0;i<n;i++)
	if(strcmpi(ten,a[i].ten)==0)
	{
		printf("\n\nXe ban can tim %s co mau sac %s phan khoi %d gia ban %d",ten,a[i].mau,a[i].phankhoi,a[i].gia);
		return;
	}
	printf("\n\nXe ban muon tim %s khong co",ten);
}
void honda(int n,xemay *a)
{
	int p=-1;
	for(int i=0;i<n;i++)
	if(strncmp(a[i].ten,"Honda",5)==0)   //so sanh 5 chu cai dau
	{
		if(p==-1 || a[i].gia<a[p].gia) p=i;
	}
	if(p==-1) printf("\n\nKhong co xe honda");
	else printf("\n\nXe honda co gia thap nhat %s co gia %d",a[p].ten,a[p].gia);
}
int mingia(int n,xemay *a,char *loaixe)
{
	int min=1e9;
	int k=strlen(loaixe);
	for(int i=0;i<n;i++)
	if(strncmp(a[i].ten,loaixe,k)==0) 
	{
		if(min>a[i].gia) min=a[i].gia;
	}
	return min;
}
void sosanhgia(int n,xemay *a)
{
	int giahonda=mingia(n,a,"Honda");
	int giayamaha=mingia(n,a,"Yamaha");
	printf(giahonda>giayamaha?"\nHonda dat hon Yamaha":"\nYamaha dat hon Honda");	
}
int main()
{
	int n;
	xemay *X;
	FILE *f=fopen("xe.txt","r");
	//nhap(&n,&X,f);0
	X=read(&n,f);
	fclose(f);
	xuat(n,X);
	printf("\n\nGia ban trung binh %f",giatrungbinh(n,X));
	thongke(n,X);
	timkiem(n,X);
	honda(n,X);
	sosanhgia(n,X);
	free(X);		
}
