#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct diem
{
	int x,y;
};
diem *nhap(int *n,FILE *f=stdin)
{
	fscanf(f,"%d\n",n);
	diem *a=(diem *)calloc(*n,sizeof(diem));
	for(int i=0;i<*n;i++)	
	{
		fscanf(f,"%d",&a[i].x);
		fscanf(f,"%d",&a[i].y);
	}
	return a;
}
void xuat(int n,diem *a,FILE *f=stdout)
{
	fprintf(f,"Day diem\n");
	for(int i=0;i<n;i++)
	{
		fprintf(f,"%d",a[i].x);
		fprintf(f,"%8d\n",a[i].y);
	}
}
float kc(diem a,diem b)
{
	float u=a.x-b.x;
	float v=a.y-b.y;
	return sqrt((u*u)+(v*v));
}
void xa(int n,diem *a)
{
	int max;
	int t=0;
	diem O; O.x = O.y = 0;
	max = kc(a[0],O); 
	for (int i = 1; i < n; i++)
	{
		if (max < kc(a[i], O)) t=i;
	}
	printf("Diem xa goc toa do nhat la: %d  %d", a[t].x, a[t].y);
}
void dgk(int n,diem *a)
{
	float s=0;
	for(int i=1;i<n;i++)	s+=kc(a[i-1],a[i]);		// i = 1 -> n
	printf("\nDo dai DGK = %.1f",s);
}
int main ()
{
	int n;
	FILE *fi=fopen("in.txt","r");
	diem *a=nhap(&n,fi);
	xuat(n,a);
	xa(n,a);
	dgk(n,a);
	free(a);
	fclose(fi);
}
