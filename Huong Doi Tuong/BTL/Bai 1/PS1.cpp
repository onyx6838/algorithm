#include"iostream"
#include"math.h"
using namespace std;
class PS
{
	private:
		int x,y;
	public:
		PS()
		{
			x=0;
			y=0;
		}
		PS(int a,int b)
		{
			x=a;y=b;
		}
		void rutgon()
		{
			int u,ts,ms;
			ts=fabs(x);
			ms=fabs(y);
			while(ts && ms)
			{
				if(ts>ms)	ts%=ms;
				else ms%=ts;
			}
			if(ms) u=ms; 
			else   u=ts;
			x/=u;
			y/=u; 
		}
		void nhap()
		{
			cout<<"Tu so = ";cin>>x;
			do
			{
				cout<<"Mau so khac khong = ";
				cin>>y;
			}
			while(y==0);			
		}
		void xuat()
		{
			if(y==1)	cout<<x;
			else if(y==-1 && x>0) cout<<-x;
			else if(y==-1 && x<0) cout<<x;
			else if(y==0)	cout<<0;
			else if(x*y<0)
				cout<<"-"<<fabs(x)<<"/"<<fabs(y);
			else cout<<fabs(x)<<"/"<<fabs(y);	
		}
		PS cong(PS &b)
		{
			PS c;
			c.x=x*b.y+y*b.x;
			c.y=y*b.y;
			return c;
		}
		PS tru(PS &b)
		{
			PS c;
			c.x=x*b.y-y*b.x;
			c.y=y*b.y;
			return c;
		}
		PS nhan(PS &b)
		{
			PS c;
			c.x=x*b.x;
			c.y=y*b.y;
			return c;
		}
		PS chia(PS &b)
		{
			PS c;
			c.x=x*b.y;
			c.y=y*b.x;
   			return c;
		}
};
int main()
{
	PS p1,p2,p3,p4;
	PS a,b,c,d;
	p1.nhap();cout<<endl;
	p2.nhap();cout<<endl;
//	p3.nhap();cout<<endl;
//	p4.nhap();cout<<endl;
	a=p1.cong(p2);
	a.rutgon();
	a.xuat();
//	b=p3.tru(p4);
//	c=a.chia(b);
//	d=c.nhan(p1);
//	d.rutgon();
//	d.xuat();
}
