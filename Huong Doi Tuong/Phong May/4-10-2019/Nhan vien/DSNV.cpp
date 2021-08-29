#include"iostream"
#include"nhanvien.cpp"
using namespace std;
class DSNV
{
	private:
		int n;
		NV *ds;
	public:
		DSNV();
		DSNV(const int &n);
		void nhapNV();
		void xuatNV();
		void tuoimin();
		double luongTB();
};
DSNV::DSNV()
{
	n=0;
	ds=NULL;
}
DSNV::DSNV(const int &n)
{
	this->n=n;
}
void DSNV::nhapNV()
{
	cout<<"Nhap danh sach nhan vien: ";
	cin>>n;
	ds=new NV[n+1];
	for(int i=1;i<=n;i++)
	{
		cout<<"Nhan vien thu "<<i<<endl;
		ds[i].nhap();
		cout<<endl;
	}
}
void DSNV::xuatNV()
{
	cout<<"Danh sach \n";
	for(int i=1;i<=n;i++)
	{
		cout<<"Nhan vien "<<i;
		ds[i].xuat();
		cout<<endl;
	}
}
void DSNV::tuoimin()
{
	int min=ds[1].gettuoi();
	int p=-1;
	for(int i=2;i<=n;i++)
	{
		if(ds[i].gettuoi()<min)		
		{
			min=ds[i].gettuoi();
			p=i;
		}
	}
	if(p!=-1)cout<<"\nNguoi" <<p<<"tre tuoi nhat: "<<min;
	else cout<<"\nNguoi dau tien tre tuoi nhat : "<<min;
}
double DSNV::luongTB()
{
	double s=0;
	for(int i=1;i<=n;i++)
	{
		s+=ds[i].tinhluong();
	}
	return s/n;
}
int main()
{
	DSNV a;
	a.nhapNV();
	a.xuatNV();
	cout<<"\nLuong TB cua cong ty = "<<(int)a.luongTB();
	//ep kieu lai?
	a.tuoimin();
}
