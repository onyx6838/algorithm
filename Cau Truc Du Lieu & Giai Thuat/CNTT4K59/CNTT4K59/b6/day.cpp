#include<bits/stdc++.h>
using namespace std;
void nhap(int n,int *a)
{
	if(n>1) nhap(n-1,a);
	cout<<"a["<<n<<"]="; cin>>a[n];
}
void xuat(int L,int R,int *a)
{
	if(L==R) {cout<<setw(5)<<a[L]; return ;}
	int m=(L+R)/2;
	xuat(L,m,a);
	xuat(m+1,R,a);
}
void Sort(int *a,int n)
{
	if(n<=1) return;
	Sort(a,n-1);
	int i=n;
	while(i>1 && a[i]<a[i-1]) {swap(a[i],a[i-1]);i--;}
}
int main()
{
	int n,a[100];
	cout<<"nhap so phan tu : "; 	cin>>n;
	nhap(n,a);
	cout<<"DAy vua nhap\n"; xuat(1,n,a);
	Sort(a,n);
	cout<<"\nDAy sau khi sort \n"; xuat(1,n,a);
	
}


