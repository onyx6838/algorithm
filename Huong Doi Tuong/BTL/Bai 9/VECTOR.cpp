#include<iostream>
using namespace std;
class VT
{
	private:
		int n;
		int *tp;
	public:
		VT()
		{
			n=0;
			tp=NULL;
		}
		~VT()
		{
			delete[] tp;
		}
		void nhap()
		{
			cout<<"\nnhap so chieu:";
			cin>>n;
			tp=new int[n];
			for(int i=0;i<n;i++)
			{
				cout<<"\nnhap thanh phan thu "<<i+1<<":";
				cin>>tp[i];
			}
		}
		void xuat()
		{
			cout<<"[";
			for(int i=0;i<n-1;i++)
			{
				cout<<tp[i]<<",";
			}
			cout<<tp[n-1];
			cout<<"]";
		}
		VT operator+(VT &a)
		{
			VT c;
			c.n=n>a.n?n:a.n;
			c.tp=new int[c.n];
			for(int i=0;i<c.n;i++)
			{
				c.tp[i]=(i<=n && i<=a.n)?(tp[i]+a.tp[i]):(i>n?a.tp[i]:tp[i]);
			}
			return c;
		}
		friend int  tvh(VT &a,VT &b)
		{
			int c=0;
			int k=a.n>b.n?b.n:a.n;
			for(int i=0;i<k;i++)
			{
				c+=a.tp[i]*b.tp[i];
			}
			return c;
		}
		VT nhan(int k)
		{
			VT c;
			c.n=n;
			c.tp=new int[c.n];
			for(int i=0;i<c.n;i++)
			{
				c.tp[i]=k*tp[i];
			}
			return c;
		}
};
int main()
{
	VT u,v,t;
	VT a,b;
	int d,e;
	u.nhap();
	v.nhap();
	t.nhap();
	u.xuat();
	v.xuat();
	t.xuat();
	a=u+v;
	a=a+t;
	cout<<"\ntong 3 vector u+v+t:";
	a.xuat();
	d=tvh(u,v);
	int k;
	cout<<"\nnhap k:";
	cin>>k;
	b=u.nhan(k);
	e=tvh(b,t);

	cout<<"\nkq:"<<d+e;
	
	
}
