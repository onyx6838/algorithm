//BFS Dong nuoc
#include<bits/stdc++.h>
using namespace std;
typedef	pair<int,int> TT;	//TT - trang thai
struct Water
{
	int n,m,k;
	map<TT,TT> d;	// d[{0,5}] = {0,0} mang cha
	void BFS()
	{
		queue<TT> Q;
		Q.push({0,0});
		d[{0,0}] = {0,0};	// de^? cha la {0,0} tranh xet lai
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
				if(d.find(v)==d.end())	//chua co duong di
				{
					d[v] = u;
					Q.push(v);
					if(v.first == k || v.second == k)	// tim thay 'k' xuat ra
					{
						inkq(v);
						return;
					}
				}
			}
		}
		cout<<"Khong dong duoc nuoc";
	}
	void inkq(TT f)
	{
		if(f==make_pair(0,0))	cout<<"(0,0)";
		else
		{
			inkq(d[f]);
			cout<<"-> ("<<f.first<<","<<f.second<<")";
		}
	}
	void sol()
	{
		cout<<"Nhap n,m,k: ";cin>>n>>m>>k;
		if(k%__gcd(m,n)==0)	BFS();
		else cout<<"Khong dong duoc nuoc";
		// k khong chia het cho UCLN cua n,m -> k dong duoc
		// BTVN : tim do sau	
	}
};
int main()
{
	Water Q;
	Q.sol();
}
