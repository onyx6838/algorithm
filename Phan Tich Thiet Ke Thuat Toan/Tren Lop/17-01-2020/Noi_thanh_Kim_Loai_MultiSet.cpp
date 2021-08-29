#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,s=0,x;
	multiset<long long> S;
	cin>>n;
	for(long long i=0;i<n;i++)	
	{
		cin>>x;
		S.insert(x);
	}
	while(S.size()>=2)
	{
		long long u = *S.begin();	S.erase(S.begin());
		long long v = *S.begin(); 	S.erase(S.begin());
		s+=u+v;
		S.insert(u+v);
	}
	cout<<s;
}
