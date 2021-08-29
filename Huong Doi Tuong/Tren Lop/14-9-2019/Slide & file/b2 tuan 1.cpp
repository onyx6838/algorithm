#include<iostream>
#include<conio.h>
using namespace std;
void nhapday(int &n,int *&a)
{
	a=new int[n];
	cin>>n;
	for(int i=0;i<n;i++)	cin>>a[i];
}
void xuat(int &n,int *a)
{
	for(int i=0;i<n;i++)	cout<<a[i]<<" ";
}
int main ()
{
	int *a,n;
	nhapday(n,a);
	xuat(n,a);
}


