#include"iostream"
#include"string.h"
#include"conio.h"
using namespace std;
typedef struct nvien
{
	int luong;
	char ht[30],ma[30];
};
istream &operator>>(istream &in,nvien &a)
{
	cout<<"Ten: ";
	fflush(stdin);
	gets(a.ht);
	cout<<"\nMa NV: ";
	gets(a.ma);
	cout<<"\nLuong: ";
	cin>>a.luong;
	return in;	
}
ostream &operator<<(ostream &ou,nvien &a)
{
	cout<<"- Ten: "<<a.ht<<endl;
	cout<<"- Ma NV: "<<a.ma<<endl;
	cout<<"- Luong: "<<a.luong<<endl;
}
int operator>(nvien &a,nvien &b)
{
	return	(a.luong>b.luong?1:0);
}
int main()
{
	int n;
	nvien *a;
	a=new nvien[n];
	cin>>n;
	for(int i=1;i<=n;i++)	cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		cout<<"Nvien "<<i<<endl;
		cout<<a[i];
	}
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++)
		{
				if(a[i]>a[j])	swap(a[i],a[j]);	
		}
	cout<<endl;	
	for(int i=1;i<=n;i++)	cout<<a[i];
}
