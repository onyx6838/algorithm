#include<bits/stdc++.h>
using namespace std;
class ps
{
	int t,m;
	public:
	ps(int t=2,int m=3)
	{
		this->t=t;
		this->m=m;
	}
	friend istream &operator>>(istream &is,ps &p)
	{
		is>>p.t>>p.m;
		return is;
	}
	friend ostream &operator<<(ostream &os,ps p)
	{
		os<<p.t<<"/"<<p.m;
		return os;
	}
	ps operator++(int) //sau
	{
		this->t=t+m;
		return *this;
	}
	ps operator++()  //truoc
	{
		this->t=t+m;
		return *this;
	}
	void rutgon()
	{
		int d=__gcd(t,m); 
		if(d) {t/=d;m/=d;}
	}
	ps operator+(ps q)
	{
		ps p(t*q.m+m*q.t,m*q.m);
		p.rutgon();
		return p;
	}
	ps operator-(ps q)
	{
		ps p(t*q.m-m*q.t,m*q.m);
		p.rutgon();
		return p;
	}
	bool operator>(ps q)
	{
		int a=t*q.m-m*q.t;
		int b=m*q.m;
		return b*a>0;
	}
};

int main()
{
	ps p(3,2),q(1,4);
	cout<<p<<" "<<q;
	++p;
	p++;
	cout<<"\nTang len "<<p;
	cout<<"\n Tong : "<<(p+q);
}

	1
	111111111111111111111111111111111111111111111111111111111111112
