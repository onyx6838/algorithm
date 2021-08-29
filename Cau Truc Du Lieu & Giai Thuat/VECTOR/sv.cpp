#ifndef student_cpp
#define student_cpp 0
#include<iostream>
using namespace std;
class Sinhvien
{
	private:
		char ht[30];
		int msv;
		char gt[5];
	public:
		friend istream &operator>>(istream &in, Sinhvien &u);
		friend ostream &operator<<(ostream &in, const Sinhvien &u);
	
};
istream &operator>>(istream &in, Sinhvien &u)
{
	cout<<"\nNhap ma sinh vien :";
	in>>u.msv;
	cout<<"\nNhap ho ten :";
	in.ignore(1);
	in.get(u.ht, 30);
	cout<<"\nNhap gioi tinh :";
	in.ignore(1);
	in.get(u.gt,5);
	return in;
}
ostream &operator<<(ostream &ou, const Sinhvien &u)
{
	cout<<"\nMa sinh vien :";
	ou<<u.msv;
	cout<<"\nHo ten :";
	ou<<u.ht;
	cout<<"\nGioi tinh :";
	ou<<u.gt;
	return ou;
}
#endif

