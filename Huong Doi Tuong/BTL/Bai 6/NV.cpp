#include"iostream"
using namespace std;
class NV
{
	private:
		string ma,ten;
	public:
		void nhap()
		{
			cout<<"\nNhap ten : ";
			cin.ignore(1);
			getline(cin,ten);
			cout<<"Nhap ma: ";
			getline(cin,ma);		
		}
		void xuat()
		{
			cout<<"\nTen: "<<ten;
			cout<<"\nMa: "<<ma;	
		}		
};
class HopDong:public NV
{
	private:
		int ngaycong,tiencong;
	public:
		void nhap()
		{
			NV::nhap();
			cout<<"Nhap ngay cong: ";
			cin>>ngaycong;
			cout<<"Nhap tien cong: ";
			cin>>tiencong;
		}	
		void xuat()
		{
			NV::xuat();
			cout<<"\nNgay cong: "<<ngaycong;
			cout<<"\nTien cong: "<<tiencong;
		}
		int tinhluong()
		{
			return ngaycong*tiencong;
		}
		int getngay(){return ngaycong;}
};
int main()
{
	int n;
	HopDong *a;
	cout<<"n = ";cin>>n;
	a=new HopDong[n+1];
	for(int i=1;i<=n;i++)
	{
		cout<<"Nhap nv "<<i<<" : ";
		a[i].nhap();
		cout<<endl;
	}
	for(int i=1;i<=n;i++)
	{
		cout<<"\nNhan vien "<<i<<" : ";
		a[i].xuat();
	}
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++)
	{
		if(a[i].tinhluong()<a[j].tinhluong())	swap(a[i],a[j]);
	}
	cout<<"\n\nDanh sach luong giam dan";
	for(int i=1;i<=n;i++)
	{
		a[i].xuat();
	}
	int min=a[1].getngay();
	for(int i=2;i<=n;i++)
	{
		if(a[i].getngay()<min)	min=a[i].getngay();
	}
	cout<<"\n\nDanh sach nhung nhan vien nghi nhieu nhat";
	for(int i=1;i<=n;i++)
	{
		if(a[i].getngay()==min)	a[i].xuat();
	}
}
