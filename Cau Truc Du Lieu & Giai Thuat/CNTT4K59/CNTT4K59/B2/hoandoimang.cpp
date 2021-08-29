//Hoan doi 2 mang
#include<bits/stdc++.h>
using namespace std;
#define print(a,n) cout<<"\n"<<#a<<" : "; for(int i=0;i<n;i++) cout<<a[i]<<" ";
int main()
{
	int x[]={3,7,2,1},n=4;
	int y[]={6,8,4,8,3,2},m=6;
	int *a=x,*b=y;
	swap(a,b);
	print(a,m);
	print(b,n);

}


