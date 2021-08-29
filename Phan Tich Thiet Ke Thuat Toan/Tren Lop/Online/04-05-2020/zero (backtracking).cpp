#include<bits/stdc++.h>
using namespace std;
//DFS de quy
void TRY(int *x,int k)	// gia su da di duoc x1..xk
{
	if(x[k]==0)// den dich (dich 0)
	{
		for(int i=1;i<k;i++)	cout<<x[i]<<"->";	// da di qua hoac tim thay xuat ra duong di
		cout<<x[k]<<"\n";
	}
	else//chua den dich can phai tim x[k+1] va goi de quy
	{
		for(int a=1;a*a<=x[k];a++)
		if(x[k]%a==0)
		{
			x[k+1] = (a-1) * (x[k]/a + 1);	// khi ma co duong di thi chia lam 2 duong di
			TRY(x,k+1);	// di tiep vao nhanh k+1 de thu xem da den 0 chua
		}
	}
}
int main()
{
	int x[1000];
	cout<<"n = "; cin>>x[1];
	TRY(x,1);	// gia su da di duoc x1
}
