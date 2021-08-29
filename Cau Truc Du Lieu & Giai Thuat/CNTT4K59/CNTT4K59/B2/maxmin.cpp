//Vi du cho day a1,2,...an tim gia tri lon nhat va nho nhat
#include<bits/stdc++.h>
using namespace std;
int maxmin(int *a,int n,bool ismax=true)
{
	int m=a[0];
	for(int i=1;i<n;i++)
	if(a[i]>m==ismax) m=a[i];
	return m;
}
int main()
{
	int a[]={3,6,1,8,2},n=sizeof(a)/sizeof(int);
	cout<<"\nMax = "<<maxmin(a,n);
	cout<<"\nMin = "<<maxmin(a,n,false);
}


