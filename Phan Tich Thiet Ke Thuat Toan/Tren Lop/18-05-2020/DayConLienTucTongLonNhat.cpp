#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a[100005], c[100005], res=INT_MIN;
	cin>>n;
	for(int i=1;i<=n;i++)	cin>>a[i];
	c[1] = a[1];
	res = c[1];
	for(int i=2;i<=n;i++)
	{
		c[i] = max(c[i-1],0) + a[i];
		res = max(res,c[i]);
	}
	cout<<res;
}
