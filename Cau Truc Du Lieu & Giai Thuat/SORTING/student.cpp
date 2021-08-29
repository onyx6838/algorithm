#ifndef STUDENT_CPP
#include"iostream"
#include"iostream"

using namespace std;

class sinhvien
{
	private:
		char ht[30];
		int msv;
		char gt[5];
	public:
		int getMaSV(){return msv;}
		char* getHoten(){return ht;}
		char* getGioi(){return gt;}
		friend istream &operator>>(istream &in, sinhvien &u);
		friend ostream &operator<<(ostream &ou, const sinhvien &u);	
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
	return ou;
}
#endif
