//
#include<bits/stdc++.h>
using namespace std;
int lp(int x) {return x*x*x;}
int main()
{
	int a,b,c;
	scanf("%1d%1d%1d",&a,&b,&c);
	string kq=100*a+10*b+c==lp(a)+lp(b)+lp(c)?"YES":"NO";
	cout<<kq;

}


