/* Xay dung cau truc nhan vien	Hoten, Luong, MaCV(1,2,3)
- ham nhap dsach nvien
- xuat dsach nvien ra tep voi dong dau la` so nvien dong tiep la thong tin
- sap xep nvien theo thu tu luong tu cao den thap in ra man hinh
- main*/
#include<bits/stdc++.h>
using namespace std;
struct nv
{
	char hoten[30];
	int luong;
	char MaCV;
};
nv *nhap(int *n,FILE *f=stdin)
{
	fscanf(f,"%d\n",n);
	nv *a=(nv *)calloc(*n,sizeof(nv));
	for(int i=0;i<*n;i++)
	{
		fscanf(f,"%[^\n]\n",a[i].hoten);
		fscanf(f,"%d\n",&a[i].luong);
		fscanf(f,"%c\n",a[i].MaCV);
	}
	return a;
}
void xuat(int n,nv *a,FILE *f=stdout)
{
	fprintf(f,"Thong tin nvien\n");
	fprintf(f,"%d\n",n);
	for(int i=0;i<n;i++)
		fprintf(f,"%-30s%-15d%-c\n",a[i].hoten,a[i].luong,a[i].MaCV);
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
	for(int i=0;i<n;i++)
	{
		printf("%-30s%-15d%-30s\n",a[i].hoten,a[i].luong,a[i].MaCV);
	}			
}
int main ()
{
	int n;
	FILE *fi=fopen("nv.txt","r");
	nv *a=nhap(&n,fi);
	FILE *fo=fopen("xuatnv.txt","w");
	xuat(n,a,fo);
	printf("Dsach NV sau SX\n");
	SX(n,a);
	fclose(fi);
	fclose(fo);
	free(a);
}


