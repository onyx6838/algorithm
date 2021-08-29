#include<iostream>
#include<conio.h>
using namespace std;
typedef struct PhanSo
{
	int a,b;
}ps;
ps operator+(ps p1,ps p2)
{
	p1.a*p2.b+p2.a*p1.b;
	p1.a*p2.b;
}
//ps operator*(ps p1,ps p2)
//{
//	p.a=p1.a*p2.a;
//	p.b=p1.b*p2.b;
//}
int main ()
{
	ps a,b,p;
	cout<<"p1=";cin>>a;
	cout<<"\n"<<"p2=";cin>>b;
	p=operator+(a,b);
	cout<<p;
}


