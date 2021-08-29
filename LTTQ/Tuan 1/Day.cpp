#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap ptu thu %d:  ",i+1);
		scanf("%d",&a[i]);
	}
}
void xuat(int a[],int n)
{
	printf("Cac ptu co trong mang \n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	nhap(a,n);
	xuat(a,n);;
}
