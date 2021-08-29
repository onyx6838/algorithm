#include<bits/stdc++.h>
using namespace std;
double luythua(double x,long n)
{
	if(n==0)	return 1.0;
//	double t = luythua(x,n/2);
//	return t*t*(n%2?x:1);
	return n%2?x*luythua(x*x,n/2):luythua(x*x,n/2);
}
int main()
{
	double x;
	int n;
	printf("Nhap x: ");scanf("%lf",&x);
	printf("Nhap n: ");scanf("%ld",&n);
	printf("Gia tri x luy thua n la %lf",luythua(x,n));
}

