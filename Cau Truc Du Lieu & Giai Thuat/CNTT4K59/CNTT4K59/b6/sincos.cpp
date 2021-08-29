#include<bits/stdc++.h>
using namespace std;
double Sin(double );
double Cos(double );


double Sin(double x)
{
	return x<0.0001?x:2*Sin(x/2)*Cos(x/2);
}
double Cos(double x)
{
	if(x<0.0001) return 1;
	double u=Cos(x/2),v=Sin(x/2);
	return u*u-v*v;
}
int main()
{
	double x=3.14159263/4;
	cout<<"Sinx: "<<Sin(x)<<endl;
	cout<<"Cosx: "<<Cos(x)<<endl;

}


