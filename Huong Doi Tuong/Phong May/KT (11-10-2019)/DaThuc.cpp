#include<bits/stdc++.h>
using namespace std;
class Dathuc
{
	private:
		int bac;
		float *heso;
	public:
		Dathuc()
		{
			bac=0;
			heso=NULL;
		}
		void nhap();
		void xuat();
		void tinhgiatri(float &x);
		Dathuc operator + (const Dathuc &A)
		{
			Dathuc C;
			C.bac=bac>A.bac?bac:A.bac;
			C.heso = new float [C.bac+1];
			for(int i=0;i<=C.bac;i++)
			{
				C.heso[i]=(i<=bac&&i<=A.bac)?heso[i]+A.heso[i]:(i>bac?A.heso[i]:heso[i]);
			}
			return C;
		}
		Dathuc operator-(const Dathuc &A)
		{
			Dathuc C;
			C.bac=bac>A.bac?bac:A.bac;
			C.heso = new float [C.bac+1];
			for(int i=0;i<=C.bac;i++)
			{
				C.heso[i]=(i<=bac&&i<=A.bac)?heso[i]-A.heso[i]:(i>bac?-A.heso[i]:heso[i]);
				//C.a[i]=(i<=P.n && i<=Q.n)?(P.a[i]+Q.a[i]):(i>P.n?P.a[i]:Q.a[i]);
			}
			return C;
		}
};
void Dathuc::nhap()
{
	cout<<"Nhap bac cua da thuc: "; cin>>bac;
	while (bac<=0) {cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap bac cua da thuc: "; cin>>bac;}
	heso=new float[bac+1];
	for (int i=0;i<=bac;i++)
	{
		cout<<"Nhap he so thu "<<i<<": "; cin>>heso[i];
	}
}
void Dathuc::xuat()
{
	for (int i=0;i<=bac;i++)
	{
	 	cout<<heso[i]<<" ";
	}
}
void Dathuc::tinhgiatri(float &x)
{
	cout<<"\nNhap gia tri x, x="; 
	cin>>x;
	float s=0;
	for (int i=1;i<=bac;i++) s+=heso[i]*pow(x,i);
	cout<<"Gia tri cua da thuc la: S = "<<s;
}
void Dathucapp()
{
	float x, y; 
	Dathuc A, B;
	cout<<"Nhap da thuc thu nhat:\n"; A.nhap();
	cout<<"Nhap da thuc thu hai:\n"; B.nhap();
	cout<<"\nCac da thuc vua nhap la:";
	cout<<"\nDa thuc thu nhat:"; A.xuat();
	cout<<"\nDa thuc thu hai:"; B.xuat();
	cout<<"\nTong cua hai da thuc la: "; (A+B).xuat();
	cout<<"\nHieu cua hai da thuc la: "; (A-B).xuat();	
	cout<<"\nNhap gia tri x cho da thuc thu nhat:"; A.tinhgiatri(x);
	cout<<"\nNhap gia tri x cho da thuc thu hai:"; B.tinhgiatri(y);			
}
void run()
{
	Dathucapp();
}
int main()
{
	run();
}
