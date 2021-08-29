#include<bits/stdc++.h>
using namespace std;
void QuickSort(int *a,int L,int R)
{
	if(L>=R) return;
	swap(a[L],a[(L+R)/2]);
	int i=L;
	for(int j=L+1;j<=R;j++) if(a[j]>a[L]) swap(a[++i],a[j]);
	swap(a[L],a[i]);
	QuickSort(a,L,i-1);
	QuickSort(a,i+1,R);
}
int main()
{
	int a[]={24,243,3,3412,2413,34,345,432,56},n=sizeof(a)/sizeof(int);
	QuickSort(a,0,n-1);
	cout<<"\nDay sau khi sap xep\n";
	for(auto x:a) cout<<setw(5)<<x;

}


