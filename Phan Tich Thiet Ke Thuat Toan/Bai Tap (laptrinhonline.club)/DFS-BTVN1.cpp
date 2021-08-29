#include<bits/stdc++.h>
using namespace std;
void DFS(int s)
{
	int x[s+5]={},dem=0;
	int d[s+5]={};//mang danh dau khoi tao toan 0
	stack<int> S;
	S.push(s);
	d[s]=1;//danh dau da vao stack
	while(S.size())//S khac rong
	{
		int u=S.top();S.pop();
		for(int a=1;a*a<=u;a++)
		{
			if(u%a==0)
			{
				int v=(a-1)*(u/a+1);
				if(d[v]==0)
				{	
					d[v]=1;
					x[dem]=v;dem++;
					S.push(v);
				}
			}
		}
	}
	sort(x,x+dem);
    for(int i=0;i<dem;i++) cout<<x[i]<<" ";
	cout<<"tong cac so da di:"<<dem;
}
int main()
{
	int n;
	cout<<"nhap so can xet:";cin>>n;
	DFS(n);
}
