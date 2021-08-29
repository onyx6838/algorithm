//noi suy Lagrange
#include<bits/stdc++.h>
using namespace std;

class Lagrange
{
	int n;
	double x[1000],y[1000];
	public: void nhap()
	{
		cout<<"n = ";cin>>n;
		for(int i=0;i<=n;i++)	cin>>x[i]>>y[i];
	}
	double f(double t)
	{
		double s=0;
		for(int i=0;i<=n;i++)
		{
			double p=1;
			for(int j=0;j<=n;j++)	if(i!=j)	p*=(t-x[j])/(x[i]-x[j]);	// bthuc voi x=t , x[i],y[i] giu nguyen
			s+=p*y[i];
		}
		return s;
	}
};
int main()
{
	/*
	4
0 5
1 8
2 23
3 62
4 137*/
	Lagrange L;
	L.nhap();		// 	O(n)
	cout<<"\n f(3.5) = "<<L.f(3.5);	//O(n^2)
	cout<<"\n f(5) = "<<L.f(5);		//O(n^2)
	// do phuc tap T(n) = O(n) + O(n^2) + O(n^2) -> O(n^2)
}

