#include<bits/stdc++.h>
int **acc(int m,int n)
{
	int **a=(int **)calloc(m,sizeof(int *));
	for(int i=0;i<m;i++)	a[i]=(int *)calloc(n,sizeof(int));
	return a;
}
void nhap(int *m,int *n,int ***a,FILE *f=stdin)
{
	fscanf(f,"%d%d",m,n);
	(*a)=acc(*m,*n);
	for(int i=0;i<*m;i++)
		for(int j=0;j<*n;j++)	fscanf(f,"%d",&(*a)[i][j]);
}
void xuat(int m,int n,int **a)
{
	printf("MT\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		printf("%-5d",a[i][j]);
		printf("\n");
	}
}
void tbc(int m,int n,int **a)
{
	int d=0;
	float s=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(a[i][j] > -10 && a[i][j] <1)
				{
					d++;
					s+=a[i][j];
				}
	printf("TBC n so tu -10 den 1 %f",s/d);			
}
void am(int m,int n,int **a)
{
	int k=0;
	int max=INT_MIN;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(a[i][j]>max && a[i][j] <0)
			{
				max=a[i][j];
				k=1;
			}
	if(k==0)		printf("\nK co so am");
	else printf("\nso am max = %d",max);		
}
int main ()
{
	FILE *f=fopen("giang.txt","r");
	int m,n,**a;
	nhap(&m,&n,&a,f);
	xuat(m,n,a);
	tbc(m,n,a);
	am(m,n,a);
	fclose(f);
	free(a);
}


