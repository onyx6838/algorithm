//Vi tri sau khi sap xep
#include"bits/stdc++.h"
using namespace std;
int main()
{
	int n;
	cin>>n;
	pair<int,int> A[n];
	for(int i=1;i<=n;i++)
	{
		cin>>A[i-1].first;
		A[i-1].second = i;
	}
	sort(A,A+n);
	for(auto t:A)	cout<<t.second<<" ";

}

