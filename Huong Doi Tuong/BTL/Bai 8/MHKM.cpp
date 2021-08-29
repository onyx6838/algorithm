#include"iostream"
using namespace std;
class MH
{
	private:
		string ma;
		int ton,soluong,loai;
	public:
		MH()
		{
			ma=ton=soluong=loai=0;
		}
		void nhap()
		{
			cout<<"\nNhap ma hang: ";
			cin.ignore(1);
			getline(cin,ma);
			cout<<"Nhap ton hang: ";
			cin>>ton;
			cout<<"Nhap so luong: ";
			cin>>soluong;
			cout<<"Nhap loai: a";
			cin>>loai;
		}
		void xuat()
		{
			cout<<"\nMa hang: "<<ma;
			cout<<"\nTon hang: "<<ton;
			cout<<"\nSo luong: "<<soluong;
			cout<<"\nLoai: "<<loai;
		}
		int tinhtien()
		{
			if(loai==1)	return soluong*50;
			if(loai==2)	return soluong*20;
			if(loai==3)	return soluong*30;
		}
};
class HKM:public MH
{
	private:
		int giagiam;
	public:
		HKM():MH(){giagiam=0;}
		void nhap()
		{
			MH::nhap();
			cout<<"Nhap gia giam: ";cin>>giagiam;
		}	
		int tinhtien()
		{
			return MH::tinhtien()-giagiam;
		}
		int getgg(){return giagiam;}
};
void tongDoanhSo(HKM *a,int n)
{
	//cout<<"\nTong doanh so ban hang "<<tong;
	int min=a[1].getgg();
	for(int i=2;i<=n;i++)
	{
		if(a[i].getgg() < min)	min=a[i].getgg();
	}
	cout<<"Min = "<<min;
}
int main()
{
	int n;
	cout<<"n= ";
	cin>>n;
	HKM *a;
	a=new HKM[n+1];
	for(int i=1;i<=n;i++)
	{
		cout<<"MHKM "<<i<<" : ";
		a[i].nhap();
	}
	int tong=0;
	for(int i=1;i<=n;i++)
	{
		tong+=a[i].tinhtien();
	}
	tongDoanhSo(a,n);
//	cout<<"\nTong doanh so ban hang "<<tong;
//	int min=a[1].getgg();
//	for(int i=2;i<=n;i++)
//	{
//		if(a[i].getgg() < min)	min=a[i].getgg();
//	}
//	cout<<"\nDanh sach mat hang co giam gia nhieu nhat\n";
//	for(int i=1;i<=n;i++)
//	{
//		if(a[i].getgg()==min)	a[i].xuat();
//	}
}
