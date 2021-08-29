/* Day so thuc nguyen file .... 2 day a va b
- Tim max day a va max day b xem max nao lon hon
- ktra CSC
*/
#include<bits/stdc++.h>
void nhap(int *n,int **a,int *m,int **b,FILE *f=stdin)
{
	fscanf(f,"%d%d",n,m);
	*a=(int *)calloc(*n+1,sizeof(int));
	for(int i=0;i<*n;i++)	fscanf(f,"%d",&(*a)[i]);
	*b=(int *)calloc(*m+1,sizeof(int));
	for(int i=0;i<*m;i++)	fscanf(f,"%d",&(*b)[i]);
}
void xuat(int n,int *a,int m,int *b,FILE *f=stdout)
{
	fprintf(f,"%d",n);
	for(int i=0;i<n;i++)	fprintf(f,"%5d",a[i]);
	fprintf(f,"%d",m);
	for(int i=0;i<m;i++)	fprintf(f,"%5d",b[i]);	
}
int max(int n,int *a)
{
	int d=a[1];
	for(int i=0;i<n;i++)	if(a[i]>d)	a[i]=d;
	return d;
}
int main ()
{
	FILE *fi=fopen("dayab.txt","r");
	FILE *fo=fopen("kq.txt","w");
	int *a,*b,n,m,z;
	nhap(&n,&a,&m,&b,fi);
	xuat(n,a,m,b);
	free(a);
	free(b);
	fclose(fi);
	fclose(fo);
}


