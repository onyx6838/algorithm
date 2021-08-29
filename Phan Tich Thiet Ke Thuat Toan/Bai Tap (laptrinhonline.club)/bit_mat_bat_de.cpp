#include<bits/stdc++.h>
using namespace std;

int main()
{
	int p, n, nn, m, mm;
	cin>>n>>m; 
	p = m * n;
	nn = n + 1;
	mm = m - 1;
   	do
	{
    	p = p + (p - nn) / mm - n;
	}while( p > n );
    cout<<p;
}

