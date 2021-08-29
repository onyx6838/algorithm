//Dao mang
#include<bits/stdc++.h>
using namespace std;

void dao(int n,int *a)
{
	for(int i=0,j=n-1;i<j;i++,j--) swap(a[i],a[j]);
}

void Reverse(int L,int R,int *a)
{
	if(L>=R) return;
	swap(a[L],a[R]);
	Reverse(L+1,R-1,a);
}
int main()
{
	int a[]={4,7,2,8,1,6},n=sizeof(a)/sizeof(int);
	cout<<"Day sau khi dao di\n"; 
	dao(n,a);
	for(auto x:a) cout<<setw(5)<<x;
	cout<<"\nDay sau khi dao lai \n"; 
	Reverse(0,n-1,a);
	for(auto x:a) cout<<setw(5)<<x;
}


