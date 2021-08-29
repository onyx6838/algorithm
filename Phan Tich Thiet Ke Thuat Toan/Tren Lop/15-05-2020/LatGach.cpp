#include<bits/stdc++.h>
using namespace std;
long long latgach(int n)
{
	long long c[n+3] = {0,1,2,3};
	for(int k=4;k<=n;k++)
	{
		c[k] = c[k-1] + c[k-2];
	}
	return c[n];
}
int main()
{
	int n;
	cin>>n;
	cout<<latgach(n);
}

