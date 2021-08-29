#include"iostream"
#include"cmath"
using namespace std;
class DT
{
	private:
		int n;
		float *hs;
	public:
		DT();
		DT(const int &n){this->n=n;};
		void nhap();
		void xuat();
		friend float tinhgt(const DT &P,const float &x);
		friend DT operator+(const DT &P,const DT &Q);
};
DT::DT()
{
	n=0;
	hs=NULL;
}
void DT::nhap()
{
	cout<<"Nhap bac = ";
	cin>>n;
	hs=new float[n+1];
	for(int i=0;i<=n;i++)
	{
		cout<<"Phan tu thu "<<i;
		cin>>hs[i];
	}
}
void DT::xuat()
{
	cout<<hs[0]<<" + ";
	for(int i=1;i<n;i++)
	{
		cout<<hs[i]<<" + ";
	}
	cout<<hs[n];
}
float tinhgt(const DT &P,const float &x)
{
	float s=0;
	for(int i=1;i<=P.n;i++)	s+=P.hs[i]*pow(x,i-1);
	return s;
}
DT operator+(const DT &P,const DT &Q)
{
	DT c;
	c.n=P.n>Q.n?P.n:Q.n;//Lay bac max
	c.hs=new float[c.n+1];
	//Truong hop chenh lech bac thi se cong thang vao`
	for(int i=0;i<=c.n;i++)
	c.hs[i]=(i<=P.n && i<=Q.n)?P.hs[i]+Q.hs[i]:(i>P.n?Q.hs[i]:P.hs[i]);
	return c;
}
int main()
{
	DT a,b,c;
	float d1,d2;
	cout<<"Nhap dthuc A:"<<endl;
	a.nhap();
	cout<<"\nDa thuc A:";
	a.xuat();
	cout<<"\nNhap dthuc B:"<<endl;
	b.nhap();
	cout<<"\nDa thuc B:";
	b.xuat();
	c=a+b;
	cout<<"\nR = P + Q = ";c.xuat();
	cout<<"\nNhap d1 va d2 ";
	cin>>d1>>d2;
	float s1=tinhgt(a,d1);
	float s2=tinhgt(b,d2);
	float z=sqrt(s1+s2);
	cout<<"can bac hai z= "<<z;
}
