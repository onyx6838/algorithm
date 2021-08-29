//Moi con duong ve 0 neu n = a*b sinh m =(a-1)(b+1) chi phi b/a
#include<bits/stdc++.h>
using namespace std;
struct tt
{
	int elem,value;
};
struct cmp	// tu be den lon gia tri (value)
{
	bool operator()(tt u,tt v)
	{
		return u.value > v.value;
	}
};// doi tuong so sanh
struct zero
{
	int s,f, d[1000]={};// mang d luu chi phi tot nhat di tu s den tung i
	int p[1000]; //mang cha de in duong di 30->28->24
	priority_queue<tt,vector<tt>,cmp> Q;
	void BFS()	// Best - first - Search -> hoc mon tri tue nhan tao	(tim kiem toi uu dau tien)
	{
		cin>>s>>f;
		fill(d,d+s,1e9);
		Q.push({s,0});
		d[s] = 0;
		while(Q.size())	// ra khoi hang tim ngan nhat dua vao u
		{
			tt u = Q.top();
			Q.pop();
			d[u.elem] = -1;	// da lay ra
			if(u.elem == f)
			{
				cout<<"\nChi phi tu s-f "<<u.value<<endl;
				induong(f);
				return;
			}
			for(int a=1;a*a<=u.elem;a++)
			{
				if(u.elem %a ==0)
				{
					int v = (a-1) * (u.elem/a + 1);
					if(d[v]>u.value +u.elem/a/a)
					{
						Q.push({v,u.value + u.elem/a/a});
						d[v] = u.value + u.elem/a/a;
						p[v] = u.elem;
					}
				}
			}
		}
	}
	void induong(int v)
	{
		if(v==s)	cout<<s;
		else
		{
			induong(p[v]);
			cout<<"-->"<<v;
		}
	}
};
int main()
{
	zero Z;
	Z.BFS();
}
