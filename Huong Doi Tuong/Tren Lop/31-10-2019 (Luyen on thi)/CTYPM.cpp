#include"iostream"
using namespace std;
class CTY
{
	private:
		string ten,sgp;
		int nam;
	public:
		CTY()
		{
			ten=sgp=nam=0;
		}
		CTY(string t,string s,int na)
		{
			ten=t;
			sgp=s;
			nam=na;
		}
		void nhap()
		{
			cout<<"\nNhap ten cong ty: ";
			cin.ignore(1);
			getline(cin,ten);
			cout<<"Nhap so giay phep: ";
			getline(cin,sgp);
			cout<<"Nhap nam thanh lap: ";
			cin>>nam;
		}
		void xuat()
		{
			cout<<"Ten Cty: "<<ten;
			cout<<"\nSo giay phep: "<<sgp;
			cout<<"\nNam thanh lap: "<<nam;	
		}
		int getnam(){return nam;}
};
class CTYPM:public CTY
{
	private:
		int sonv;
	public:
		CTYPM():CTY(){sonv=0;
		}
		CTYPM(string t,string s,int na,int sn):CTY(t,s,na){sonv=sn;
		}
		void nhap()
		{
			CTY::nhap();
			cout<<"Nhap so nhan vien: ";
			cin>>sonv;
		}	
		void xuat()
		{
			CTY::xuat();
			cout<<"\nSo nhan vien: "<<sonv;
		}
		int getsonv(){return sonv;};
};
class DSCT
{
	private:
		int n;
		CTYPM *a;
	public:
		void nhap();
		void xuat();
		void nvmax();
		void nammin();	
};
void DSCT::nhap()
{
	cout<<"Nhap so cong ty phan mem ";
	cin>>n;
	a=new CTYPM[n+1];
	for(int i=1;i<=n;i++)
	{
		cout<<"Cty "<<i<<" : ";
		//a[i].CTYPM::nhap();
		a[i].nhap();
	}
}
void DSCT::xuat()
{
	cout<<"\nDanh sach cac cty pmem";
	for(int i=1;i<=n;i++)
	{
		cout<<"\nCTY "<<i<<endl;
		a[i].xuat();
		cout<<endl;	
	}
}
void DSCT::nvmax()
{
	int max=a[1].getsonv();
	for(int i=1;i<=n;i++)
		if(a[i].getsonv()>max) max=a[i].getsonv();
	cout<<"\nCong ty phan mem co so nhan vien dong nhat";
	for(int i=1;i<=n;i++)
		if(a[i].getsonv()==max)
			a[i].xuat();	
}
void DSCT::nammin()
{
	int min=a[1].getnam();
	for(int i=1;i<=n;i++)
		if(a[i].getnam()<min)	min=a[i].getnam();
	for(int i=1;i<=n;i++)
		if(a[i].getnam()==min)
			a[i].xuat();	
}
int main()
{
	DSCT a;
	a.nhap();
	a.xuat();
	a.nvmax();
	a.nammin();
}
