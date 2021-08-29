#include<bits/stdc++.h>
using namespace std;
class Time{
	private:
		int gio;
		int phut;
		float giay;
	public:
		Time();
		friend istream & operator >> (istream &in, Time &A);
		friend ostream & operator << (ostream &out, Time A);
		Time operator + (Time &B)
		{
			Time C;
			C.gio=gio+B.gio;
			C.phut=phut+B.phut;
			C.giay=giay+B.giay;
			return C;
		}
		Time operator - (Time &B)
		{
			Time C;
			float a=gio*3600+phut*60+giay;
			float b=B.gio*3600+B.phut*60+B.giay;
			if (a>=b)
			{
				C.gio=gio-B.gio;
				C.phut=phut-B.phut;
				C.giay=giay-B.giay;
				return C;
			}
			else
			{	
				cout<<"\nKhong thuc hien duoc phep tru hai so do thoi gian";
			}
		}
		Time nhanso(int &x)
		{
			Time C;
			C.gio=x*gio;
			C.phut=x*phut;
			C.giay=x*giay;
			return C;
		}
};
Time::Time()
{
	gio=0;
	phut=0;
	giay=0;
}
istream & operator >> (istream &in, Time &A)
{
	cout<<"Nhap gio: "; in>>A.gio;
	while(A.gio<0) {cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap gio: "; in>>A.gio;}
	cout<<"Nhap phut: "; in>>A.phut;
	while(A.phut<0) {cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap phut: "; in>>A.phut;}
	cout<<"Nhap giay: "; in>>A.giay;
	while(A.giay<0) {cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap giay: "; in>>A.giay;}
	return in;
}
ostream & operator << (ostream &out, Time A)
{
	while (A.giay<0) {A.giay+=60; A.phut--;}
	while (A.phut<0) {A.phut+=60; A.gio--;}
	while (A.giay>59) {A.giay-=60; A.phut++;}
	while (A.phut>59) {A.phut-=60; A.gio++;}
	out<<A.gio<<" gio "<<A.phut<<" phut "<<A.giay<<" giay";
	return out;
}
void timeapp()
{
	Time A, B, C, D, E, F; int x;
	cout<<"Nhap thong tin so do thoi gian thu nhat:\n"; cin>>A;
	cout<<"Nhap thong tin so do thoi gian thu hai:\n"; cin>>B;
	cout<<"Nhap thong tin so do thoi gian thu ba:\n"; cin>>C;
	cout<<"\nThong tin 3 dai luong vua nhap:";
	cout<<"\nSo do thoi gian thu nhat: "<<A;
	cout<<"\nSo do thoi gian thu hai: "<<B;
	cout<<"\nSo do thoi gian thu ba: "<<C;
	cout<<"\nTong cua ba dai luong la: "<<A+B+C;
	cout<<"\nHieu cua ba dai luong la: "<<A-B-C;
	cout<<"\n\nNhap vao mot so nguyen: "; cin>>x;
	D=A.nhanso(x);
	E=B.nhanso(x);
	F=C.nhanso(x);
	cout<<"Ket qua so do thoi gian thu nhat sau khi nhan la: "<<D;
	cout<<"\nKet qua so do thoi gian thu hai sau khi nhan la: "<<E;
	cout<<"\nKet qua so do thoi gian thu ba sau khi nhan la: "<<F;
}
void run()
{
	 timeapp();
}
int main()
{
	run();
}

