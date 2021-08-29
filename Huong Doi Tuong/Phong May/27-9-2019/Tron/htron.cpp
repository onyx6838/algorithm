#include"toado.cpp"
#ifndef	HTRON_CPP
#define HTRON_CPP
#include"iostream"
using namespace std;
class circle
{
	private:
		double r;
		TD tam;
	public:
		friend istream &operator>>(istream &in,circle &x);
		friend ostream &operator<<(ostream &ou,circle &x);
		double getbk(){return r;};
		int operator>(circle &b){return r>b.r?1:0;};
};
istream &operator>>(istream &in,circle &x)
{
	cout<<"\nNhap ban kinh";
	in>>x.r;
	cout<<"\nNhap toa do tam";
	in>>x.tam;
	return in;
}
ostream &operator<<(ostream &ou,circle &x)
{
	ou<<"\nBK: ";ou<<x.r;
	ou<<"\nToa do tam:";ou<<x.tam;
	return ou;
}
#endif
