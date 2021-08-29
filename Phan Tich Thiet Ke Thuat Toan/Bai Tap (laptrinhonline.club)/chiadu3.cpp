#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i) cin>>a[i];
	sort(a,a+n);
	for(int i=0;i<n;i++) if(a[i]%3==0) cout<<a[i]<<" ";
	for(int i=0;i<n;i++) if(a[i]%3==1) cout<<a[i]<<" ";
	for(int i=0;i<n;i++) if(a[i]%3==2) cout<<a[i]<<" ";	
}
