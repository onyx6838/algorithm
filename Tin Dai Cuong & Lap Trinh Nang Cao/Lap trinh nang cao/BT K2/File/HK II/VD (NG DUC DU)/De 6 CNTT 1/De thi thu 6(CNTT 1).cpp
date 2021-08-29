#include<bits/stdc++.h>
using namespace std;
float **phat(int m,int n)
{
	float **a=(float **)calloc(m,sizeof(float *));
	for(int i=0;i<m;i++)	a[i]=(float *)calloc(n,sizeof(float));
	return a;
}
void free(int m,int ***a)
{
	for(int i=0;i<m;i++)	free((*a)[i]);
	free(*a);
}
void nhap(int *m,int *n,float ***a,FILE *f=stdin)
{
	fscanf(f,"%d%d",m,n);
	(*a)=phat(*m,*n);
	for(int i=0;i<*m;i++)
		for(int j=0;j<*n;j++)	fscanf(f,"%f",&(*a)[i][j]);
}
void xuat(int m,int n,float **a,FILE *f=stdout)
{
	printf("MT\n");
	for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			fprintf(f,"%-8.1f",a[i][j]);
			fprintf(f,"\n");
		}
}
void TBC(int m,int n,float **a)
{
	float s=0;
	int d=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(a[i][j] >= -10 && a[i][j] <= -1)
				{
					s+=a[i][j];
					d++;
				}
	if(d==0)	printf("MT k co ptu thoa man");
	else printf("TBC cac ptu trong [-10,-1] = %.3f",s/d);			
}
void am(int m,int n,float **a)
{	
	int ktra=0;
	float max=INT_MIN;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			{
				if(a[i][j] <0 && max < a[i][j])
				{
					max=a[i][j];
					ktra=1;
				}
			}
	if(ktra==0)	printf("\nk co ptu nao am");		
	else	printf("\nPtu am max = %.1f",max);		
}
int main ()
{
	FILE *f=fopen("MT2.txt","r");
	int m,n;
	float **a;
	nhap(&m,&n,&a,f);
	xuat(m,n,a);
	TBC(m,n,a);
	am(m,n,a);
	fclose(f);
	free(a);
}
