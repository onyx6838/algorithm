#include"bits/stdc++.h"
#include<algorithm>
using namespace std;
bool ss(int a,int b)
{
	return a%2==b%2?a<b:a%2<b%2;	
}
int main()
{
	int a[] = {4,7,2,8,5,7,3,5,4,9,3,6}, n = sizeof(a)/sizeof(int);
	//sort(a,a+n);	//sap xep tang dan
	//sort(a,a+n,greater<int>());	//sap xep giam dan
	sort(a,a+n,ss);	// sap xep theo ham tu viet
	for(auto t:a)	cout<<t<<" ";
}
