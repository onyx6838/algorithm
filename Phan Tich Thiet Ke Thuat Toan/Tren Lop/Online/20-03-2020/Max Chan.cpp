// Vi du nhap day so nguyen trong (-10^9 -> 10^9) tim max nhung so chan
#include<bits/stdc++.h>
using namespace std;
long long Max(long long *a,int n)
{
	long long res=LONG_MIN;
	for(int i=0;i<n;i++)
	if(a[i]%2==0 and a[i]>res)	res=a[i];
	return res;
}
int main()
{
	long long a[]={3,4,7,28,1,6}, n=sizeof(a)/sizeof(a[0]);
	long long k=Max(a,n);
	if(k==LONG_MIN)	cout<<"K co so chan";
	else cout<<"Max chan: "<<k;
}
