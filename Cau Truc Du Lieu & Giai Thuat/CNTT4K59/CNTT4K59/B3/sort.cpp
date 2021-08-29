#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
typedef pair<int,int> ipair;
#define giatri first
#define vitri second
int main()
{
	int n;
	cout<<"Nhap so phan tu "; cin>>n;
	ipair A[n+4];
	for(int i=1;i<=n;i++)
	{
		cin>>A[i].giatri;
		A[i].vitri=i;
	}
//	for(int i=1;i<n;i++)
//	for(int j=i+1;j<=n;j++)
//	if(A[i].giatri>A[j].giatri) swap(A[i],A[j]);
	sort(A+1,A+n+1);
	cout<<"\nGia tri sau khi sort :\n";
	for(int i=1;i<=n;i++) cout<<setw(4)<<A[i].giatri;
	cout<<"\nVi tri sau sort :\n";
	for(int i=1;i<=n;i++) cout<<setw(4)<<A[i].vitri;
}


