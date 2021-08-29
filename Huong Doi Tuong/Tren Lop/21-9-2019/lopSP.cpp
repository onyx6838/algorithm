#include"iostream"
using namespace std;
class sophuc
{
	private:
		float a,b;
	public:
		void nhap();
		void xuat();
		sophuc operator+(const sophuc &c2);
		sophuc operator*(const sophuc &c2);
		friend sophuc operator-(const sophuc &c1,const sophuc &c2);
		friend sophuc operator/(const sophuc &c1,const sophuc &c2);		
};
void sophuc::nhap()
{
	cout<<"Nhap a,b";cin>>a>>b;
}
void sophuc::xuat()
{
	if(b>0)	cout<<a<<"+"<<b<<"i";
	if(b<0)	cout<<a<<b<<"i";
	if(b==1)	cout<<a<<"+"<<"i";
	if(b==0)	cout<<a;
//	cout<<a<<"+("<<b<<")i";
}
sophuc sophuc::operator+(const sophuc &c2)
{
	sophuc c;
	c.a=a+c2.a;
	c.b=b+c2.b;
	return c;
}
sophuc operator-(const sophuc &c1,const sophuc &c2)
{
	sophuc c;
	c.a=c1.a-c2.a;
	c.b=c1.b-c2.b;
	return c;
}
sophuc sophuc::operator*(const sophuc &c2)
{
	sophuc c;
	c.a=a*c2.a+b*c2.b;
	c.b=a*c2.b+c2.a*b;//thuc*ao+ao*thuc;
	return c;
}
sophuc operator/(const sophuc &c1,const sophuc &c2)
{
	sophuc c;
	//(a1+ib1)*(a2-ib2)/[(a2+ib2)*(a2-ib2)]
	//(a1a2+b1b2)/(a2*a2+b2*b2)
	//+i(a2b1-a1b2)/(a2*a2+b2*b2)
	c.a=(c1.a*c2.a+c1.b*c2.b)/(c2.a*c2.a+c2.b*c2.b);
	c.b=(c1.b*c2.a-c1.a*c2.b)/(c2.a*c2.a+c2.b*c2.b);//ao*thuc-thuc*ao
	return c;
}
