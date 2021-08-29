#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,M,a,C[2005]={};
	cin>>n>>M;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		for(int j=M;j>=a;j--)	C[j] = max(C[j],a+C[j-a]);
	}
	cout<<C[M];
}
