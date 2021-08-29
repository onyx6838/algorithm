#include"iostream"
#include"cmath"
using namespace std;
class tamgiac
{
	private:
		float a,b,c;
	public:
		void nhap()
		{
			cout<<"Canh a: ";cin>>a;
			cout<<"Canh b: ";cin>>b;
			cout<<"Canh c ";cin>>c;
		}
		void xuat()
		{
			cout<<"\na = "<<a;
			cout<<"\nb= "<<b;
			cout<<"\nc= "<<c;
		}
		float dt()
		{
			int p;
			p=(a+b+c)/2;
			return sqrt(p*(p-a)*(p-b)*(p-c));	
		}
		float chuvi(){return a+b+c;}
		int kiemtra()
		{
			if(a+b>c || a+c>b || b+c>a)	return 1;
			return 0;
		}
};
int main()
{
	tamgiac *a;
	int n;
	cout<<"Nhap n= ";cin>>n;
	a=new tamgiac[n+1];
	int i=1;
	while(i<=n)
	{
		a[i].nhap();
		if(a[i].kiemtra())	cout<<"Nhap lai\n";
		else i++;
	}
	cout<<"\nDanh sach cac tam giac";
	for(int i=1;i<=n;i++)
	{
		a[i].xuat();
		cout<<endl;
	}
	//Tim dien tich nho nhat
	float min=a[1].dt();
	for(int i=2;i<=n;i++)
	{
		if(a[i].dt()<min)
			min=a[i].dt();
	}
	//In ra cac hinh co dien tich nho nhat;
	cout<<"Danh sach cac tam giac min"<<endl;
	for(int i=1;i<=n;i++)
	{
		if(a[i].dt()==min)
		{
			a[i].xuat();
		}
	}
	//Tinh chu vi trung binh
	float s=0;
	for(int i=1;i<=n;i++)
	{
		s+=a[i].chuvi();
	}
	cout<<"\nTrung binh chu vi cac tam giac = "<<s/n;
}
