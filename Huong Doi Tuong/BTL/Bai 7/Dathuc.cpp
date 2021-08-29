#include"iostream"
#include"math.h"
using namespace std;
class DT
{
	private:
		int n;
		float *a;
	public:
		DT()
		{
			n=0;
			a=NULL;
		}	
		DT(const int &n)
		{
			this->n=n;
		}
		~DT()
		{
			delete a;
		}
		void nhap()
		{
			cout<<"Nhap bac = ";
			cin>>n;
			a=new float[n+1];
			for(int i=0;i<=n;i++)
			{
				cout<<"Phan tu thu "<<i<<" : ";
				cin>>a[i];
			}
		}
		friend ostream &operator<<(ostream &os,DT &x)
		{
			os<<x.a[0]<<" + ";
			for(int i=1;i<x.n;i++)
			{
				os<<x.a[i]<<"x^"<<i<<" + ";
			}
			os<<x.a[x.n]<<"x^"<<x.n;
			return os;
		}
		friend float tinhgt(const DT &P,const float &x)
		{
			float s=0;
			for(int i=0;i<=P.n;i++)	s+=P.a[i]*pow(x,i);
			return s;
		}
};
int main()
{
	DT a,b;
	a.nhap();
	b.nhap();
	cout<<a;
	float d1,d2;
	cout<<"\nNhap d1 = ";cin>>d1;
	cout<<"Nhap d2 = ";cin>>d2;
	float x=tinhgt(a,d1);
	float y=tinhgt(b,d2);
	float z=sqrt(x-y);
	cout<<z;
}
