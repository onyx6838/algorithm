#include"iostream"
#include"math.h"
using namespace std;
class Diem{
	private:
		float x,y;
		int mau;
	public:
		void nhap();
		void xuat()
		{
			Diem M;
			M=*this;
			cout<<"("<<M.x<<","<<M.y<<",["<<M.mau<<"]) ";
		}
		float kc(const Diem &N);
		int thongke(const Diem &M);
		void diemdo(const Diem &M);
		friend int main();
		void khong(Diem &O){O.x=O.y=0;};
};
void Diem::nhap()
{
	cout<<"x,y: ";cin>>this->x>>this->y;
	do
	{	
		cout<<"mau(1,2,3):";cin>>this->mau;
	}while(mau<1 || mau>3);
}
float Diem::kc(const Diem &N)
{
	Diem M;
	M=*this;
	return sqrt(pow(x-N.x,2)+pow(y-N.y,2));
}
int Diem::thongke(const Diem &M)
{
	if(M.mau==1)	return 1;
	if(M.mau==2)	return 2;
	if(M.mau==3)	return 3;
}
int main()
{
	int n,d=0,v=0,x=0;
	Diem *a;
	cin>>n;
	a=new Diem[n+1];
	for(int i=1;i<=n;i++)	a[i].nhap();
	for(int i=1;i<=n;i++)	a[i].xuat();
	for(int i=1;i<=n;i++)
	{
		if((a[i].thongke(a[i]))==1)	d++;
		if((a[i].thongke(a[i]))==2)	v++;
		if((a[i].thongke(a[i]))==3)	x++;
	}
	cout<<"\nSo diem mau do: "<<d;
	cout<<"\nSo diem mau vang: "<<v;
	cout<<"\nSo diem mau xanh: "<<x;
	Diem c;
	c.khong(c);
	float max=c.kc(a[1]);
	for(int i=2;i<=n;i++)
	{
		if(a[i].mau==1 && a[i].kc(c)>max)
			{
				cout<<"\nDiem xa goc toa do nhat"<<endl;
				cout<<"Diem thu "<<i<<" ("<<a[i].x<<","<<a[i].y<<")";
			}
		else {cout<<"\nDiem do 1 max ";}
	}
	
	float gk=0;
	for(int i=1;i<=n;i++)
		gk+=a[i-1].kc(a[i]);
	cout<<"\nDo dai duong gap khuc = "<<gk;
}
