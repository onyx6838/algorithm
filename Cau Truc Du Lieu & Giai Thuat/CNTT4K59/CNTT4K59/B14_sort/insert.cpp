#include<bits/stdc++.h>
using namespace std;
template<class T>
void InsertSort(T *L,T *R,bool cmp(T,T))
{
	for(T*i=L;i<R;i++)
	{
		T x=*i,*j=i-1;
		while(j>=L&& *j>x) *(j+1)=*j--;
		*(j+1)=x;
	}
}
bool ss(int u,int v) {return u<v;}
int main()
{
	int a[]={4,7,2,8,1,6,4,8,3},n=sizeof(a)/sizeof(int);
	InsertSort(a,a+n,ss);
	cout<<"\nSau khi sap xep \n"; for(auto x:a) cout<<x<<"\t";
}


