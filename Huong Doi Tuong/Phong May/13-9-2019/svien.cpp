#include"iostream"
#include"string.h"
using namespace std;
typedef struct svien
{
	int ma,khoa;
	char ht[30];
	float diem;
};
istream &operator>>(istream &in,svien &a)
{
	cout<<"Ma SV: ";
	in>>a.ma;
	cout<<"Ho ten: ";
	in.ignore(1);
	in.get(a.ht,30);
	cout<<"Khoa: ";
	in>>a.khoa;
	cout<<"Diem: ";
	in>>a.diem;
	return in;
}
ostream &operator<<(ostream &out,svien &a)
{
	out<<"\nHo ten :"<<a.ht;
	out<<"\nMa SV :"<<a.ma;
	out<<"\nKhoa :"<<a.khoa;
	out<<"\nDiem :"<<a.diem;
	return out;
}
void nhap(const int &n,svien *&a)
{
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
}
void xuat(const int &n,svien *&a)
{
	for(int i=1;i<=n;i++)
	{
		cout<<a[i];
	}
}
int max(const int &n,svien *&a)
{
	int p=-1;
	for(int i=1;i<=n;i++)
	{
		if(p==-1 || a[i].diem > a[p].diem)	p=i;
	}
	if(p==-1)	return -1;
	return p;	
}
void tim(const int &n,svien *&a)
{
	char tim[30];
	cout<<"\nNhap ten SVien can tim ";
	cin.ignore(1);
	cin.get(tim,30);
	for(int i=1;i<=n;i++)
	{
		if(strcmpi(a[i].ht,tim)==0)
		{
			cout<<"--> Tim thay";
			cout<<"\nHo ten :"<<a[i].ht;
			cout<<"\nMa SV :"<<a[i].ma;
			cout<<"\nKhoa :"<<a[i].khoa;
			cout<<"\nDiem :"<<a[i].diem;
			return;
		}
	}
	cout<<"\nKhong tim thay\n";
}
void tbkhoa(const int &n,svien *a)
{
	float t1,t2,t3,t4;
	t1=t2=t3=t4=0;
	int d1,d2,d3,d4;
	d1=d2=d3=d4=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i].khoa==1)
		{
			t1+=a[i].diem;d1++;	
		}	
		if(a[i].khoa==2)
		{
			t2+=a[i].diem;d2++;
		}	
		if(a[i].khoa==3)
		{
			t3+=a[i].diem;d3++;
		}
		if(a[i].khoa==4)
		{
			t4+=a[i].diem;	d4++;
		}	
	}
	cout<<"\n"<<"\nDiem TB khoa 1 = "<<t1/d1;
	cout<<"\nDiem TB khoa 2 = "<<t2/d2;
	cout<<"\nDiem TB khoa 3 = "<<t3/d3;
	cout<<"\nDiem TB khoa 4 = "<<t4/d4;
}
void thongke(const int &n,svien *&a)
{
	int s1=0,s2=0,s3=0,s4=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i].khoa==1)	s1++;
		if(a[i].khoa==2)	s2++;
		if(a[i].khoa==3)	s3++;
		if(a[i].khoa==4)	s4++;
	}
	cout<<"\n"<<"So SV khoa 1 = "<<s1;
	cout<<"\n"<<"So SV khoa 2 = "<<s2;
	cout<<"\n"<<"So SV khoa 3 = "<<s3;
	cout<<"\n"<<"So SV khoa 4 = "<<s4;
}
int &operator>(const svien &a,const svien &b)
{
	a.diem>b.diem?1:0;
}
int main ()
{
	int n;	
	int p;
	cout<<"Nhap n = ";
	cin>>n;
	svien *a;
	a=new svien[n+1];
	nhap(n,a);
	xuat(n,a);
	tim(n,a);
	tbkhoa(n,a);
	thongke(n,a);
	p=max(n,a);
	if(p==-1)	cout<<"\nSVien 1 co diem TB max"<<a[1];
	else cout<<"\nSvien "<<p<<" co diem TB max"<<a[p];
	for(int i=1;i<=n;i++)
		for(int j=1+i;j<=n;j++)
			{
				if(a[i]>a[j])	swap(a[j],a[i]);
			}
	cout<<"\nDscach sap xep diem giam";	
	xuat(n,a);
}
