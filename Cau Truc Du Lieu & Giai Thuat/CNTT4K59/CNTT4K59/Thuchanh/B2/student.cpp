#ifndef STUDENT_CPP
#include"conio.h"
#include"iostream"
#include"iomanip"
#include"fstream"
using namespace std;
class Student
{
private:
	int masv;
	//char hoten[30],gioi[4];
	string hoten,gioi;
public:
	friend istream & operator >>(istream &is, Student &s)
	{
		cout<<"Ma sv  : "; is>>s.masv;
		cout<<"Ho ten : "; is.ignore(1);getline(is,s.hoten);
		cout<<"Gioi   : "; is.ignore(0);getline(is,s.gioi);
		return is;
	}
	friend ostream & operator <<(ostream &os, Student s)
	{
		os<<setw(5)<<s.masv<<setw(20)<<s.hoten<<setw(15)<<s.gioi;
		return os;
	}
};
#endif
//int main()
//{
//	Student s;
//	cin>>s;
//	fstream fout("abc.txt",fstream::out);
//	fout<<s;
//	fout.close();
//}
