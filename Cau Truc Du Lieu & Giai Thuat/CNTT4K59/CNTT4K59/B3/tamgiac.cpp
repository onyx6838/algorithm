#include<bits/stdc++.h>
using namespace std;
struct tamgiac
{
	float xa,xb,xc,ya,yb,yc;
};
void Nhap(tamgiac &t)
{
	cout<<"Dinh A: "; cin>>t.xa>>t.ya;
	cout<<"Dinh B: "; cin>>t.xb>>t.yb;
	cout<<"Dinh C: "; cin>>t.xc>>t.yc;
}
float Chuvi(tamgiac t)
{
	float a=sqrt(pow(t.xb-t.xc,2)+pow(t.yb-t.yc,2));
	float b=sqrt(pow(t.xa-t.xc,2)+pow(t.ya-t.yc,2));
	float c=sqrt(pow(t.xb-t.xa,2)+pow(t.yb-t.ya,2));
	return a+b+c;
}
float Dientich(tamgiac t)
{
	float a=sqrt(pow(t.xb-t.xc,2)+pow(t.yb-t.yc,2));
	float b=sqrt(pow(t.xa-t.xc,2)+pow(t.ya-t.yc,2));
	float c=sqrt(pow(t.xb-t.xa,2)+pow(t.yb-t.ya,2));
	float p=(a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}
float dt(float a,float b,float c,float d) {return a*d-b*c;}
float Dientich2(tamgiac t)
{
	return (dt(t.xa,t.ya,t.xb,t.yb)+dt(t.xb,t.yb,t.xc,t.yc)
	+dt(t.xc,t.yc,t.xa,t.ya))/2;
}
int main()
{
	tamgiac T;
	Nhap(T);
	cout<<"\nChu vi "<<Chuvi(T);
	cout<<"\nDien tich "<<Dientich(T);
	cout<<"\nDien tich cach hai "<<Dientich2(T);
}


