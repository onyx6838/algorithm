#ifndef STUDENT_CPP
#include"conio.h"
#include"iostream"
using namespace std;
class Student
{
private:
	int masv;
	string hoten,gioi;
public:
	friend istream & operator >>(istream &is, Student &s);
	friend ostream & operator <<(ostream &os, Student s);
};
istream & operator >>(istream &is, Student &s)
{
	 cout<<"\nNhap ma sv:";
	 is>>s.masv;
	 cout<<"Nhap ho va ten:";
	 is.ignore(1);
	 getline(is,s.hoten);
	 cout<<"Nhap gioi tinh:";
	 is.ignore(0);
	 getline(is,s.gioi);
	 return is;
}
ostream & operator <<(ostream &os, Student s)
{
	  os<<s.masv<<"\t"<<s.hoten<<"\t" <<s.gioi;
	 return os;
}
//int main()
//{
//	Student s;
//	cin>>s;
//	cout<<"Thong tin sv "<<s;
//}
#endif
