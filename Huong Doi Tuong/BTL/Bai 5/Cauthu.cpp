#include"iostream"
using namespace std;
class Nguoi
{
	private:
		string scm,ten;
		int nam;
	public:
		void nhap()
		{
			cout<<"\nNhap ho ten: ";
			cin.ignore(1);
			getline(cin,ten);
			cout<<"Nhap so chung minh thu: ";
			getline(cin,scm);
			cout<<"Nhap nam: ";
			cin>>nam;
		}
		void xuat()
		{
			cout<<"Ho ten: "<<ten;
			cout<<"\nSo chung minh thu: "<<scm;
			cout<<"\nNam sinh: "<<nam;	
		}
		int getnam(){return nam;}
};
class CT:public Nguoi
{
	private:
		int sptd,sbt;
	public:
		void nhap()
		{
			Nguoi::nhap();
			cout<<"Nhap so phut thi dau: ";cin>>sptd;
			cout<<"Nhap so ban thang: ";cin>>sbt;
		}
		void xuat()
		{
			Nguoi::xuat();
			cout<<"\nSo phut thi dau: "<<sptd;
			cout<<"\nSo ban thang: "<<sbt<<endl;
		}
		int getsptd(){return sptd;}
		int getsbt(){return sbt;}
};
int main()
{
	int n;
	cout<<"n = ";cin>>n;
	CT *a;
	a=new CT[n+1];
	for(int i=1;i<=n;i++)
	{
		cout<<"Cau thu "<<i<<" : ";
		a[i].nhap();
	}
	cout<<"\n";
	for(int i=1;i<=n;i++)
	{
		a[i].xuat();
	}
	int min=a[1].getnam();
	for(int i=2;i<=n;i++)
	{
		if(a[i].getnam()<min)	min=a[i].getnam();
	}
	cout<<"\nDanh sach cau thu co tuoi tre nhat\n";
	for(int i=1;i<=n;i++)
	{
		if(a[i].getnam()==min)
			a[i].xuat();
	}
	cout<<"\nDanh sach cau thu thuong 5 trieu\n";
	for(int i=1;i<=n;i++)
	{
		if((a[i].getsbt()>=3 && a[i].getsbt()<5) || (a[i].getsptd()>=500))	
			a[i].xuat();
	}
	cout<<"\nDanh sach cau thu thuong 7 trieu\n";
	for(int i=1;i<=n;i++)
	{
		if(a[i].getsbt()>=5)	
			a[i].xuat();
	}
}
