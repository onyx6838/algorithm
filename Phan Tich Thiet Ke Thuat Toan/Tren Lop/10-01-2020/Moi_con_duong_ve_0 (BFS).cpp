//BFS - moi con duong ve 0
#include<bits/stdc++.h>
using namespace std;
struct zero
{
	int s,f;
	map<int, pair<int,int>> d;	//d[22] = {30,3}, d[10]={12,3}	// ptich 
	// pair<int,int> first : cha , second: ptich
	void induong(int f)
	{
		if(s==f)
		{
			cout<<s;
			return;
		}
		induong(d[f].first);
		cout<<"("<<d[f].second<<","<<d[f].first/d[f].second<<")"<<"->"<<f;
	}
	void BFS()
	{
		queue<int> Q;
		Q.push(s);
		while(Q.size())
		{
			int u=Q.front();Q.pop();
			for(int a=1;a*a<=u;a++)
			{
				if(u%a==0)
				{
					int v=(a-1)*(u/a+1);
					if(v>=f && d.find(v)==d.end())	// k tim thay
					{
						d[v]={u,a};
						Q.push(v);
						if(v==f)
						{
							induong(f);
							return;
						}
					}
				}
			}
		}
		cout<<"\nKhong di duoc";
	}
	void sol()
	{
		cout<<"Nhap s,f : ";cin>>s>>f;
		BFS();
		// BTVN : tim do sau
	}
};
int main()
{
	zero Z;
	Z.sol();
}
