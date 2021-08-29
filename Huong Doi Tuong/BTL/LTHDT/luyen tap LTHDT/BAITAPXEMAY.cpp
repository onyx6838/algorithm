#include<bits/stdc++.h>
using namespace std;
class Xe{
	private:
		string hangSX;
		string BKS;
		int nam;
	public:
		Xe();
		Xe(string H, string B, int Y);
		void nhap();
		void xuat();
		int getyear();
		
};
Xe::Xe()
{
	hangSX="";
	BKS="";
	nam=0;
}
Xe::Xe(string H, string B, int Y)
{
	hangSX=H;
	BKS=B;
	nam=Y;	
}
void Xe::nhap()
{
	cout<<"Nhap hang san xuat cua xe: "; fflush(stdin); getline(cin,hangSX);
	cout<<"Nhap bien so cua xe: "; fflush(stdin); getline(cin,BKS);
	cout<<"Nhap nam san xuat: "; cin>>nam;
}
void Xe::xuat()
{
	cout<<"\nHang san xuat: "<<hangSX;
	cout<<"\nBien kiem soat: "<<BKS;
	cout<<"\nNam san xuat: "<<nam;
}
int Xe::getyear()
{
	return nam;
}
class Xemay:public Xe{
	private:
		float PK;
	public:
		Xemay():Xe(){
			PK=0;
		}
		Xemay(string h, string b, int y, int p):Xe(h, b, y)
		{
			PK=p;
		}
		void nhap();
		void xuat();
		int layphankhoi();
};
void Xemay::nhap()
{
	Xe::nhap();
	cout<<"Nhap phan khoi cua xe (don vi cm3): "; cin>>PK;
	while (PK<0)
	{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap phan khoi cua xe (don vi cm3): "; cin>>PK;}
}
void Xemay::xuat()
{
	Xe::xuat();
	cout<<"\nPhan khoi: "<<PK<<"cm3";
}
int Xemay::layphankhoi()
{
	return PK;
}
void motorbikeapp()
{
	int n; Xemay *A;
	cout<<"Nhap so luong xe may: "; cin>>n;
	while (n<=0)
	{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap so luong xe may: "; cin>>n;}
	A= new Xemay[n+1];
	int i=1;
	while (i<=n)
	{
		cout<<"Nhap thong tin xe may thu "<<i<<":\n";
		A[i].nhap();
		i++;
	}
	cout<<"\nThong tin "<<n<<" xe may:";
	int j=1;
	while (j<=n)
	{
		cout<<"\nXe may thu "<<j<<":";
		A[j].xuat();
		j++;
	}
	int k=1;
	while (k<=n)
	{
		int l=k+1;
		while (l<=n)
		{
			if (A[k].getyear()>A[l].getyear()) swap(A[k], A[l]);
			l++;
		}
		k++;
	}
	cout<<"\n\nThong ke cac xe may theo thu tu tang dan nam san xuat la:";
	int o=1;
	while (o<=n)
	{
		A[o].xuat();
		o++;
	}
	int max=A[1].layphankhoi();
	int t=2;
	while (t<=n)
	{
		if (A[t].layphankhoi()>max) max=A[t].layphankhoi();
		t++;
	}
	cout<<"\n\nCac xe may co phan khoi lon nhat la:";
	int r=1;
	while (r<=n)
	{
		if (A[r].layphankhoi()==max) A[r].xuat();
		r++;
	}
}
void run()
{
	 motorbikeapp();
}
int main()
{
	run();
}

