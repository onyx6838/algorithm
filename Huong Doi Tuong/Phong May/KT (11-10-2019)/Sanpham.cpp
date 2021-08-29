#include"iostream"
using namespace std;
class SP
{
	private:
		string ma,ten,gia;
	public:
		SP()
		{
			ma=ten=gia=" ";
		}	
		friend istream &operator>>(istream &in,SP &a);
		friend ostream &operator<<(ostream &ou,SP &a);
		string getgia(){return gia;}
};
istream &operator>>(istream &in,SP &a)
{
	cout<<"Nhap ma sp: ";
	in>>a.ma;
	cout<<"Nhap ten sp: ";
	in.ignore(1);
	getline(in,a.ten);
	cout<<"Nhap gia sp: ";
	getline(in,a.gia);
	return in;
}
ostream &operator<<(ostream &ou,SP &a)
{
	ou<<"\nMa:"<<a.ma;
	ou<<"\nTen:"<<a.ten;
	ou<<"\nGia:"<<a.gia;
	ou<<endl;
	return ou;
}
int main()
{
	int n;
	SP *x;
	cin>>n;
	x=new SP[n+1];
	for(int i=1;i<=n;i++)	cin>>x[i];
	for(int i=1;i<=n;i++)	cout<<x[i];
	string k;	int t=0;
	cout<<"\nNhap gia can tim: ";
	cin>>k;
	for(int i=1;i<=n;i++)
	{
		if(x[i].getgia()==k)
		{
			cout<<x[i];
			t=1;
		}
	}
	cout<<"\n-----------KET QUA TIM DUOC------------";
	if(!t) cout<<"\nKhong tim thay do can tim!";
	return 0;
}
