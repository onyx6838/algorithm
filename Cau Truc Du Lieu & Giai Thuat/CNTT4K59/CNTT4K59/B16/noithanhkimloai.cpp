//noi thanh kim loai
#include<set>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a;
	//priority_queue<int,vector<int>,greater<int> > Q; //hang doi uu tien be den lon
	multiset<int> Q;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		Q.insert(a);
	}
	int res=0;
	while(Q.size()>1)
	{
		int u=*Q.begin(); Q.erase(Q.begin());
		int v=*Q.begin(); Q.erase(Q.begin());
		res+=u+v;
		Q.insert(u+v);
	}
	cout<<res;
}


