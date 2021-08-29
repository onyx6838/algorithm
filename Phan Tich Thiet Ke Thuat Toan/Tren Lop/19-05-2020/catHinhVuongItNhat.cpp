#include<bits/stdc++.h>
using namespace std;
class CHV
{
	int n,m,c[100][100];
	void thuan(){
		for(int i=1;i<=n;i++)	c[i][1] = i;
		for(int j=1;j<=m;j++)	c[1][j] = j;
		for(int i=2;i<=n;i++)
		for(int j=2;j<=m;j++)
		if(i==j) 	c[i][j] =1;	// chu nhat la hinh vuong
		else
		{
			c[i][j]= i*j;
			for(int k=1;k<=i/2;k++)	
			if(c[i][j] > c[k][j] + c[i-k][j])	c[i][j] = c[k][j] + c[i-k][j];
			for(int k=1;k<=j/2;k++)	
			if(c[i][j] > c[i][k] + c[i][j-k])	c[i][j] = c[i][k] + c[i][j-k];			
		}
	}
	void nghich(int n,int m, string p ="\n")
	{
		if(n==m)	cout<<p<<n<<"*"<<m;
		else
		{
			for(int k=1;k<=n/2;k++)
			if(c[n][m] == c[k][m] + c[n-k][m]) 
			{
				nghich(k,m,p + "\t");
				cout<<p<<n<<"*"<<m;
				nghich(n-k,m,p + "\t");
				return;
			}
			for(int k=1;k<=m/2;k++)
			if(c[n][m] == c[n][k] + c[n][m-k])
			{
				nghich(n,k,p + "\t");
				cout<<p<<n<<"*"<<m;
				nghich(n,m-k,p + "\t");
				return;
			}
		}
	}
	public:void sol(){
		cout<<"Nhap n = ";cin>>n;
		cout<<"Nhap m = ";cin>>m;
		thuan();
		cout<<"\nSo hinh vuong it nhat"<<c[n][m];
		nghich(n,m);
	}
};
int main()
{
	CHV a;
	a.sol();
}

