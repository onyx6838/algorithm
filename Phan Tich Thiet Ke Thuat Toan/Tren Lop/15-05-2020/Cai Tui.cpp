#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,M;
	cin>>n>>M;
	int a[n+5],C[M+5]={};
	for(int i=1;i<=n;i++)	cin>>a[i];
	for(int i=1;i<=n;i++)
	for(int j=M;j>=a[i];j--)	C[j] = max(C[j],a[i]+C[j-a[i]]);
	cout<<C[M];
}
