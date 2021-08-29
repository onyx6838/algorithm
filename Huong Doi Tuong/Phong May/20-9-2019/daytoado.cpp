#include"iostream"
#include"cmath"
using namespace std;
class toado
{	
	private:
		float x,y;
	public:
		friend istream &operator>>(istream &in,toado &a);
		friend ostream &operator<<(ostream &ou,toado &a);
		int cat(toado a)
		{
			if(x*a.x<0)
			{
				return 1;
			}
			return 0;
		}
		float kc(const toado &b);
		toado()
		{
			x=y=0;
		}
};
istream &operator>>(istream &in,toado &a)
{
	cout<<"Nhap hoanh do";in>>a.x;
	cout<<"\nNhap tung do";in>>a.y;
	return in;
}
ostream &operator<<(ostream &ou,toado &a)
{
	ou<<"\nx=";
	ou<<a.x;
	ou<<"	y= ";
	ou<<a.y;
	return ou;
}
float toado::kc(const toado &b)
{
	toado a;
	a=*this;
	return sqrt(pow(x-b.x,2)+pow(y-b.y,2));
}
class daytoado
{
	private:
		int n;
		toado *a;
	public:
		daytoado(){n==0;
		};
		~daytoado(){delete []a;
		};
		void nhapday();
		void xuatday();
		float gk();
		void xanhat();
		int demtung();
		friend int main();		
};
void daytoado::nhapday()
{
	cout<<"Nhap n: ";
	cin>>n;
	a=new toado[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];	
	}
}
void daytoado::xuatday()
{
	for(int i=1;i<=n;i++)
	{
		cout<<a[i];
	}
}
float daytoado::gk()
{	
	float s=0;
	for(int i=1;i<=n;i++)
	{
		s+=a[i-1].kc(a[i+1]);
	}
	return s;
}
void daytoado::xanhat()
{
	toado O;
	int p=-1;
	for(int i=1;i<=n;i++)
	{
		if(p==-1 || a[i].kc(O)>a[p].kc(O))	p=i;
	}
	if(p==-1)	cout<<"\nDiem dau tien xa goc toa do nhat";
	else cout<<"Diem "<<p<<" xa goc toa do nhat";
}
int daytoado::demtung()
{
	int d=0;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++){
		if(a[i].cat(a[j])){
			d++;
		}
	}
	return d;
}//hoanh do * hoanhdo <0
int main()
{
	daytoado a;
	toado O;
	a.nhapday();
	a.xuatday();
	cout<<"\nkhoang cach tu diem 2 den goc toa do ";
	cout<<a.a[2].kc(O);
	cout<<"\nKhoang cach giua diem 1 va 2 = ";
	cout<<a.a[1].kc(a.a[2]);
	cout<<"\nDo dai gap khuc tu 1 -> n = ";
	cout<<a.gk();
	cout<<"\nDiem xa goc toa do nhat";
	a.xanhat();
	cout<<"\nSo doan cat truc tung";
	cout<<a.demtung();
}
