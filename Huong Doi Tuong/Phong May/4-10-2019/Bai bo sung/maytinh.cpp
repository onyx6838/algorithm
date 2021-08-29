#include"iostream"
using namespace std;
class MAYTINH
{
	private:
		string ma,nsx,tg,gia;
	public:
		MAYTINH(string s1="",string s2="",string s3="",string s4="");
		void nhap();
		void xuat();
		friend string getbaohanh(MAYTINH &a);	
		friend string getgia(MAYTINH &a);
};
MAYTINH::MAYTINH(string s1,string s2,string s3,string s4)
{
	ma=s1;
	nsx=s2;
	tg=s3;
	gia=s4;
}
void MAYTINH::nhap()
{
	cout<<"\nNhap ma: ";
	cin>>ma;
	cout<<"\nNhap hang san xuat: ";
	cin>>nsx;
	cout<<"\nNhap thoi gian bao hanh: ";
	cin>>tg;
	cout<<"\nNhap gia: ";
	cin>>gia;
}
void MAYTINH::xuat()
{
	cout<<"\nMa: ";
	cout<<ma;
	cout<<"\nHang san xuat: ";
	cout<<nsx;
	cout<<"\nThoi gian bao hanh: "<<tg<<"thang";
	cout<<"\nGia: ";
	cout<<gia;
}
string getbaohanh(MAYTINH &a)
{
	return a.tg;
}
string getgia(MAYTINH &a)
{
	return a.gia;
}
