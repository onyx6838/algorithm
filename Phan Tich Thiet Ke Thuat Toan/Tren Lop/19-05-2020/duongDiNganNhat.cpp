#include<bits/stdc++.h>
using namespace std;
class Floyd
{
	int inf = 1e9,n,m,c[100][100],p[100][100];
	void thuan(){
		for(int k=1;k<=n;k++)
		for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		if(c[i][j] > c[i][k] + c[k][j])
		{
			c[i][j] = c[i][k] + c[k][j];
			p[i][j] = k;
		}
	}
	void nghich(int u, int v){
		if(p[u][v]==0)	cout<<u<<"->";
		else
		{
			nghich(u,p[u][v]);
			nghich(p[u][v],v);
		}
	}
	public:void nhap(string fn){
		ifstream fin(fn);
		fin>>n>>m;	// doc so dinh m va so sah canh m tu`b 	
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)	{
				c[i][j] = inf;
				p[i][j] = 0;
			}
			c[i][i] =0;
		}
		for(int i=1;i<=m;i++){
			int u,v,w;
			fin>>u>>v>>w;
			c[u][v] = w;
		}
		fin.close();
	}
	void sol(){
		nhap("g.txt");
		thuan();
		for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		if(i!=j){
			if(c[i][j] ==inf) printf("\n%d -> %d khong di cuoc"),i,j;
			else
			{
				printf("\n%d -> %d : %d gom`:",i,j,c[i][j]);
				nghich(i,j);
				cout<<"->"<<j;
			}
		}
	}
};
int main()
{
	Floyd f;
	f.sol();
}
