#include<bits/stdc++.h>
int **alloc(int m,int n)
{
	int **a=(int **)calloc(m,sizeof(int *));
	for(int i=0;i<m;i++)	a[i]=(int *)calloc(n,sizeof(int));
	return a;
}
void free(int m, int ***a)
{
	for(int i=0;i<m;i++)	free(a[i]);
	free((*a));
}
void nhap(int *m,int *n,int ***a,FILE *f=stdin)
{
	fscanf(f,"%d%d",m,n);
	(*a)=alloc(*m,*n);
	for(int i=0;i<*m;i++)
		for(int j=0;j<*n;j++)	fscanf(f,"%d",&(*a)[i][j]);
}
void xuat(int m,int n,int **a,FILE *f=stdout)
{
	fprintf(f,"MT\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		fprintf(f,"%-5d",a[i][j]);
		fprintf(f,"\n");
	}
}
int TGT(int m,int n,int **a)
{
	int k;
	if(m==n)	
	{
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)	
				if(i>j && a[i][j]==0)	return 1;
					return 0;	
	}
	else 
	{
		printf("MT k vuong k tinh dinh thuc");
		exit(1);
	}
}
int cheo(int m,int n,int **a)
{	
	int s=1;
	if(TGT(m,n,a)!=0)
	{	
		for(int i=0;i<m;i++)	s*=a[i][i];
		printf("Dinh thuc MT = %d",s);
	}
	else printf("K tinh dc");
}
int main ()
{
	FILE *f=fopen("vd.txt","r");
	int **a,m,n;
	nhap(&m,&n,&a,f);
	xuat(m,n,a);
	TGT(m,n,a);
	cheo(m,n,a);
	fclose(f);
	free(a);
}
