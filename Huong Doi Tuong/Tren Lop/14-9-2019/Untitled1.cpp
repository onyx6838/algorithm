#include"iostream"
using namespace std;
int main()
{int n=5;
int a[10];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
cout<<"\nday vua nhap:";
for(int i=0;i<n;i++)
{
	cout<<a[i];
}
for(int i=0;i<n-1;i++)
for(int j=i+1;j<n;j++)
{
	if(a[i]<a[j])
	{
	int t=a[i];
	a[i]=a[j];
	a[j]=t;
	}
}
cout<<"\nday sap xep:";
for(int i=0;i<n;i++)
{
	cout<<a[i];
}
}

