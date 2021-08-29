#include<bits/stdc++.h>
using namespace std;
struct sk{int id,s,f;};
bool ss(sk u,sk v){return u.f < v.f;}
struct Lich
{
	int n;
	sk A[100005];
	void sol()
	{
		cout<<"Nhap so su kien: ";
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			A[i].id = i;
			cout<<"Su kien "<<i<<" : ";
			cin>>A[i].s>>A[i].f;
		}
		sort(A+1,A+n+1,ss);
//		sort(A+1,A+n+1,[](sk u,sk v){return u.f<v.f;});
		int M = INT_MIN,k=0;
		for(int i=1;i<=n;i++)
		if(A[i].s >= M)
		{
			k++;
			cout<<"\nChon sk "<<A[i].id<<" bat dau "<<A[i].s<<" Ket Thuc "<<A[i].f;
			M = A[i].f;
		}
		cout<<"\nTong so su kien "<<k;
	}
};
int main()
{
	Lich A;
	A.sol();
}
