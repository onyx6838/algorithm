#include<iostream>
using namespace std;
// gan giong giam de tri
int G[int(1e+5)]={},N[int(1e5+5)];
int root(int v)
{
	return G[v]==0?v:root(G[v]);
	// ==0 thi la chinh no con` k thi de quy tim goc 
	// 7 cha 1 , 1 la con 2 -> goc 7 la 2 (0)
}
int main()
{
	int n,t,m,u,v,max=0,res;
	//res: so nhom
	// u,v cac node va t :node trung gian
	scanf("%d%d",&n,&m);
	res=n;
	fill(N,N+n+1,1);
	while(m--)
	{
		scanf("%d%d",&u,&v);
		int u1=root(u),v1=root(v);
		if(u1!=v1)	// goc 2 node la # nhau
		{
//			G[u1]=v1;
//			N[v1]+=N[u1];
//			if(max < N[v1])	max = N[v1];
//			res--;
//		(ghep cac goc voi nhau) (7-2-1)
			G[u1]=v1;
			while(u!=u1)
			{
				t=G[u];
				G[u]=v1;
				u=t;
				// ghep nhung van giu lai
			}
			while(v!=v1)
			{
				t=G[v];
				G[v]=v1;
				v=t;
				// tg tu
			}
			N[v1]+=N[u1];
			if(max < N[v1])	max = N[v1];
			res--;
			// ghep tat cac node vs goc ( giam do cao cua cay)
			// 1-7,1-2
			// giam thoi gian ghep
		}
	}
	printf("%d\n%d",res,max);
}

