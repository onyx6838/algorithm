#include"iostream"
#include"string.h"
using namespace std;
class NS
{
	private:
		string ten;
		int tuoi;
	public:
		NS(){ten=tuoi=0;}
		void nhap()
		{
			cout<<"\nNhap ho ten: ";
			cin.ignore(1);
			getline(cin,ten);
			cout<<"Nhap tuoi: ";
			cin>>tuoi;
		}
		void xuat()
		{
			cout<<"\nTen: "<<ten;
			cout<<"\nTuoi: "<<tuoi<<endl;
		}	
		int gettuoi(){return tuoi;}
};
class QL:public NS
{
	private:
		char chucvu[4];
		int ngaycong;
	public:
//		QL():NS()
//		{
//			
//		}
//		QL(string t,int tu,char c,int n):NS(string t,int tu)
//		{
//			
//		}
		void nhap()
		{
			NS::nhap();
			cout<<"Nhap chuc vu: ";
			fflush(stdin);
			cin.get(chucvu,4);
			cout<<"Nhap ngay cong: ";
			cin>>ngaycong;
		}	
		void xuat()
		{
			NS::xuat();
			cout<<"Chuc vu: "<<chucvu;
			cout<<"\nNgay cong: "<<ngaycong;
		}
		float tienluong()
		{
			if(strcmpi(chucvu,"GD")==0)	return 500000*ngaycong;
			if(strcmpi(chucvu,"TP")==0)	return 400000*ngaycong;
			if(strcmpi(chucvu,"NV")==0)	return 350000*ngaycong;
		}
};
class CTY
{
	private:
		int n;
		QL *a;
	public:
		void nhap()
		{
			cout<<"so nvien = ";cin>>n;
			a=new QL[n+1];
			for(int i=1;i<=n;i++)
			{
				cout<<"Nhap nv "<<i<<endl;
				a[i].nhap();
				cout<<endl;
			}
		}	
		void xuat()
		{
			for(int i=1;i<=n;i++)
			{
				cout<<"Nvien "<<i<<endl;
				a[i].xuat();
				cout<<endl;
			}
		}
		void mintuoi()
		{
			int min=a[1].gettuoi();
			for(int i=2;i<=n;i++)
			{
				if(a[i].gettuoi()<min)	min=a[i].gettuoi();
			}
			cout<<"\nDanh sach nhung nguoi co tuoi tre nhat";
			for(int i=1;i<=n;i++)
			{
				if(a[i].gettuoi()==min)
					a[i].xuat();
			}
		}
		void luongmax()
		{
			int max=a[1].tienluong();
			for(int i=2;i<=n;i++)
			{
				if(a[i].tienluong()>max)	max=a[i].gettuoi();
			}
			cout<<"\nDanh sach nhung nguoi co luong cao nhat";
			for(int i=1;i<=n;i++)
			{
				if(a[i].gettuoi()==max)
				a[i].xuat();
			}
		}		
};
//1 lop co so , 1 lop dan xuat , 1 lop bao gom`
int main()
{
	CTY a;
	a.nhap();
	a.xuat();
	a.mintuoi();
	a.luongmax();
}
//int main()
//{
//	int n;
//	cout<<"n = ";cin>>n;
//	QL *a;
//	a=new QL[n+1];
//	for(int i=1;i<=n;i++)
//	{
//		cout<<"Nhap nguoi "<<i;
//		a[i].nhap();
//		cout<<endl;
//	}
//	cout<<endl;
//	for(int i=1;i<=n;i++)
//	{
//		cout<<"\nNguoi "<<i;
//		a[i].xuat();
//		cout<<endl;
//	}
//	int min=a[1].gettuoi();
//	for(int i=2;i<=n;i++)
//	{
//		if(a[i].gettuoi()<min)	min=a[i].gettuoi();
//	}
//	cout<<"\nDanh sach nhung nguoi co tuoi tre nhat";
//	for(int i=1;i<=n;i++)
//	{
//		if(a[i].gettuoi()==min)
//			a[i].xuat();
//	}
//	int max=a[1].tienluong();
//	for(int i=2;i<=n;i++)
//	{
//		if(a[i].tienluong()>max)	max=a[i].gettuoi();
//	}
//	cout<<"\nDanh sach nhung nguoi co luong cao nhat";
//	for(int i=1;i<=n;i++)
//	{
//		if(a[i].gettuoi()==max)
//			a[i].xuat();
//	}
//}
