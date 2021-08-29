// n<20 nen dung quay lui (vet can)
#include<bits/stdc++.h>
using namespace std;
//int d[100]={}; // thay check = mang danh dau xem da vao chua
map<int,bool> d;	// dung map thay cho viec chi so co ca chu~ cai , chi so am
int dem=0;
bool check(int *x,int k,int t)	// ktra xem co bi trung k
{
	for(int i=1;i<=k;i++)	
	if(t==x[i]) return 0;
	return 1;	
}
void TRY(int *x,int k,int n)// gia su da co x1...x[k-1] can tim x1...xn
{
	if(k==n)
	{
		cout<<setw(5)<<++dem<<"     ";
		//setw : hien thi dem
		for(int i=1;i<=k;i++)	cout<<x[i]<<" ";
		cout<<"\n";
	}
	else
	{
		for(int t=1;t<=n;t++)	// ktra xem co bi trung vs buoc thu nhat k
		if(check(x,k,t))	//ktra xem tu x1.. xk chua co t thi di tiep
		{
			x[k+1] = t;
			d[t]=1;	// dua vao day va danh dau 1 de tranh trung
			// dua vao day de tien len
			TRY(x,k+1,n);	//khong trung thi di tiep vao nhanh k+1
			d[t]=0;	// lui sang nhanh khac thi dua t ra khoi day (bo danh dau)
		}
	}
}
int main()
{
	int n,x[100];
	cin>>n;
	TRY(x,0,n);
}
