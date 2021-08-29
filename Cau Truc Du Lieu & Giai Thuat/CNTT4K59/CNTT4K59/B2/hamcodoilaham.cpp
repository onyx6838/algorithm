//Ham co doi la ham khac
#include<bits/stdc++.h>
using namespace std;

//typedef double ham(double x);  //Dinh nghia kieu ham

double tong(int n,double f(double))
{
	double s=0;
	for(int i=1;i<=n;s+=f(i++));
	return s;
}
double bp(double x) {return x*x;}
int main()
{
	int n;
	cout<<"Nhap n = "; cin>>n;
	cout<<"\nTong cac can "<<tong(n,sqrt);
	cout<<"\nTong cac sin "<<tong(n,sin);
	cout<<"\nTong cac binh phuong "<<tong(n,bp);
	cout<<"\nTong cac lap phuong "<<tong(n,[](double x){return x*x*x;});
}
