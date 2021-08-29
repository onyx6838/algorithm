#include<bits/stdc++.h>

void nhap(int *n,int **a,int **b,FILE *f=stdin)
{
	fscanf(f,"%d",n);
	*a=(int *)calloc(*n+1,sizeof(int));
	for(int i=0;i<*n;i++)	fscanf(f,"%d",&(*a)[i]);
	*b=(int *)calloc(*n+1,sizeof(int));
	for(int i=0;i<*n;i++)	fscanf(f,"%d",&(*b)[i]);
}

void xuat(int n,int *a,int *b)
{	
	printf("%d\n",n);
	for(int i=0;i<n;i++)	printf("%5d",a[i]);
	printf("\n");
	for(int i=0;i<n;i++)	printf("%5d",b[i]);
	printf("\n");
}
int max(int n,int *a,int *b)
{
	int max;
	int maxA = a[0];
	int maxB = b[0];
	for(int i=0;i<n;i++)	if(a[i] > maxA)	 maxA = a[i];
	for(int i=0;i<n;i++)	if(b[i] > maxB)	 maxB = b[i];
	if(maxA < maxB)	max = maxB;
	else max = maxA;
	return max;
}
//void gop(int *c,int *k,int *a,int *b,int n)
//{
//	*k = 2*n;
//	c=(int *)calloc(*k+1,sizeof(int));
//	for(int i=0;i<n;i++)	c[i] = a[i];
//	for(int i=n;i<*k;i++)	c[i] = b[i];
//	
//	for(int i=0;i<*k;i++)
//	for(int j=i+1;j<*k;j++)
//	{
//		if(c[i] < c[j])
//		{
//			int t;
//			t=c[i]; 
//			c[i]=c[j];
//			c[j]=t;
//		}
//	}
//	for(int i=0;i<*k;i++)	printf("%5d",c[i]);	
//}
int *hop(int n,int *a,int *b,int *k,int *c)
{
	*k=n+n;
	for(int i=0;i<n;i++)	c[i]=a[i];
	for(int i=0;i<n;i++)	c[i+n]=b[i];
	return c;
}
int daymoi()
{
	
}
int main()
{
	FILE *fi=fopen("data.txt","r");
	int n,*a,*b,*d,k;
	if(!fi)	printf("Error");
	nhap(&n,&a,&b,fi);
	xuat(n,a,b);
	int maxday = max(n,a,b);
	printf("Max 2 day = %d",maxday);

	//hop(n,a,b,&k,d);
	free(a);
	free(b);
	fclose(fi);
}
