#include<bits/stdc++.h>
using namespace std;
long long catalan(int n){
	long long c[n+5] = {0,1,1,2,5};
	int s =0;
	for(int k=5;k<=n;k++) 
	{
		for(int i=1;i<n;i++)
		{
			c[k]+=	c[i] * c[n-i];
		}
	}	
	return c[n];
}
int main()
{
	int n;
	cin>>n;
	cout<<catalan(n);
}
