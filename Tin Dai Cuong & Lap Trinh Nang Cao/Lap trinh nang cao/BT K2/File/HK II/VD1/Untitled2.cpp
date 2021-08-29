#include<iostream.h>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class sinhvien{
	private:
		char ht[30];
		int MSV;
		float diem;
	public:
		sinhvien nhap()
		{
			cin.ignore(1);	
			cin.get(ht,30);
			cin>>MSV;
			cin>>diem;
		}	
		void xuat()
		{
			cout<<"Ho ten:"<<ht<<endl;
			cout<<"MSV:"<<MSV<<endl;
			cout<<"Diem:"<<diem<<endl;
		}
};
void nhapds(int *n,sinhvien *&ds)
{
	cin>>*n;
	ds=new sinhvien[*n+1];
	for(int i=0;i<n;i++)
	ds[i]=nhap();
}
void xuatds(int n,sinhvien *ds)
{
	cout<<"Thong tin SV"<<endl;
	for(int i=0;i<n;i++)
	ds[i]=xuat();	
}
int xeploai(int n,sinhvien ds)
{
	if(sv.diem >=9) return 1;
	if(sv.diem <9 && sv.diem >=8)	return 2;
	if(sv.diem <8 && sv.diem >=7)	return 3;
	if(sv.diem <7 && sv.diem >=5)	return 4;
	if(sv.diem <5)	return 5;
}
void thongke(int k,int n,sinhvien *ds)
int main ()
{
}


