#include<bits/stdc++.h>
using namespace std;
double f1(int n)
{
	if(n==0||n==1)	return 1.0;
	double s=0;
	for(i=1;i<=n;i++)
	for(int j=i;j<=n;j++)	s+=i*j;
	return s+f1(n/2)+f1((n-1)/2);
}
double f2(int n)
{
	if(n==0||n==1)	return 1;
	for(int i=1;i<=n;i++)	s+i * 1.0/(n-i);
	return s+f(n/3)	+ f((n+1)/3);
}
// vi du 3
double f2(int n)
{	// TH3
	if(n==0||n==1)	return 1;
	for(int i=1;i<=n*n;i++)	s+i * 1.0/(n-i);
	return s + f(n/2)	* f((n+1)/2);	// dau * thi tinh f van la +
}
double f3(int L,int R)
{	// Th1
	if(L>=R)	return 1;
	int k = (R-L)/3;
	return L * R + f3(L,L+k) + f3(L+k+1,L+2*k) + f3(L + 2*k+1,R);
}
int main()
{
}

