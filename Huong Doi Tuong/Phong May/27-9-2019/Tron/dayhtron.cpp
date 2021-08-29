#ifndef DHTRON_CPP
#define DHTRON_CPP
#include"htron.cpp"
#include"toado.cpp"
#include"iostream"

using namespace std;
class mcircle
{
	private:
		circle *a;
		int n;
	public:
		friend istream &operator>>(istream &in,mcircle &x);
		friend ostream &operator<<(ostream &ou,mcircle &x);
		void operator!();
};
istream &operator>>(istream &in,mcircle &x)
{
	cout<<"Nhap so htron: ";
	in>>x.n;
	x.a=new circle[x.n+1];
	for(int i=1;i<=x.n;i++)
	{
		cout<<"Hinh tron "<<i;
		in>>x.a[i];
	}
	return in;
}
ostream &operator<<(ostream &ou,mcircle &x)
{
	for(int i=1;i<=x.n;i++)
	{
		cout<<"\nHtron "<<i<<endl;
		ou<<x.a[i];
	}
	return ou;
}
void mcircle::operator!()
{
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++)
			if(a[j]>a[i])	swap(a[i],a[j]);
}
#endif
