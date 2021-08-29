/*Cho file data.txt chua thong tin ve cau truc tinh thanh gom
- Ten Tinh
- Dien tich
- Dan so
Viet cac ham thuc hien cac nhiem vu sau
- Nhap danh sach cac tinh thanh tu file van ban (co cap phat dong)
- Xuat danh sach cac tinh thanh
- Tim tinh co dien tich lon nhat
- Sap xep cac tinh theo mat do dan so (Dan so/Dien tich) tang dan va xuat ra man hinh
- Tinh dan so trung binh cua danh sach
- Thong ke dan cu nhu sau
	+ Duoi 1 trieu dan : co bao nhieu tinh
	+ Tu 1 den duoi 2 trieu dan: co bao nhieu tinh
	+ Tu 2 den duoi 5 trieu dan: co bao nhieu tinh
	+ Tu 5 trieu dan: co bao nhieu tinh
- Nhap 1 ten tinh tim kiem co trong danh sach khong
- Trong nhung tinh co dan so 3 den 5 trieu tim tinh co dien tich lon nhat
- Ham main thuc hien nhung viec neu tren
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define line printf("\n---------------------")
struct tinh
{
	char ten[100],khuvuc[100];
	float dientich;
	int danso;
};
void nhap(int *n,tinh **A,FILE *f=stdin) //cho n o dau file
{
	fscanf(f,"%d\n",n);
	*A=(tinh*)calloc(*n,sizeof(tinh));
	for(int i=0;i<*n;i++)
	{
		fscanf(f,"%[^\n]\n",(*A)[i].ten);	//HaNoi\n	ten va` dau xuong dong`
		fscanf(f,"%[^\n]\n",(*A)[i].khuvuc);
		fscanf(f,"%f\n%d\n",&(*A)[i].dientich,&(*A)[i].danso);
	}
}
tinh *read(int *n,FILE *f) //doi voi file khong co so phan tu o dau
{
	int m;
	tinh *a=(tinh *)calloc(1000,sizeof(tinh));
	for(m=0;!feof(f);m++)
	{
		fscanf(f,"%[^\n]\n",a[m].ten);
		fscanf(f,"%[^\n]\n",a[m].khuvuc);
		fscanf(f,"%f\n%d\n",&a[m].dientich,&a[m].danso);
	}
	*n=m;
	return a;
}
void xuat(int n,tinh *a,FILE *f=stdout)
{
	fprintf(f,"\nThong tin tinh thanh\n");
	fprintf(f,"%d\n",n);
	for(int i=0;i<n;i++) 
	fprintf(f,"%-30s%-30s%-15.3f%d\n",a[i].ten,a[i].khuvuc,a[i].dientich,a[i].danso);// -30 la sap xep dep hon
}
void tinhdtmax(int n,tinh *a)
{
	int p=0;
	for(int i=1;i<n;i++) if(a[i].dientich>a[p].dientich) p=i;
	printf("\nTinh co dien tich lon nhat %s",a[p].ten);
}
void sapxep(int n,tinh *a)
{
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
	if(a[i].danso/a[i].dientich<a[j].danso/a[j].dientich)
	{
		tinh t;
		t=a[i]; 
		a[i]=a[j];
		a[j]=t;
	}
}
float dstb(int n,tinh *A)
{
	int s=0;
	for(int i=0;i<n;i++) s+=A[i].danso;
	return 1.0*(s/n);
}
int dem(int n,tinh *a,int u,int v) //Dem dan so trong [u,v) co bao nhieu tinh
{
	int d=0;
	for(int i=0;i<n;i++) d+=a[i].danso>=u&&a[i].danso<v; // dieu kien de d++
	return d;
}
void tim(int n,tinh *a)
{
	char tentinh[200];
	printf("\nNhap ten tinh muon tim kiem : ");fflush(stdin); scanf("%[^\n]",tentinh); //gets(tentinh);
	for(int i=0;i<n;i++)
	if(stricmp(tentinh,a[i].ten)==0) // lay ca dau space
	{
		printf("\Tim thay tinh %s o khu vuc %s co dien tich %f va dan so %d",tentinh,a[i].khuvuc,a[i].dientich,a[i].danso);
		return;
	}
	printf("\nKhong tim thay tinh %s",tentinh);
}
void dientichmax(int n,tinh *a)
{
	int u=3e6,v=5e6,p=-1;
	for(int i=0;i<n;i++)
	if(a[i].danso>=u && a[i].danso<=v)
	{
		if(p==-1 || a[p].dientich<a[i].dientich) p=i;
	}
	if(p==-1) printf("\nKhong co tinh nao dan so trong [%d %d]",u,v);
	else printf("\nTinh %s co dien lon nhat khi so dan thuoc [%d %d]",a[p].ten,u,v);
}
int main()
{
	int n;
	tinh *a;
	FILE *f=fopen("data.txt","r");
	//nhap(&n,&a,f);
	a=read(&n,f);
	xuat(n,a);
	tinhdtmax(n,a);
	sapxep(n,a);
	xuat(n,a);
		line;
	printf("\nDan so trung binh %f",dstb(n,a));
		line;
	int tk[]={0,1e6,2e6,5e6,1e9};
	for(int i=1;i<=4;i++) printf("\nSo tinh co dan so trong [%d %d) la %d",tk[i-1],tk[i],dem(n,a,tk[i-1],tk[i]));
		line;
	tim(n,a);
		line;
	dientichmax(n,a);
	free(a);
	fclose(f);
}
