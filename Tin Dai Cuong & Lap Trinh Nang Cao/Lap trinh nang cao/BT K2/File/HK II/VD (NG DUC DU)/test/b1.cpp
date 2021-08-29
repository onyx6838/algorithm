#include<bits/stdc++.h>
using namespace std;
int **capphat(int m,int n)
{
	int **a=(int **)calloc(m,sizeof(int *));
	for(int i=0;i<m;i++)	a[i]=(int *)calloc(n,sizeof(int));
	return a;
}
void free(int m,int ***a)
{
	for(int i=0;i<m;i++)	free((*a)[i]);
	free (*a);
}
void nhap(int *m,int *n,int ***a,FILE *f=stdin)
{
	fscanf(f,"%d",m);
	fscanf(f,"%d",n);
	(*a)=capphat(*m,*n);
	for(int i=0;i<*m;i++)
		for(int j=0;j<*n;j++)	fscanf(f,"%d",&(*a)[i][j]);
}
void xuat(int m,int n,int **a,FILE *f=stdout)
{
	fprintf(f,"Ma tran:\n");
	for(int i=0;i<m;i++)
		{
		for(int j=0;j<n;j++)
			fprintf(f,"%-8d",a[i][j]);
			fprintf(f,"\n");
		}
}
void tichle(int m,int n,int **a)
{
	int s = 1;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(a[i][j]> 0 && a[i][j]%2!=0)
			{
				s*=a[i][j];
			}
	printf("\nTich cac ptu le = %d",s);
}
void nhonhat(int m,int n,int **a)
{
	int minh = 1;
	int minc = 1;
	int min=a[0][0];
	for(int i=1;i<m;i++)
		for(int j=1;j<n;j++)
			if(a[i][j]<min)
			{
				min=a[i][j];
				minh = i;
				minc = j;
			}
				
	printf("\nPtu le nho nhat MT %d vi tri hang %d cot %d",min,minh+1,minc+1);
}
int main ()
{
	FILE *fi=fopen("MT.txt","r");
	FILE *fo=fopen("xuatMT.txt","w");
	int m,n;
	int **a;
	nhap(&m,&n,&a,fi);
	xuat(m,n,a);
	xuat(m,n,a,fo);
	tichle(m,n,a);
	nhonhat(m,n,a);
	fclose(fi);
	fclose(fo);
	free(a);
}
