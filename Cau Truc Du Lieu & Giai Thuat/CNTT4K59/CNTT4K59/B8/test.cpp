#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long i,j,n=3045512;
	for(i=0;i*i<=n;i++)
	for(j=0;j*j<=n;j++)
	if(i*i+j*j==n) cout<<i<<" "<<j<<"\n";

}


