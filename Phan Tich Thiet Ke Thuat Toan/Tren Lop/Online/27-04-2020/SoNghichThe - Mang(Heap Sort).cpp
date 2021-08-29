#include<bits/stdc++.h>
using namespace std;
class IT
{
	int n,A[400005]={};
	long long res = 0;
	void update(int x,int k,int a,int b)//chen x vao cay tai not k quan ly doan [a,b]
	{
		A[k]++;	// rot va dem so lan di qua nút
		if(a==b)	return;	//nut la thi dung`
		int m = (a+b)/2;	// logn 
		if(x<m)		// rot' vao ben trai thi + don` ben phai cung cap
		{
			res += A[2*k+1];	//2k+1: ben phai cung cap
			update(x,2*k,a,m);	// update cac nut ben trai sau khi rot
		}
		else
		{
			update(x,2*k+1,m+1,b);	// update lai nhu bthg
		}
	}
	public:void sol()	// nhap mang nhu heapsort
	{
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			int x;
			scanf("%d",&x);
			update(x,1,1,n);
		}
		printf("%lld",res);
	}
};
int main()
{
	IT T;
	T.sol();
}
