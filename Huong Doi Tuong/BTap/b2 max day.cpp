// tra ve max cua day.nhap 2 day A B tinh M1-M2 la max A va max B
#include<iostream>
using namespace std;
void nhap(int &n,int *&a)
{
	a=new int[n];
	cin>>n;
	for(int i=0;i<n;i++)	cin>>a[i];	
}
void xuat(int &n,int *a)
{
	for(int i=0;i<n;i++)	cout<<a[i]<<" ";
	cout<<endl;
}
int max(int n,int *a)
{
	int max=a[0];
	for(int i=0;i<n;i++)
		if(a[i]>max)	max=a[i];
	return max;
}
int main()
{
	int m,n,*a,*b,M1,M2,z;
	nhap(m,a);
	xuat(m,a);
	nhap(n,b);
	xuat(n,b);
	M1=max(m,a);
	M2=max(n,b);
	z=M1-M2;
	cout<<z;
}

