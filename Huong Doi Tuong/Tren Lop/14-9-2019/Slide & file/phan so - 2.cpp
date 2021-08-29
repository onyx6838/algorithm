#include"iostream"
using namespace std;
#include"math.h"
typedef struct Phanso{
	int a,b;
};
int main()
{	Phanso p1,p2,p;
	cout<<"nhap phan so thu nhat\n\tTu so:";cin>>p1.a;
	do{
		cout<<"\tMau so khac khong:";cin>>p1.b;
	}while(p1.b ==0);
	cout<<"nhap phan so thu hai\n\tTu so:";cin>>p2.a ;
	do{
		cout<<"\tMau so khac khong:";cin>>p2.b ;
	}while(p2.b ==0);
	p.a=p1.a*p2.b+p2.a*p1.b;
	p.b=p1.b*p2.b;
	int u,ts,ms;
	ts=abs(p.a);
	ms=abs(p.b);
	while(ts && ms)
		if(ts>ms) ts%=ms;
		else ms%=ts;
	if(ms) u=ms; else u=ts;
	p.a =p.a /u;//   a/=u;
	p.b /=u;
	cout<<"\nPhan so tong:";
	if(p.b ==1) cout<<p.a ;
	else
		if(p.a ==0) cout<<0;
		else
			if(p.a *p.b <0) cout<<"-"<<abs(p.a )<<"/"<<abs(p.b );
			else
				cout<<abs(p.a )<<"/"<<abs(p.b);
	cout<<"\nPhan so thu nhat:";
	if(p1.b==1) cout<<p1.a ;
	else
		if(p1.a ==0) cout<<0;
		else
			if(p1.a*p1.b<0) cout<<"-"<<abs(p1.a)<<"/"<<abs(p1.b);
			else
				cout<<abs(p1.a)<<"/"<<abs(p1.b);
	cout<<"\nPhan so thu 2:";
	if(p2.b==1) cout<<p2.a;
	else
		if(p2.a==0) cout<<0;
		else
			if(p2.a*p2.b<0) cout<<"-"<<abs(p2.a)<<"/"<<abs(p2.b);
			else
				cout<<abs(p2.a)<<"/"<<abs(p2.b);
}
