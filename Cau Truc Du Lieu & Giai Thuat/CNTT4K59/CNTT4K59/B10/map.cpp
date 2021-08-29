//Dong nuoc
//Ve nha tim doc DFS va cau truc map, unordered_map
#include<bits/stdc++.h>
//#include"mystack.cpp"
using namespace std;
typedef pair<int,int>TT;  //moi phan tu co 2 thanh phan first va second
map<TT,TT> d;
#define x first
#define y second
void Induong(TT s,TT f)
{
	if(s==f) cout<<"("<<s.x<<","<<s.y<<")";
	else
	{
		Induong(s,d[f]);
		cout<<"->("<<f.x<<","<<f.y<<")";
	}
}
void DFS(int n,int m,int f)
{
	if(f%__gcd(n,m)!=0) {cout<<"Khong di duoc"; return;}
	stack<TT> S;
	S.push({0,0}); d[{0,0}]={0,0};
	while(S.size())
	{
		TT u=S.top();    S.pop();
		int k=u.x+u.y;
		TT Next[]={{0,u.y},{u.x,0},{n,u.y},{u.x,m},{k<m?0:k-m,k<m?k:m},
		{k<n?k:n,k<n?0:k-n}};
		for(TT v:Next)
		if(d.find(v)==d.end())
		{
			d[v]=u;
			if(v.x==f||v.y==f) {Induong({0,0},v); return;}
			S.push(v);
		}
	}
}
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	DFS(n,m,k);
}


