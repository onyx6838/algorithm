//BFS Dong nuoc
#include<bits/stdc++.h>
using namespace std;
typedef	pair<int,int> TT;	//TT - trang thai
struct Water
{
	int n,m,k;
	map<TT,int> d;
	int BFS()
	{
		queue<TT> Q;
		Q.push({0,0});
		d[{0,0}] = 0;
		while(Q.size())
		{
			TT u = Q.front();	Q.pop();
			int z = u.first + u.second;
			TT Next[] = // 6 trang thai
			{
				{0,u.second} , {u.first,0} , {n,u.second} , {u.first,m}
				, {z<=m?0:z-m,z<m?z:m}	// 1 -> 2	(0,z) hoac (z-m,m)
				, {z<n?z:n,z<n?0:z-n}	// 2 -> 1
			};
			for(TT v:Next)
			{
				if(d.find(v)==d.end())
				{
					d[v] = d[u] + 1;
					Q.push(v);
					if(v.second == k || v.first==k)	// tim thay 'k' xuat ra
					{
						return d[v];
					}
				}
			}
		}
		return -1;
	}
	void sol()
	{
		cin>>n>>m>>k;
		if(k%__gcd(m,n)==0)
		{
			int s=BFS();
			if(s==-1)	cout<<"Khong dong duoc nuoc";
			else	cout<<s;
		}
		else cout<<"Khong dong duoc nuoc";	
	}
};
int main()
{
	Water Q;
	Q.sol();
}
