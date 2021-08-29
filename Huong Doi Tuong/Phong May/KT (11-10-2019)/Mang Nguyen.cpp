#include"iostream"
using namespace std;
class MN
{
	private:
		int n;
		int *a;
	public:
		friend istream &operator>>(istream &in,MN &x);
		friend ostream &operator<<(ostream &ou,MN &x);
		int operator!();
		friend float TBC(const MN &x);	
};
istream &operator>>(istream &in,MN &x)
{
	cout<<"Nhap n = ";
	in>>x.n;
	x.a=new int[x.n+1];
	for(int i=1;i<=x.n;i++)
	{
		cout<<"Phan tu thu "<<i<<"   ";
		in>>x.a[i];
	}
	return in;
}
ostream &operator<<(ostream &ou,MN &x)
{
	for(int i=1;i<=x.n;i++)
	{
		ou<<x.a[i]<<"\t";
	}
	return ou;
}
int MN::operator!()
{
	int s=0;
	for(int i=1;i<=n;i++)
		s+=a[i];
	return s;	
}
float TBC(const MN &x)
{
	int s=0;
	int dem=0;
	for(int i=1;i<=x.n;i++)
		if(x.a[i]%2==0)
			{
				s+=x.a[i];
				dem++;
			}
	return (float)s/dem;
}
int main()
{
	MN a,b;
	cout<<"Nhap day A "<<endl;
	cin>>a;
	cout<<"Day A: "<<endl;
	cout<<a;
	cout<<"\nNhap day B "<<endl;
	cin>>b;
	cout<<"Day B: "<<endl;
	cout<<b;
	cout<<"\nTBC(A)-TBC(B) = "<<TBC(a)-TBC(b);
	float z=!a+!b;
	cout<<"\n1/(X+Y) = "<<1.0/z;
}
