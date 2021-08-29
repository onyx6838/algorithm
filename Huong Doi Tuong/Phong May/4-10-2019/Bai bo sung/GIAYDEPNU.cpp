#include<iostream>

using namespace std;
class GIAYDEPNU
{
	private:
		string ma, hang, chatlieu, docao,mau;
	public:
		GIAYDEPNU();
		friend istream &operator>>(istream &in, GIAYDEPNU &u);
		friend ostream &operator<<(ostream &ou, GIAYDEPNU &u);
		string getcao(){ return docao;}
		friend string getmau(GIAYDEPNU &u){	return u.mau;}
};
GIAYDEPNU::GIAYDEPNU()
{
	ma = hang = chatlieu = docao = mau = "chua nhap";
}
istream &operator>>(istream &in, GIAYDEPNU &u)
{
	cout<<"\nNhap ma:"; in>>u.ma;
	cout<<"\nNhap hang:"; in.ignore(1); getline(in,u.hang); 
	cout<<"\nNhap chat lieu:"; in.ignore(1);getline(in,u.chatlieu);
	cout<<"\nNhap do cao:"; cin>>u.docao;
	do
	{
		cout<<"\nNhap mau(1->4):"; cin>>u.mau;
	}while(u.mau[0] < '1' || u.mau[0] > '4');
	return in;
}
ostream &operator<<(ostream &ou, GIAYDEPNU &u)
{
	ou<<"\nMa:"<<u.ma;
	ou<<"\nHang:"<<u.hang;
	ou<<"\nChat lieu:"<<u.chatlieu;
	ou<<"\nDo cao:"<<u.docao;
	ou<<"\nMau:"<<u.mau;
	return ou;
}
int main()
{
	int n;
	GIAYDEPNU *a;
	cout<<"\nNhap so giay dep:";
	do
	{
		cin>>n;
		if(!n) cout<<"\nKhong hop le. Nhap lai!";	
	}while(!n);
	
	a = new GIAYDEPNU [n];
	for(int i=0;i<n;i++)
	{
		cout<<"\nNhap do thu "<<i;
		cin>>a[i];
	} 
	int k=0;
	string docao,mausac;
	cout<<"\nNhap do cao va mau sac can  tim:";
	cin>>docao>>mausac;
	for(int i=0;i<n;i++)
	{
		if(a[i].getcao()==docao && getmau(a[i])==mausac)
		{
			cout<<a[i];
			k=1;
		}
	}
	cout<<"\n-----------KET QUA TIM DUOC------------";
	if(!k) cout<<"\nKhong tim thay do can tim!";
	return 0;
}
