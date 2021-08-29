//Bi danh
//Nhap vao hai day a1,a2,...an, va b1,b2...bm tinh tong cua tong hai day
#include<bits/stdc++.h>
using namespace std;
typedef int Arr[100];  //Dinh nghia kieu Arr
#define FOR(i,n) for(int i=1;i<=n;i++)
void Nhap(int &n,Arr &A,char ten)
{
	cout<<"So phan tu : "; cin>>n;
	FOR(i,n)
	{
		cout<<ten<<"["<<i<<"]=";
		cin>>A[i];
	}	
}	
int Tong(int n,Arr A)
{
	int s=0;
	FOR(j,n) s+=A[j];
	return s;
}
int main()
{
	Arr A,B;
	int n,m;
	cout<<"Nhap day A:\n";Nhap(n,A,'A');
	cout<<"Nhap day B:\n";Nhap(m,B,'B');
	cout<<"\nTong cua hai day : "<<Tong(n,A)+Tong(m,B);
}


