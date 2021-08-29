//zero
#include<bits/stdc++.h>
//#include"stacknode.cpp"
#include"queue.cpp"
using namespace std;
void Induong(int s,int f,int *d)
{
	if(s==f) cout<<s;
	else {Induong(s,d[f],d);cout<<"->"<<f;}
//	stack<int> S;
//	while(f!=s) 
//	{
//		S.push(f);
//		f=d[f];	
//	}
//	cout<<s;
//	while(S.size())
//	{
//		cout<<"->"<<S.top();
//		S.pop();
//	}
}
bool BFS(int s,int f,int *d) //mang d danh dau vao roi la 1 chua vao la 0
{
	Queue<int> S;
	S.push(s); d[s]=1;
	while(S.size())
	{
		int u=S.front();
		S.pop();
		for(int a=1;a*a<=u;a++)
		if(u%a==0)
		{
			int v=(a-1)*(u/a+1);
			if(d[v]==0) 
			{
				d[v]=u;   //u la cha cua ve
				S.push(v);
			}
			if(v==f) {Induong(s,f,d);return true;}
		}
	}
	return 0;
}
int main()
{
	int s,f,d[10000];
	cout<<"Nhap dinh xuat phat "; cin>>s;
	cout<<"Nhap dinh ket  thuc "; cin>>f;
	fill(d,d+s+1,0);
	if(!BFS(s,f,d)) cout<<"khong di duoc";
}


