#include<bits/stdc++.h>
using namespace std;

template<class T>
void SelectSort(T *L,T *R,bool cmp(T,T))
{
	for(T*i=L;i<R;i++)
	{
		T*p=i;
		for(T*j=i+1;j<R;j++) if(cmp(*j,*p)) p=j;
		swap(*i,*p);
	}
}
bool ss(int u,int v) {return u<v;}
int main()
{
	int a[]={4,7,2,8,1,6,4,8,3},n=sizeof(a)/sizeof(int);
	SelectSort(a,a+n,ss);
	cout<<"\nSau khi sap xep \n"; for(auto x:a) cout<<x<<"\t";
}


