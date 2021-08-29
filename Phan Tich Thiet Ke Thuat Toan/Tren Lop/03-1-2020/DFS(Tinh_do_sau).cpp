//Tim do sau (Tim thay thi hien thi ) (Y tuong 2)
#include"bits/stdc++.h"
using namespace std;
int DFS(int s,int f)
{
	int d[s+5];	// do do^. sau
	fill(d,d+s+1,-1);
	//d[0]=d[1]=.....=d[s]=-1;	//fill tu dong dien day` mang
	stack<int> S;
	S.push(s);
	d[s] = 0;	//do sau O
	while(S.size())
	{
		int u = S.top();S.pop();
		for(int a=1;a*a<=u;a++)
		{
			if(u%a==0)
			{
				int v=(a-1)*(u/a+1);
				if(d[v]==-1 && v>=f)
				{
					d[v] = d[u] + 1;	// vi tri cua cha da danh dau + 1
					S.push(v);	// xoa cha di ( di dau xoa do')
					if(v==f)	return d[v];	// tra ve phan` mang da thay = 1
				}
			}
		}
	}
	return -1;
}
int main()
{
	int k=DFS(30,10);
	if(k==-1)	cout<<"khong di duoc";
	else cout<<"Do sau "<<k;
}
