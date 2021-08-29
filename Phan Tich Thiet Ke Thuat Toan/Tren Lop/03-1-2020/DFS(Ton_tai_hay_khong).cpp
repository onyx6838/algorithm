//Moi con duong ve O (y tuong 1)
#include"bits/stdc++.h"
using namespace std;
bool DFS(int s,int f)
{
	int d[s+5] = {};	

	stack<int> S;
	S.push(s);
	d[s]=1;
	while(S.size())	
	{
		int u = S.top();S.pop();	
		for(int a=1;a*a<=u;a++)
		{
			if(u%a==0)
			{
				int v = (a-1)*(u/a+1);
				if(d[v]==0 && v>=f)	
			
				{
					d[v] = 1;
					S.push(v);
					if(v==f)	return 1;
				}
			}
		}
	}
	return 0;
}
bool dfs(int s,int f)	// De quy
{
	if(s==f)	return 1;
	if(s<f)		return 0;
	for(int a=1;a*a<=s;a++)
	{
		if(s%a==0)
		{
			int x = (a-1)*(s/a+1);
			if(x>=f	&& dfs(x,f))	return 1;	// di tim va danh dau . Neu gap f thi return 1 ve kthuc for
		}
	}
	return 0;
}
int main()
{
	cout<<(DFS(30,10)?"Di duoc":"Khong di duoc");
}
