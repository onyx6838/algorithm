#include"iostream"
using namespace std;
class NV
{
	private:
		string hoten,ma,cv;
		int tuoi,ngaycong;
	public:
		void nhap();
		void xuat();
		NV()
		{
			hoten="";ma="";cv="";tuoi=18;
		};	
		NV(string s1,string s2,string s3,int t)
		{
			hoten=s1;
			ma=s2;
			cv=s3;
			tuoi=t;
		}
		int gettuoi(){return tuoi;}
		double tinhluong();
};
void NV::nhap()
{
	cout<<"Nhap ho ten: ";
	cin.ignore(1);
	getline(cin,hoten);
	cout<<"Nhap tuoi: ";
	cin>>tuoi;
	cout<<"Nhap ma :";
	cin>>ma;
	cout<<"Nhap cv: ";
	cin>>cv;
	cout<<"Nhap ngay cong: ";
	cin>>ngaycong;
}
void NV::xuat()
{
	cout<<"\nHo ten: ";
	cout<<hoten;
	cout<<"\nTuoi: ";
	cout<<tuoi;
	cout<<"\nMa: ";
	cout<<ma;
	cout<<"\nChuc vu: ";
	cout<<cv;
	cout<<"\nNgay cong: ";
	cout<<ngaycong;
}
double NV::tinhluong()
{
	if(cv=="GD")	return 1000000*ngaycong;
	if(cv=="TP")	return 600000*ngaycong;
	if(cv=="NV")	return 300000*ngaycong;
}
