#ifndef STUDENT_CPP
#define STUDENT_CPP 4
#include"iostream"

using namespace std;

class sinhvien
{
	private:
		char ht[30];
		int msv;
		char gt[5];
		int luong;
	public:
		friend istream &operator>>(istream &in, sinhvien &u);
		friend ostream &operator<<(ostream &ou, const sinhvien &u);
		int getma(){return msv;
		}
		int getluong(){return luong;
		}
};

istream &operator>>(istream &in, sinhvien &u)
{
	cout<<"\nNhap ten sinh vien :";
	in.ignore(1);
	in.get(u.ht,30);
	cout<<"\nNhap ma sinh vien :";
	in>>u.msv;
	cout<<"\nNhap gioi tinh :";
	in.ignore(1);
	in.get(u.gt,5);
	cout<<"Nhap luong: ";
	in>>u.luong;
	return in;
}

ostream &operator<<(ostream &ou, const sinhvien &u)
{
	ou<<"\nTen sinh vien :";
	ou<<u.ht;
	ou<<"\nMa sinh vien :";
	ou<<u.msv;
	ou<<"\nGioi tinh :";
	ou<<u.gt;
	ou<<"\nLuong: ";
	ou<<u.luong;
	return ou;
}
#endif
