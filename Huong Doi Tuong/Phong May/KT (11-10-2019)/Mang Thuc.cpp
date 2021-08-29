#include"iostream"
using namespace std;
class MT
{
	private:
		int n;
		float *a;
	public:
		MT();
		~MT();
		void nhap();
		void xuat();
		float TBC();
		friend float max(const MT &b);	
};
void MT::xuat()
{
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<"\t";
	}
}
void MT::nhap()
{
	cout<<"Nhap n = ";
	cin>>n;
	a=new float[n+1];
	for(int i=1;i<=n;i++)
	{
		cout<<"Phan tu thu "<<i;
		cin>>a[i];
	}
}
MT::MT()
{
	n=0;
	a=NULL;
}
MT::~MT()
{
	delete []a;
}
float MT::TBC()
{
	float s=0;
	for(int i=1;i<=n;i++)
	{
		s+=a[i];
	}	
	return (s/n);
}
float max(const MT &b)
{
	float max=b.a[0];
	for(int i=1;i<=b.n;i++)
	{
		if(b.a[i]>max)	max=b.a[i];
	}
	return max;
}
int main()
{
	MT a,b;
	cout<<"Nhap mang A"<<endl;
	a.nhap();
	cout<<"Mang A: ";
	a.xuat();
	cout<<"\nNhap mang B"<<endl;
	b.nhap();
	cout<<"Mang B: ";
	b.xuat();
	float t=0;
	t=max(a)-max(b);
	cout<<"\nmax(A)-max(B) = "<<t;
	float z=a.TBC()+b.TBC();
	cout<<"1/(TBC(A)+TBC(B)) = "<<1/z;
}
