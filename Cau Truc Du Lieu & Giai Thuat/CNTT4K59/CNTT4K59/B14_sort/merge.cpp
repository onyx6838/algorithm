#include<bits/stdc++.h>
using namespace std;
int b[1000],c[1000];
void MS(int *a,int L,int R)
{
	if(L>=R) return;
	int M=(L+R)/2;
	MS(a,L,M);
	MS(a,M+1,R);
	for(int i=L;i<=M;i++) b[i]=a[i];  //sao nua dau sang b
	for(int i=M+1;i<=R;i++) c[i]=a[i];  //sao nua cuoi sang c
	b[M+1]=c[R+1]=max(b[M],c[R])+1;   //LONG_MAX, FLT_MAX, DBL_MAX
	for(int i=L,j=M+1,k=L;k<=R;k++)	a[k]=b[i]<c[j]?b[i++]:c[j++];
}
int main()
{
	int a[]={4,7,2,8,1,6,3,5},n=sizeof(a)/sizeof(int); //
	MS(a,0,n-1);
	cout<<"\nSau khi sap \n";
	for(auto x:a) cout<<setw(5)<<x;
}


