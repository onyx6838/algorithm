#include<bits/stdc++.h>
using namespace std;
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
		fscanf(f,"%d\n",&a[i].x);
		fscanf(f,"%d\n",&a[i].y);
	}
	return a;
}
void xuat(int n,diem *a)
{
	printf("Toa do diem\n");
	for(int i=0;i<n;i++)	printf("%-5d%-8d\n",a[i].x,a[i].y);
}
float kc(diem a,diem b)
{
	float u=a.x-b.x;
	float v=a.y-b.y;
	return sqrt((u*u)+(v*v));
}
void dem(int n,diem *a)
{
	int d1,d2;
	d1=d2=0;
	diem O;O.x=O.y=0;
	for(int i=0;i<n;i++)
	{
		if(kc(O,a[i])<5)	d1++;
		if(kc(O,a[i])>5)	d2++;
	}	
	int t=(d1*(d1-1))/2;
	printf("So diem nam trong dtron tam O BK R = %d",d1);	
	printf("\nSo diem nam ngoai dtron tam O BK R = %d",d2);	
	printf("\nSo doan nam trong dtron tam O BK R = %d",t);
}
int main ()
{
	FILE *f=fopen("toado.txt","r");
	int n;
	diem *a=nhap(&n,f);
	xuat(n,a);
	dem(n,a);
	fclose(f);
	free(a);
}
