#include"iostream"
#include"maytinh.cpp"
using namespace std;
class DSMT
{
	private:
		int n;
		MAYTINH *a;
	public:
		void nhapMT();
		void xuatMT();
		void find(string timgia,string timbh);		
};
void DSMT::nhapMT()
{
	cout<<"Nhap n = ";
	cin>>n;
	a=new MAYTINH[n+1];
	for(int i=1;i<=n;i++)
	{
		cout<<"May tinh thu "<<i;
		a[i].nhap();
	}
}
void DSMT::xuatMT()
{
	for(int i=1;i<=n;i++)
	{
		cout<<"May tinh "<<i;
		a[i].xuat();
		cout<<endl;
	}
}
void DSMT::find(string timgia,string timbh)
{
	cout<<"\nNhap gia can tim";
	cin>>timgia;
	cout<<"\nNhap bao hanh can tim";
	cin>>timbh;
	for(int i=1;i<=n;i++)
	{
		if(getbaohanh(a[i])==timbh && getgia(a[i])==timgia)
		{
			cout<<"\nCo";
			return;
		}
	}
	cout<<"\nKhong co";
}
int main()
{
	string b,c;
	DSMT a;
	a.nhapMT();
	a.xuatMT();
	a.find(b,c);
}
