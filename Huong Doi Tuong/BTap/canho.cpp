#include"iostream"
using namespace std;
typedef struct canho
{
	float cdai,crong;
};
istream &operator>>(istream &in,canho &a)
{
	cout<<"chieu dai : ";
	cin>>a.cdai;
	cout<<"chieu rong : ";
	cin>>a.crong;
	return in;
}
ostream &operator<<(ostream &ou,canho &a)
{
	cout<<"- chieu dai: "<<a.cdai<<endl;
	cout<<"-chieu rong: "<<a.crong<<endl;
	return ou;
}
float &operator+(canho &a,float &s)
{
	s+=a.cdai*a.crong;
	return s;
}
int main()
{
	int n;
	canho *a;
	cin>>n;
	a=new canho[n];
	for(int i=1;i<=n;i++)	cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		cout<<"can ho "<<i<<endl;
		cout<<a[i];
	}
	float s=0;
	for(int i=0;i<=n;i++)	s=a[i]+s;
	cout<<"Tong dien tich "<<s;	
}
