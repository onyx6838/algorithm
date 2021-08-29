// Game Sudoku
#include<bits/stdc++.h>
using namespace std;
class sudoku
{
	int a[9][9] , *x = (int*)a;
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
	void TRY(int k) //gia su da di duoc x[0] den x[k-1]
	{
		if(k > 80)	xuat();
		else if(x[k])	TRY(k+1);
		else
		{
			for(int t=1;t<=9;t++)
			if(datduoc(k,t))
			{
				x[k] = t;
				TRY(k+1);
				x[k] = 0;	// trc khi lui dat lai 0
			}
		}
	}
	bool datduoc(int k,int t)
	{
		int u=k/9, v=k%9;	// doi vi tri tu mang 2 chieu sang mang 1 chieu
		for(int i=0;i<9;i++)	if(a[u][i] == t || a[i][v]==t)	return 0;
		for(int i=u/3*3;i < u/3*3+3; i++)
		for(int j=v/3*3;j < v/3*3+3; j++)		if(a[i][j]==t)	return 0;
		return 1;
	}
};
int main()
{
	freopen("s.txt","r",stdin);
	sudoku S; S.nhap(); S.TRY(0);
}
/*
	int a[9][9] , *x = (int*)a;
	for(int i=0;i<9;i++)
		for(int j=0;j<9;j++)
			a[i][j] = i*j;
	for(int i=0;i<81;i++)
	{
		if((i%9)==0)	printf("\n");
		printf("%3d",x[i]);
	}
	//a[i][j]  = 9 tuong duong x[i*9+j]
	//x[k] tuong duong a[k/9][k%9]
*/
