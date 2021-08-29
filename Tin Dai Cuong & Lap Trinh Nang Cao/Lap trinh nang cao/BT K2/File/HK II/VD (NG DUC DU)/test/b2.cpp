#include<bits/stdc++.h>
using namespace std;
struct nv
{
	char manv[30];
	char hoten[30];
	int luong;
	char phong;
};
nv *nhap(int *n,FILE *f=stdin)
{
	fscanf(f,"%d\n",n);
	nv *a=(nv *)calloc(*n,sizeof(nv));
	for(int i=0;i<*n;i++)
	{
		fscanf(f,"%[^\n]\n",&a[i].manv);
		fscanf(f,"%[^\n]\n",&a[i].hoten);
		fscanf(f,"%d\n",&a[i].luong);
		fscanf(f,"%c\n",&a[i].phong);
	}
	return a;
}
void xuat(int n,nv *a,FILE *f=stdout)
{
	fprintf(f,"Thong tin nvien\n");
	fprintf(f,"%d\n",n);
	for(int i=0;i<n;i++)
		fprintf(f,"%-30s%-15s%-15d%-c\n",a[i].manv,a[i].hoten,a[i].luong,a[i].phong);
}
void thongke(int n,nv *a)
{
	int demA=0,demB=0,demC=0;
	for(int i=0;i<n;i++)
	{
		if(a[i].phong == 'A')	demA++;
		else if(a[i].phong == 'B') demB++;
		else demC++;
	}
	printf("\nPhong ban A co %d ng",demA);
	printf("\nPhong ban B co %d ng",demB);
	printf("\nPhong ban C co %d ng",demC);
}
void SX(int n,nv *a)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(a[i].luong<a[j].luong)	
				{
					nv t;
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
	printf("\nDanh Sach nv luong tang dan\n");
	for(int i=0;i<n;i++)
	{
		printf("%-30s%-15s%-15d%-c\n",a[i].manv,a[i].hoten,a[i].luong,a[i].phong);
	}
}
int main ()
{
	int n;
	FILE *fi=fopen("input.txt","r");
	FILE *fo=fopen("output.txt","w");
	nv *a=nhap(&n,fi);
	xuat(n,a,fo);
	thongke(n,a);
	SX(n,a);
	fclose(fi);
	fclose(fo);
	free(a);
}
