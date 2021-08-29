#include<bits/stdc++.h>
using namespace std;

template <class K>  //Gia su co kieu du lieu T
K Max(K a, K b)
{
	return a>b?a:b;
}


int main()
{
	long a=3,b=2;
	cout<<Max<long>(a,b)<<"\n";
	float x=3.5,y=2.1;
	cout<<Max<float>(x,y)<<"\n";
}


