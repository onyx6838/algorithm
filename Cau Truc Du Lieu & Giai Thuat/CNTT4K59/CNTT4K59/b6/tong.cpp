#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s=0;
	cin>>n;
	for(int i=1,k=1;i<=n;i+=k++) s+=i;
	cout<<s;

}


