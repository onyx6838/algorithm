#ifndef	VECTOR_CPP
#define VECTOR_CPP 1
#include"iostream"
using namespace std;
class Vector
{
	private:
		int n;
		float *a;
	public:
		Vector operator+(Vector &v);
		Vector operator-(Vector &v);
		float operator*(Vector &v);
		Vector operator!();
		friend istream &operator>>(istream &in,Vector &u);
		friend ostream &operator<<(ostream &ou,Vector &u);			
};
istream &operator>>(istream &in,Vector &u)
{
	cout<<"Nhap so chieu";
	in>>u.n;
	u.a=new float[u.n+1];
	for(int i=1;i<=u.n;i++)
	{
		cout<<"Nhap thanh phan thu "<<i<<":";
		in>>u.a[i];
	}
	return in;
}
ostream &operator<<(ostream &ou,Vector &u)
{
	ou<<"\nSo chieu "<<u.n<<endl;
	ou<<"\nVector :(";
	for(int i=1;i<=u.n;i++)	ou<<u.a[i]<<",";
	ou<<u.a[u.n]<<")";
	return ou;
}
Vector Vector::operator+(Vector &v)
{
	Vector t;
	int k=(n<v.n)?n:v.n;
	t.n=(n>v.n)?n:v.n;
	t.a=new float[t.n+1];
	for(int i=1;i<=k;i++)
		t.a[i]=a[i]+v.a[i];
	for(int i=k+1;i<=t.n;i++)
		if(k==n) 
			t.a[i]=v.a[i]; 
		else 
			t.a[i]=a[i];
	return t;
}
Vector Vector::operator-(Vector &v)
{
	Vector t;
	int k=(n<v.n)?n:v.n;
	t.n=(n>v.n)?n:v.n;
	t.a=new float[t.n+1];
	for(int i=1;i<=k;i++)
		t.a[i]=a[i]-v.a[i];
	for(int i=k+1;i<=t.n;i++)
		if(k==n) 
			t.a[i]=v.a[i]; 
		else 
			t.a[i]=a[i];
	return t;
}

float Vector::operator*(Vector &v)
{
	float t;
	int k=(n<v.n)?n:v.n;
	for(int i=1;i<=k;i++)
		t+=a[i]*v.a[i];
	return t;	
}
Vector Vector::operator!()
{
	Vector t;
	t.n=n;
	for(int i=1;i<=t.n;i++)
		t.a[i]=-a[i];
	return t;	
}
#endif
