#include<bits/stdc++.h>
using namespace std;
struct graph
{
	int n,m;
	vector<int> A[100];		// A[1] = {2,4}
	void readfile(string fname)
	{
		ifstream fin(fname);	//Mo file trong C++11	ifstream : file doc
		fin>>n>>m;
		for(int i=1;i<=m;i++)
		{
			int u,v;
			fin>>u>>v;
			A[u].push_back(v);	// Hang thu i push_back (toa do)	, tang i di toi so^' nao thi push_back
		}
		fin.close();
	}
	void write()
	{
		for(int u=1;u<=n;u++)
		{
			cout<<"\n"<<u<<":";
			for(int v:A[u])	cout<<v<<" ";
		}
	}
	map<int,int> d,p;	// p = parent, d=depth
	void BFS()
	{
		int s,f;
		cout<<"\nNhap s = "; cin>>s;
		cout<<"Nhap f = "; cin>>f;
		stack<int> Q;
		Q.push(s);
		d[s] = 0;
		while(Q.size())
		{
			int u = Q.top(); Q.pop();
			for(int v:A[u])
			{
				if(d.find(v)==d.end())
				{
					d[v] = d[u]+1;
					p[v]=u;
					Q.push(v);
					if(v==f)
					{
						cout<<"\n"<<s<<" den "<<f<<" "<<d[f]<<" : ";
						induong(s,f);
						return;
					}
				}
			}
		}
		cout<<"Khong di duoc "<<s<<" den "<<f;
	}
	void induong(int s,int f)
	{
		if(s==f)	cout<<s;
		else
		{
			induong(s,d[f]);
			cout<<"->"<<f;
		}
	}
};
int main()
{
	graph G;
	G.readfile("g.txt");
	G.write();
	G.BFS();
}
// tim hieu multimap
// BTVN: bai tap in ra cac so di dc (BFS) dung set (k dung mang)
