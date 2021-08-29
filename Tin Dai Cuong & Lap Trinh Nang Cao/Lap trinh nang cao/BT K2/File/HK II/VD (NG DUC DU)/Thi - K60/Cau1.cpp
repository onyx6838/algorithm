#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
struct diem
{
	float x,y;
};
diem *nhap(int *n,FILE *f=stdin)			// kieu nhap 1
{
	fscanf(f,"%d",n);
	diem *a=(diem *)calloc(*n,sizeof(diem));
	for(int i=0;i<*n;i++)	
	{
		fscanf(f,"%f\n",&a[i].x);
		fscanf(f,"%f\n",&a[i].y);
	}
	return a;
}
void xuat(int n,diem *a)
{
	printf("Thong tin diem\n");
	for(int i=0;i<n;i++)
	{
		printf("%.1f",a[i].x);
		printf("%5.1f\n",a[i].y);
	}
}
float kc(diem a,diem b)
{
	float u=a.x-b.x;
	float v=a.y-b.y;
	return sqrt((u*u)+(v*v));
}
// Y 2
int diemNamTrongDuongTronTam(int n,diem *a,int R){
	diem O; O.x = O.y = 0;
	int dem = 0;
	for (int i = 1; i < n; i++)
	{
		if (R > kc(a[i], O)) dem++;
	}
	return dem;
}
	
int main ()
{
	FILE *f=fopen("diem.txt","r");
	int n;
	diem *a=nhap(&n,f);
	xuat(n,a);
	int r;
	printf("\nNhap r\n");
	scanf("%d",&r);
	printf("\nDiem nam trong tam O bk R = %d ",diemNamTrongDuongTronTam(n,a,r));
	fclose(f);
	free(a);
}
