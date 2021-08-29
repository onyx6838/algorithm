#include"iostream"
#include"string.h"
using namespace std;
class monhoc
{
	private:
		string mamon;
		string name;
		int tin;
	public:
		monhoc(string s1=" ",string s2=" ",int STC=0)
		{
			mamon=s1;name=s2;this->tin=STC;
		};
		friend istream &operator>>(istream &in,monhoc &a);
		friend ostream &operator<<(ostream &ou,monhoc &a);
		int operator+(monhoc &b);
		int operator>(monhoc &b);
		string getname(){return name;}
		int gettin(){return tin;};
		string getmamon(){return mamon;}
};
istream &operator>>(istream &in,monhoc &a)
{
	cout<<"\nNhap ma mon hoc:";
	in.ignore(1);
	getline(in,a.mamon);//cin.get(a.mamon,30);
	cout<<"\nNhap ten mon hoc:";
	in.ignore(1);
	getline(in,a.name);
	cout<<"\nNhap so tin chi:";
	in>>a.tin;
	return in;
}
ostream &operator<<(ostream &ou,monhoc &a)
{
	ou<<"\nMa mon hoc: "<<a.mamon;
	ou<<"\nTen mon hoc:"<<a.name;
	ou<<"\nSo tin chi:"<<a.tin;
	return ou;
}
int monhoc::operator>(monhoc &b)
{
	return tin>b.tin?1:0;
}
int monhoc::operator+(monhoc &b)
{
	return tin+b.tin;
}
