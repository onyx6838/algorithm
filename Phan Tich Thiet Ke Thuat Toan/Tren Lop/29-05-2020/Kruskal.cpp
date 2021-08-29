//Kruskal
#include<bits/stdc++.h>
using namespace std;
//edge: canh
struct Edge
{
	int u,v,w;
};
//graph: do thi
struct Graph{
	int n,m,P[10005]={};
	Edge A[20005];
	void sol()
	{
		cin>>n>>m;
		for(int i=0;i<m;i++)	cin>>A[i].u>>A[i].v>>A[i].w;
		sort(A,A+m,[](Edge a,Edge b){return a.w < b.w;});
		int T = 0;
		for(int i=0;i<m;i++)
		{
			int z = root(A[i].u), t = root(A[i].v);	// tra ve goc chinh no 
			if(z!=t)
			{
				P[z] = t;
				T+=A[i].w;
				cout<<"\nChon canh "<<A[i].u<<" - "<<A[i].v<<" ts "<<A[i].w;
			}
		}
		cout<<T;
	}
	int root(int x)	// kiem tra co trung nhau k (co goc giong nhau)
	{
		return P[x]?root(P[x]):x;	// truy ve goc ra cha cua no con` k thi tra ve chinh no
	}
};
int main()
{
	Graph H;
	H.sol();
}
