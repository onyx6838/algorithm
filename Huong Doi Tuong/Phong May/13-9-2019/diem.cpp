#include"iostream"
#include"cmath"
using namespace std;
typedef struct diem
{
	float x,y;
	int mau;	
};
void nhap(int &n,diem *&a)
{
	cout<<"Nhap so diem ";cin>>n;
	a = new diem[n+1];
	for(int i=1;i<=n;i++)
	{
	cout<<"Hoanh do ";cin>>a[i].x;
	cout<<"Tung do ";cin>>a[i].y;
	cout<<"Mau";cin>>a[i].mau;
	}
}
void xuat(int &n,diem *a)
{
	for(int i=1;i<=n;i++)
	{
	cout<<"\nDiem "<<i<<":";
	cout<<"\nx= "<<a[i].x<<","<<" y= "<<a[i].y;
	cout<<"\nMau "<<a[i].mau;
	}
}
void thongke(int &n,diem *a)
{
	int d=0,x=0,v=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i].mau==1)	d++;
		if(a[i].mau==2)	x++;
		if(a[i].mau==3)	v++;
	}
	cout<<"\n"<<"Diem mau do = "<<d;
	cout<<"\nDiem mau xanh = "<<x;
	cout<<"\n"<<"Diem mau vang = "<<v;
}
float kc(diem &a,diem &b)
{
	float u=a.x-b.x;
	float v=a.y-b.y;
	return sqrt(pow(u,2)+pow(v,2));
}
void diemdo(int &n,diem *&a)
{
	diem O;
	O.x=O.y=0;
	float max=kc(a[1],O);
	for(int i=1;i<=n;i++)
	{
			if(a[i].mau==1 && kc(a[i],O)>max)
			{
				cout<<"\nDiem xa goc toa do nhat"<<endl;
				cout<<"\nDiem thu "<<i<<" ("<<a[i].x<<","<<a[i].y<<")";
				return;
			}	
	}
	cout<<"\nDiem do 1 max ";	
}
void GK(int &n,diem *&a)
{
	float GK=0;
	for(int i=1;i<=n;i++)
		GK+=kc(a[i-1],a[i]);
	cout<<"\nDo dai duong gap khuc la "<<GK;	
}
int main ()
{
	diem *a;
	int n;
	nhap(n,a);
	xuat(n,a);
	thongke(n,a);
	diemdo(n,a);
	GK(n,a);
}
