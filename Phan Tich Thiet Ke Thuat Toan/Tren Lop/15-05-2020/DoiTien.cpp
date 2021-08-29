#include<bits/stdc++.h>
using namespace std;
class Money
{
	int n,M,a[100],C[100][1000],inf=1e9;
	void thuan()	// tinh matran C
	{
		for(int j=1;j<=M;j++)	C[0][j]	= inf;
		C[0][0] = 0;
		for(int i=1;i<=n;i++)
		{
			for(int j=0;j<=M;j++)
			if(j<a[i])	C[i][j] = C[i-1][j];
			else C[i][j] = min(C[i-1][j], 1+C[i][j-a[i]]);
		}
	}
	void nghich(int n, int M)
	{
		if(C[n][M] == 0)	return;
		while(C[n][M] == C[n-1][M])	n--;	// giam theo hang`
		nghich(n,M-a[n]);
		cout<<a[n]<<" ";
	}
	public:void sol()
	{
		cin>>n>>M;
		for(int i=1;i<=n;i++)	cin>>a[i];
		thuan();
		if(C[n][M]==inf)	cout<<"khong doi duoc";
		else
		{
			cout<<"So to it nhat "<<C[n][M]<<" gom: ";
			nghich(n,M);
		}
	}
};
int main()
{
	Money M;
	M.sol();
}
