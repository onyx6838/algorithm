#include<bits/stdc++.h>
using namespace std;
struct hcn
{
	int dai,rong;
	void nhap()
	{
		cout<<"Chieu dai "; cin>>dai;
		cout<<"Chieu rong "; cin>>rong;
	}
	int dientich() {return dai*rong;}
};
int main()
{
	hcn A,B,*C=new hcn;
	cout<<"hinh A: ";A.nhap();
	cout<<"hinh B: ";B.nhap();
	cout<<"hinh C: ";C->nhap();
	cout<<"\nDien tich cua A "<<A.dientich();
	cout<<"\nDien tich cua B "<<B.dientich();
	cout<<"\nDien tich cua C "<<C->dientich();
}


