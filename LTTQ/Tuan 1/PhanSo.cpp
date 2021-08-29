#include<iostream>
#include<math.h>
using namespace std;
struct pso
{
	int a,b;
};
void nhap(pso &p)
{
	cout<<"nhap phan so thu nhat\n\tTu so:";
	cin>>p.a;
	do
	{
		cout<<"\tMau so khac khong:";
		cin>>p.b ;
	}while(p.b==0);
}
void inps(pso p)
{
	if(p.b ==1) cout<<p.a ;
		else
	if(p.a ==0) cout<<0;
		else
	if(p.a *p.b <0)	cout<<"-"<<abs(p.a )<<"/"<<abs(p.b );
		else	cout<<abs(p.a )<<"/"<<abs(p.b);
}
void rutgonps(pso &p)
{	
	int ts,ms,u;
	ts=abs(p.a);
	ms=abs(p.b);
	while(ts && ms)
		if(ts>ms)	ts%=ms;
		else ms%=ts;
	if(ms) u=ms; else u=ts;
	p.a/=u;
	p.b/=u;
}
void congps(pso p1,pso p2,pso &p)
{
	p.a=p1.a*p2.b+p2.a*p1.b;
	p.b=p1.b*p2.b;
}
void trups(pso p1,pso p2,pso &p)
{
	p.a=p1.a*p2.b-p2.a*p1.b;
	p.b=p1.b*p2.b;
}
void nhanps(pso p1,pso p2,pso &p)
{
	p.a=p1.a*p2.a;
	p.b=p1.b*p2.b;
}
void chiaps(pso p1,pso p2,pso &p)
{
	p.a=p1.a*p2.b;
	p.b=p1.b*p2.a;
}
int main()
{
	pso a,b,c;
	nhap(a);
	nhap(b);
	rutgonps(a);
	rutgonps(b);
	congps(a,b,c);
	cout<<"\nTong:";
	inps(c);
}
