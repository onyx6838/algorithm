#include<bits/stdc++.h>
using namespace std;
double HinhThang(double a,double b,double f(double),int n=1e5)
{
	double h=(b-a)/n, S=0;	// chieu cao h co dinh o moi hinh thang cat ra
	for(int i=1;i<n;i++)
	S+=f(a+i*h);	// Tinh chieu cao cua moi hinh thang da cat' ra
	return (S + f(a)/2 + f(b)/2) * h;	// dtich = 2 dau + cac hinh thang o giua
}
double f(double x){return 4/(1 + x*x);}	// Ham dc dua vao tinh toan

int main()
{
	cout<<"Tich phan I = "<<HinhThang(0,1,f,1000000);
}
