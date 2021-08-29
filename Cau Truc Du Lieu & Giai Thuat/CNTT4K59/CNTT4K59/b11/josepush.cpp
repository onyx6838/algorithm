#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
	queue<int> Q;
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++) Q.push(i);
	while(Q.size()>1)
	{
		Q.pop(); //xoa so thang dau tien
		for(int i=1;i<=k;i++)
		{
			int u=Q.front(); Q.pop();
			Q.push(u);
		}
	}
	cout<<Q.front();
}


