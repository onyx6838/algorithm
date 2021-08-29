#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<=b;i++)
template <class T>
//typedef int T;
struct Dathuc
{
	int n;  //Bac
	T a[100];	//Cac chu so cua so duoi dang dao nguoc
	void Nhap()
	{
		cout<<"Bac n = "; cin>>n;
		//a= new T[n+1];
		FOR(i,0,n) cin>>a[i];
	}
	void Xuat()
	{
		cout<<endl;
		FOR(i,0,n) cout<<setw(5)<<a[i];
	}
	//~Dathuc(){if(a) delete []a;}
	friend Dathuc operator+(Dathuc const P,Dathuc const Q)
	{
		Dathuc R;
		R.n=max(P.n,Q.n);
		//R.a = new T[R.n+1];
		FOR(i,0,R.n)
		R.a[i]=i<=P.n&&i<=Q.n?P.a[i]+Q.a[i]:(i<=P.n?P.a[i]:Q.a[i]);
		return R;
	}
	friend Dathuc operator*(Dathuc const P,Dathuc const Q)
	{
		Dathuc R;
		R.n=P.n+Q.n;
		//R.a = new T[R.n+1];
		FOR(i,0,R.n)
		{
			R.a[i]=T(0);  //Ep kieu cua so 0
			FOR(j,0,i)
			if(j<=P.n && i-j<=Q.n) R.a[i]+=P.a[j]*Q.a[i-j];
		}
		return R;
	}
//	Dathuc &operator=(Dathuc R)
//	{
//		this->n=R.n;
//		this->a=new T[R.n+1];
//		FOR(i,0,R.n) this->a[i]=R.a[i];
//		return *this;
//	}
};

int main()
{
	Dathuc<float>P,Q,R,S;
	P.Nhap();
	Q.Nhap();
	R=P+Q;
	S=P*Q;
	P.Xuat(); Q.Xuat();R.Xuat();S.Xuat();
}


