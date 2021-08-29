#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define FOR(a,b)    for(int i = a; i < b; i ++)
long long Key, n;
void Try(long long Tong7,long long Tong4, long long x)
{
	if(x >= n && Tong4 == Tong7 && (x < Key || Key == 0))	Key = x;
	if(x < n*100 )
	{
		Try(Tong7+1,Tong4,x*10+4);
		Try(Tong7,Tong4+1,x*10+7);
	}
}
int main()
{
	cin>>n;
 	Try(0,0,0);
	if(n==0)	cout << 47;
	else
		cout<<Key;
}
