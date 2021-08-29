#include<bits/stdc++.h>
using namespace std;
struct dvien
{
	char ten[30];
	int nam,dang;
};
dvien *nhap(int *n,FILE *f=stdin)
{
	fscanf(f,"%d\n",n);
	dvien *a=(dvien *)calloc(*n,sizeof(dvien));
	for(int i=0;i<*n;i++)	
	{
		fscanf(f,"%[^\n]\n",&a[i].ten);
		fscanf(f,"%d\n",&a[i].nam);
		fscanf(f,"%d\n",&a[i].dang);
	}
	return a;
}
void xuat(int n,dvien *a,FILE *f=stdout)
{
	fprintf(f,"Thong tin dang vien\n");
	for(int i=0;i<n;i++)	
		fprintf(f,"%-30s%-15d%-15d\n",a[i].ten,a[i].nam,a[i].dang);
}
void SX(int n,dvien *a)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(a[i].dang >a[j].dang)
				{
					dvien c;
					c=a[i];
					a[i]=a[j];
					a[j]=c;
				}		
}
void thongke(int n,dvien *a)
{
	for(int i=0;i<n;i++)
	{
		if((a[i].dang - a[i].nam) > 10)
		printf("\nDV %d: %s %5d %5d  co > 10 nam dang ",i+1,a[i].ten,a[i].nam,a[i].dang);
	}
}
int main ()
{
	int n;
	FILE *fi=fopen("dangvien.txt","r");
	FILE *fo=fopen("xuatdv.txt","w");
	dvien *a=nhap(&n,fi);
	xuat(n,a,fo);
	SX(n,a);
	xuat(n,a);
	thongke(n,a);
	fclose(fi);
	fclose(fo);
	free(a);
}
