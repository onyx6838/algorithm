//Nap chong toan tu
#include<bits/stdc++.h>
using namespace std;
struct ps
{
	int t,m;
	ps(int x=0,int y=1) //ham tao mot phan so 
	{
		int d=__gcd(x,y);  //UCLN
		t=x/d;
		m=y/d;
	}
};
ps operator+(ps a,ps b)
{
	return ps(a.t*b.m+a.m*b.t,a.m*b.m);
}
int main()
{
	ps a(2,4),b(3,3),c(3,5);
	c=a+b+c+ps(2,5);       //Nap chong toan tu +
	cout<<c.t<<"/"<<c.m;
}


