#include<bits/stdc++.h>
using namespace std;
double g(int n)
{
	int L=0,R=1;
	while(L<R)
	{
		int M =L+R/2;	//M la so lon nhat co binh phuong nho hon n
		if(M*M <= n)	R=M; // log n
		else L=M+1;		
	}
	return R + g(n/2);
}
double h(int n)
{
	int s = 0;
	for(int i=1;i*i<=n;i++)	s+=i;
	return s+h(n/3);
}
int main()
{
}

