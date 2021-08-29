#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f(int n)
{
	ll c[n+5] = {2,4};
	for(int i=2;i<n;i++)
		c[i] = 4*c[i-1] - c[i-2];
	return c[n];
}
//10^9 xem fibo tinh toan theo ma tran(DAC)
int main()
{
	int n;
	cin>>n;
	cout<<"Kqua = "<<f(n);
}
