#include<bits/stdc++.h>
using namespace std;
//O(n*logn)
int main()
{
	int n,a[100005];
	cin>>n;
	multiset<int> S;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		S.insert(a[i]);
	}
	int res = ;
	for(int i=1;i<n;i++)	// tim thay va xoa ra khoi set r tim` max
	{
		auto t = S.find(a[i]);		// xoa theo lan luot
		S.erase(t);	// xoa theo dia chi (tranh xoa cac phan tu trung nhau)
		int max = *S.rbegin();	// max = cuoi'
		if(a[i]<max)	res+=max-a[i];
	}	// mua o? a[i] ban o max
	cout<<res;
}
