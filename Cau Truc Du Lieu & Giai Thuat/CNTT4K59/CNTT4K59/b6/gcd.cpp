#include<bits/stdc++.h>
using namespace std;

int g(int a,int b){return b?g(b,a%b):a;}

int main()
{
	int a=-1440,b=-120;
	cout<<g(a,b)<<endl;
	cout<<__gcd(a,b);   //Ham san co trong C++
}


