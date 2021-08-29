#include"iostream"
#include"cmath"
using namespace std;
class tamgiac
{	
	private:
		float a,b,c;
	public:
		friend istream &operator>>(istream &in,tamgiac &x);

		friend ostream &operator<<(ostream &ou,tamgiac &x);
		float dt();
		float chuvi(){return a+b+c;
		}
		int kiemtra()
		{
			if(a+b>c || a+c>b || b+c>a)	return 1;
			return 0;
		}
};
istream &operator>>(istream &in,tamgiac &x)
{
	cout<<"Canh a= ";in>>x.a;
	cout<<"\nCanh b= ";in>>x.b;
	cout<<"\nCanh c= ";in>>x.c;
	return in;
}
ostream &operator<<(ostream &ou,tamgiac &x)
{
	ou<<"a= "<<x.a;
	ou<<"\nb= "<<x.b;
	ou<<"\nc= "<<x.c;
	return ou;
}
float tamgiac::dt()
{
	float p;
	p=(a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}
class daytamgiac
{
	private:
		int n;
		tamgiac *x;
	public:
		daytamgiac(){n=0;
		};
		~daytamgiac(){delete []x;
		};
		void nhapday();
		void xuatday();
		void min();
		float cvitb();	
		friend int main();
};
void daytamgiac::nhapday()
{
//	cout<<"Nhap n";
//	cin>>n;
//	x=new tamgiac[n+1];
//	for(int i=1;i<=n;i++)
//	{
//		cin>>x[i];
//	}
	cout<<"Nhap n";
	cin>>n;
	x=new tamgiac[n+1];
	int i=1;
	while(i<=n)
	{
		cin>>x[i];
		if(x[i].kiemtra()==0)
			cout<<"\nNhap lai: ";
		else i++;	
	}
}
void daytamgiac::xuatday()
{
	for(int i=1;i<=n;i++)
	{
		cout<<x[i];
	}
}
void daytamgiac::min()
{
	int p=-1;
	for(int i=1;i<=n;i++)
	{
		if(p==-1 || x[i].dt() < x[p].dt())	p=i;
	}
	if(p==-1)	cout<<"\nTam giac 1 nho nhat";
	else cout<<"\nTam giac "<<p<<" nho nhat";
}
float daytamgiac::cvitb()
{
	float s=0;
	int d;
	for(int i=1;i<=n;i++)
	{
		s+=x[i].chuvi();
	}
	return s/n;
}
int main()
{
	daytamgiac s;
	s.nhapday();
	s.xuatday();
	cout<<"\nchu vi tbinh ";
	cout<<s.cvitb();
	s.min();
}
