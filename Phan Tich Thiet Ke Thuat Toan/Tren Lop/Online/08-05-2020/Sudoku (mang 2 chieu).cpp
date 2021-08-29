#include<bits/stdc++.h>
using namespace std;
class sudoku
{
	int a[9][9];
	public:void nhap()
	{
		for(int i=0;i<9;i++)
			for(int j=0;j<9;j++)	cin>>a[i][j];
	}	
	void xuat()
	{
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)	cout<<a[i][j]<<" ";
			cout<<"\n";
		}
	}
	void TRY(int u,int v) //gia su da di duoc x[0] den x[k-1]
	{
		if(u>8)	xuat();
		else if(a[u][v])	TRY(u+v/8,(v+1)%9);	//ktra danh dau hay chua ( da cho so vao hay chua)
		// u het hang xuong hang, v het dong tu ve dau dong	// tang v den cuoi thi sang dau hang` moi											
		else
		{
			for(int t=1;t<=9;t++)
			if(datduoc(u,v,t))
			{
				a[u][v] = t;
				TRY(u+v/8,(v+1)%9);
				a[u][v] = 0;	// trc khi lui dat lai 0
			}
		}
	}
	bool datduoc(int u,int v,int t)
	{
		for(int i=0;i<9;i++)	if(a[u][i] == t || a[i][v]==t)	return 0;
		for(int i=u/3*3;i < u/3*3+3; i++)
		for(int j=v/3*3;j < v/3*3+3; j++)		if(a[i][j]==t)	return 0;
		return 1;
	}
};
int main()
{
	freopen("s.txt","r",stdin);
	sudoku S;  
	S.TRY(0,0);
}
