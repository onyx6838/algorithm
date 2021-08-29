#include<bits/stdc++.h>
using namespace std;
long fib(int n)	// DAC do phuc tap O(2^n) 
//			T(n) = T(n-1) + T(n-2) ~ 2T(n-1) ~ 4T(n-2) ~ 2^n T(0)
{
	return n<=2?1:fib(n-1)+fib(n-2);
}
long fibo(int n)	//Do phuc tap O(n)
{
	long F[n+5] = {0,1,1};
	for(int i=3;i<=n;i++)	F[i] = F[i-1] + F[i-2];
	return F[n];
}

int main()
{
	cout<<fib(10);
}

