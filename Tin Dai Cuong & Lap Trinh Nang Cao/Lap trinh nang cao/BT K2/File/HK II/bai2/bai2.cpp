/*	-khai bao ctruc diem	- nhap day diem tu file co cap phat bo nho dong		-tinh Cvi da giac tao boi day diem
- tinh S da giac ..		-tinh S htron min tam la` 1 (.) cac diem nay chua tat ca cac diem
- tim kcach diem xa nhau nhat		- dem so doan thang cat duong thang y=ax+b*/
#include<bits/stdc++.h>
using namespace std;

struct diem
{
	float x,y;	
};
diem *nhap(int *n,FILE *f=stdin)
{
	fscanf(f,"%d\n",n);
	diem *a=(diem *)calloc(*n+1,sizeof(diem));
	for(int i=0;i<*n;i++)	fscanf(f,"%f%f",&a[i].x,&a[i].y);
	return a;
}
void xuat(int n,diem *a,FILE *f=stdout)
{
	fprintf(f,"%d\n",n);
	for(int i=0;i<n;i++)	fprintf(f,"%5.1f%5.1f\n",a[i].x,a[i].y);
}
int main()
{
	int n;
	diem *a;
	FILE *f=fopen("daydiem.txt","r");
	a=nhap(&n,f);
	xuat(n,a);
	fclose(f);
	free(a);
}
