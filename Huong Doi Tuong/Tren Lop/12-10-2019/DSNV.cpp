#include"iostream"
#include"cstring"
using namespace std;
class NV
{
	private:
		string ma,ht;
	public:
		void nhap()
		{
			cout<<"\nNhap Ma: ";
			cin.ignore(1);
			getline(cin,ma);
			cout<<"Nhap ten: ";
			getline(cin,ht);
		}
		void xuat()
		{
			cout<<"\nMa: "<<ma;
			cout<<"\nHo ten: "<<ht;	
		}	
		string getma(){return ma;}
};
class bienche: public NV
{
	private:
		int NCT,hsl;
	public:
		void nhap()
		{
			NV::nhap();
			cout<<"Nhap so nam cong tac :";
			cin>>NCT;
			cout<<"Nhap he so luong: ";
			cin>>hsl;
		}
		void xuat()
		{
			NV::xuat();
			cout<<"\nNam cong tac: "<<NCT;
			cout<<"\nHe so luong: "<<hsl;
		}
		int getnam(){return NCT;}
		int gethsl(){return hsl;}
};
class DSNV: public bienche
{
	private:
		int n;
		bienche *a;
	public:
		void nhapNV()
		{
			cout<<"Nhap n: ";
			cin>>n;
			a=new bienche[n+1];
			for(int i=1;i<=n;i++)
			{
				cout<<"\nNhan vien thu "<<i<<" : ";
				a[i].bienche::nhap();
			}
		}	
		void xuatNV()
		{
			for(int i=1;i<=n;i++)
			{
				cout<<"\nNhan vien "<<i<<" :";
				a[i].bienche::xuat();
				cout<<endl;
			}
		}
		void luongtb()
		{		
			long s=0;
			for(int i=1;i<=n;i++)
			{
				s+=50*a[i].bienche::gethsl()*365*a[i].bienche::getnam();
			}
			cout<<"\nLuong binh quan cua cong ty = "<<(float)s/n;
		}
		void maxnam()
		{
			cout<<endl;
			int max=a[1].bienche::getnam();
			for(int i=2;i<=n;i++)
			{
				if(a[i].bienche::getnam()>max)	max=a[i].bienche::getnam();
			}	
			for(int i=1;i<=n;i++)
			{
				if(a[i].bienche::getnam()==max)	
				{
					cout<<"Nguoi "<<i<<" co nam cong tac max = "<<max;
					a[i].bienche::xuat();
				}
			}
		}
};
int main()
{
	DSNV a;
	int n;
	a.nhapNV();
	a.xuatNV();
	a.maxnam();	
	a.luongtb();
}
