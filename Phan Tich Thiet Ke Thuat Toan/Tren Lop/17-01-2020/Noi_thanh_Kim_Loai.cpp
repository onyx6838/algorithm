#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
	priority_queue<int,vector<int>,greater<int>	> PQ;
	int n,x,u,v,t = 0;
	cout<<"Nhap n = ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>x;
		PQ.push(x);
	}
	// push vao PQ
	while(PQ.size() >= 2)
	{
		u = PQ.top(); PQ.pop();	
		v = PQ.top(); PQ.pop();
		t+=u+v;
		PQ.push(u+v);
	}
	cout<<"\nTong chi phi = "<<t;
}
