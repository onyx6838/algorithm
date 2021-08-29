#include<bits/stdc++.h>
using namespace std;

#ifndef __day_cpp__
#define __day_cpp__

template<class T>
void Nhap(int &n,T*&a)
{
	cin>>n;
	a= new T[n+1];
	for(int i=1;i<=n;i++) cin>>a[i];
}
template<class T>
void Xuat(int n,T *a)
{
	for(int i=1;i<=n;i++) cout<<setw(6)<<a[i];
}
#endif
