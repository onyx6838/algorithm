#include<bits/stdc++.h>
using namespace std;
// t : ty le
struct dv
{
	int id,a,b;	//a : kich thuoc, b:gia tri
	double t;
};
bool cmp(dv u,dv v)
{
	return u.t == v.t ? u.a > v.a : u.t > v.t;	// so sanh giam dan theo ty le neu bang nhau thi lay theo gia tri lon hon
}
struct Balo
{
	int n,M;
	dv A[10005];
	void sol()
	{
		cout<<"Nhap so do vat : ";
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			A[i].id = i;
			cout<<"Do Vat "<<i<<" : ";
			cin>>A[i].a>>A[i].b;
			A[i].t = 1.0*A[i].b / A[i].a;
		}
		cout<<"Nhap kich thuoc ba lo M = ";cin>>M;
		sort(A+1,A+n+1,cmp);
		int K=0,G=0;
		for(int i=1;i<=n;i++)
		{
			if(A[i].a + K <=M)
			{
				K+=A[i].a;
				G+=A[i].b;
				cout<<"\nChon dv "<<A[i].id<<" kich thuoc "<<A[i].a<<" gia tri "<<A[i].b;
			}
		}
		cout<<"\nTong kich thuoc "<<K;
		cout<<"\nTong gia tri "<<G;
	}
};
int main()
{
	Balo A;
	A.sol();
}
