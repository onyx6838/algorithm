#include"iostream"
#include"math.h"
using namespace std;
class PS
{
	private:
		int tu,mau;
	public:
		PS()
		{
			tu=0;
			mau=0;
		};
		PS(int a,int b)
		{
			tu=a;mau=b;
		}
		void rutgon()
		{
			int u,ts,ms;
			ts=fabs(tu);
			ms=fabs(mau);
			
			while(ts && ms)
			{
				if(ts>ms)	ts%=ms;
				else ms%=ts;
			}
			if(ms) u=ms; 
			else   u=ts;
			tu/=ms;
			mau/=ms; 
		}
		friend istream &operator>>(istream &in,PS &a);
		friend ostream &operator<<(ostream &ou,PS &a);
		PS operator+(PS &b)
		{
			PS c;
			c.tu=tu*b.mau+mau*b.tu;
			c.mau=mau*b.mau;
			return c;	
		}
		PS operator-(PS &b)
		{
			PS c;
			c.tu=tu*b.mau-mau*b.tu;
			c.mau=mau*b.mau;
			return c;
		}
		PS operator*(PS &b)
		{
			PS c;
			c.tu=tu*b.tu;
			c.mau=mau*b.mau;
			return c;
		}
		PS operator/(PS &b)
		{
			PS c;
			c.tu=tu*b.mau;
			c.mau=mau*b.tu;
   			return c;
		}
};
istream &operator>>(istream &in,PS &a)
{
	cout<<"Tu so = ";
	in>>a.tu;
	do
	{
		cout<<"Mau so khac khong = ";
		in>>a.mau;
	}
	while(a.mau==0);	
	return in;	
}
ostream &operator<<(ostream &ou,PS &a)
{
	if(a.mau==1)	ou<<a.tu;
	else if(a.mau==0)	ou<<0;
	else if(a.tu*a.mau<0)
		ou<<"-"<<fabs(a.tu)<<"/"<<fabs(a.mau);
	else ou<<fabs(a.tu)<<"/"<<fabs(a.mau);
	return ou;	
}
int main()
{
	PS p1,p2,p3,p4;
	cin>>p1;
	cin>>p2;
	p3 = p1 + p2;
	p3.rutgon();
	cout<<p3;
//	PS a,b,c,d;
//	cin>>p1;
//	cin>>p2;
//	p2.rutgon();
//	cout<<p2;
//	cin>>p3;
//	p3.rutgon();
//	cin>>p4;
//	p4.rutgon();
//	a=p1+p2;
//	b=p3-p4;
//	c=a/b;
//	d=c*p1;
//	d.rutgon();
//	cout<<d;
}
