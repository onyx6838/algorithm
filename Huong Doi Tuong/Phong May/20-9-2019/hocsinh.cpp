#include"iostream"
#include"string.h"
using namespace std;
class hocsinh
{
	private:
		int mahs;
		char ht[30];
		char lop[10];
		float diem;
	public:
		void nhap();
		void xuat();
		float getdiem()
		{
			return diem;
		}
		char *getlop()
		{
			return lop;
		}		
};
void hocsinh::nhap()
{
	cout<<"nhap vao mahs: ";
	cin>>mahs;
	cout<<"nhap vao ten: ";
	cin.ignore(1);
	cin.get(ht,30);
	cout<<"nhap vao lop: ";
	cin.ignore(1);
	cin.get(lop,10);
	cout<<"nhap vao diem: ";
	cin>>diem;
}
void hocsinh::xuat()
{
	cout<<"\nma hoc sinh: "<<mahs;
	cout<<"\nten hoc sinh: "<<ht;
	cout<<"\nlop hoc sinh: "<<lop;
	cout<<"\ndiem hoc sinh: "<<diem;
}
int main()
{
	hocsinh *a;
	int n;
	cout<<"Nhap so hoc sinh";
	cin>>n;
	a=new hocsinh[n+1];
	for(int i=1;i<=n;i++)	{a[i].nhap();}
	cout<<"\nDanh sach hoc sinh la";
	for(int i=1;i<=n;i++)	{a[i].xuat();cout<<endl;}	
	cout<<"\nnhap 1 lop hoc: ";
	char lophoc[10];
	cin.ignore(1);
	cin.get(lophoc,10);
	float diem=0;
	int dem=0;
	cout<<"\nCac ban lop do la: ";
	for(int i=1;i<=n;i++)
		if(strcmpi(a[i].getlop(),lophoc)==0)
		{
			a[i].xuat();
			diem+=a[i].getdiem();
			dem++;
		}
	cout<<"\nDiem trung binh la "<<diem/dem;
}
