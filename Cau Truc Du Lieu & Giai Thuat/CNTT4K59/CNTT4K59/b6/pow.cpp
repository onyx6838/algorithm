//Luy thua
#include<bits/stdc++.h>
using namespace std;

double my_pow(double x,int n)
{
	if(n==0) return 1;
	double t=my_pow(x,n/2);
	return n%2?x*t*t:t*t;
}
double POW(double x,int n)
{
	if(n==0) return 1;
	if(n%2) return x*POW(x*x,n/2);
	return POW(x*x,n/2);
}
int main()
{
	cout<<my_pow(2,10)<<endl;
	cout<<POW(2,10)<<endl;
	
}


