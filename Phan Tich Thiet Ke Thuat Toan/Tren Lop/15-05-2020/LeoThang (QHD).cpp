#include<bits/stdc++.h>
using namespace std;
#define LL long long
LL L(int n){
LL c[n+5] = {0,1,2,4};
	for(int k=4;k<=n;k++)
		c[k] = c[k-1] + c[k-2] + c[k-3];
	return c[n];
}
int main()
{
	int n;
	cin>>n;
	cout<<L(n);
}
