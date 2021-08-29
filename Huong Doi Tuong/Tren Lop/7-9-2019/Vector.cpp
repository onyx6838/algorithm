#include<iostream>
#include<cmath>
using namespace std;
typedef struct Vector
{
	int dim;
	float *items;
};
istream &operator>>(istream &in,Vector &u)
{
	cout<<"Nhap so chieu";
	in>>u.dim;
	u.items=new float[u.dim+1];
	for(int i=1;i<=u.dim;i++)
	{
		cout<<"Nhap thanh phan thu "<<i<<":";
		in>>u.items[i];
	}
	return in;
}
ostream &operator<<(ostream &in,const Vector &u)
{
	in<<"\nSo chieu "<<u.dim<<endl;
	in<<"\Thanh phan cua Vector:(";
	for(int i=1;i<u.dim;i++)	in<<u.items[i]<<",";
	in<<u.items[u.dim]<<")";
	return in;	
}
Vector operator+(const Vector &u,const Vector &v)
{
	Vector t;
	int i,k=(u.dim<v.dim)?u.dim:v.dim;
	t.dim=(u.dim>v.dim)?u.dim:v.dim;
	t.items=new float[t.dim+1];
	for(i=1;i<=k;i++)
		t.items[i]=u.items[i]+v.items[i];
	for(i=k+1;i<=t.dim ;i++)
		if(k==u.dim ) t.items [i]=v.items [i]; else t.items [i]=u.items [i];
	return t;		
}
float operator*(const Vector &u,const Vector &v)
{
	float t;
	int i,k=(u.dim<v.dim)?u.dim:v.dim;
	for(int i=1;i<=k;i++)
		t+=u.items[i]*v.items[i];
	return t;	
}
Vector operator*(const int &k,const Vector &u)
{
	Vector t;
	int i;
	t.dim=u.dim;
	t.items=new float[t.dim+1];
	for(i=1;i<=t.dim;i++)
		t.items[i]=u.items[i]*k;
	return t;	
}
float operator!(const Vector &u)
{
	float t;
	int i;
	for(i=1;i<=u.dim;i++)
		t+=u.items[i]*u.items[i];
	return sqrt(t)/u.dim;	
}
int main()
{
	//u+v,<u,v>,ku,!v,!kv
	Vector u,v;
	int k;
	cout<<"Nhap Vector thu nhat\n";cin>>u;
	cout<<"Nhap Vector thu hai\n";cin>>v;
	cout<<u;
	cout<<v;
	cout<<"\nu+v:"<<u+v;
	cout<<"\nNhap so nguyen k:";cin>>k;
	cout<<"\n<u,v>:"<<u*v;
	cout<<"\nku:"<<k*u;
	cout<<"\n!v:"<<!v;
	cout<<"\n!kv"<<!(k*v);
}
