//ve duong di cua ptu can tim (Y tuong 3)
#include"bits/stdc++.h"
using namespace std;
void induong(int s,int f,int *d)
{
	stack<int> S;
	while(f!=s)
	{
		S.push(f);
		f=d[f];
	}
	cout<<s;
	while(S.size())
	{
		cout<<"->"<<S.top();
		S.pop();
	}
}
void induong1(int s,int f,int *d)	
{
	//De quy : hien thi duong di cua cac cha trc no roi hien thi f
	if(s==f)	cout<<s;
	else
	{
		induong1(s,d[f],d);
		cout<<"->"<<f;
	}
}
void DFS(int s,int f)
{
	int d[s+5];	// do do^. sau
	fill(d,d+s+1,-1);
	//d[0]=d[1]=.....=d[s]=-1;	//fill tu dong dien day` mang
	stack<int> S;
	S.push(s);
	d[s] = 0;	//do sau O
	while(S.size())
	{
		int u=S.top();S.pop();
		for(int a=1;a*a<=u;a++)
		{
			if(u%a==0)
			{
				int v=(a-1)*(u/a+1);
				if(d[v]==-1 && v>=f)	//v>=f tranh tinh trang tim lai
				{
					d[v] = u;	// Loai bo cha cua ptu can tim
					S.push(v);
					if(v==f)
					{
						induong(s,f,d);
						return;
					}
				}
			}
		}
	}
	cout<<"Khong di duoc";
	// Khu? de quy
}
int main()
{
	DFS(30,10);
}
