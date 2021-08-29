#include<bits/stdc++.h>
using namespace std;
void binhphuong(int x,int &y)
{
	cout<<"\ndia chi x = "<<&x;
	cout<<"\ndia chi y = "<<&y;
	y=x*x;
}
int main()
{
	int a,b;
	a=4;b=5;
	cout<<"\ndia chi a="<<&a;
	cout<<"\ndia chi b="<<&b;
	binhphuong(a,b);
	cout<<"\na="<<a;
	cout<<"\nb="<<b;
}


