#include"iostream"
#include"cstring"
using namespace std;
class DTNC
{
	private:
		char ma[10],Tmon[30];
		int STC;
		float diem;
	public:
		void nhap()
		{
			cout<<"Nhap ma: ";
			cin.ignore(1);
			cin.get(ma,10);
			cout<<"Nhap ten mon: ";
			cin.ignore(1);
			cin.get(Tmon,30);
			cout<<"Nhap STC: ";
			cin>>STC;
			cout<<"Nhap diem: ";
			cin>>diem;
		};
		void xuat()
		{
			cout<<"Ma: ";cout<<ma;
			cout<<"\nTen :";cout<<Tmon;
			cout<<"\nSTC: ";cout<<STC;
			cout<<"\nDiem: ";cout<<diem;
		}
		DTNC(char s1[10]=" 5",char s2[30]=" 9",int tin=2,float diem=0)
		{
			strcpy(ma,s1);
			strcpy(Tmon,s2);
			STC=tin;this->diem=diem;
		}
};
class DTTC:public DTNC
{
	private:
		float diemqt;
	public:
		void nhap()
		{
			cout<<"Nhap mon: \n";
			DTNC::nhap();
			cout<<"\nNhap diem qt: ";cin>>diemqt;
		}	
		void xuat()
		{
			DTNC::xuat();
			cout<<"\nDiem qt: "<<diemqt;
		}
};
int main()
{
	DTTC *a;
	int n;
	cout<<"Nhap n";cin>>n;
	a=new DTTC[n+1];
	for(int i=1;i<=n;i++)	a[i].nhap();
	for(int i=1;i<=n;i++)	a[i].xuat();
}
