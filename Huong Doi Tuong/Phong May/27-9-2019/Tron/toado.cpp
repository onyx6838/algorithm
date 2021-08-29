#include"iostream"
#ifndef TOADO_CPP
#define TOADO_CPP 1
using namespace std;
class TD
{
	private:
		float x,y;
	public:
		TD()
		{
			x=0;y=0;	
		};
		friend istream &operator>>(istream &in,TD &a);
		friend ostream &operator<<(ostream &ou,TD &a);
		float gethoanh(){return x;}		
		float gettung(){return y;}
};
istream &operator>>(istream &in,TD &a)
{
	cout<<"\nNhap hoanh do: ";
	in>>a.x;
	cout<<"\nNhap tung do:";
	in>>a.y;
	return in;
}
ostream &operator<<(ostream &ou,TD &a)
{
	cout<<"\nHoanh do:";
	ou<<a.x;
	cout<<"\nTung do:";
	ou<<a.y;
	return ou;
}
#endif
