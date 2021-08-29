#include<bits/stdc++.h>
using namespace std;
void QuickSort(int *a,int L,int R)
{
	if(L>=R) return;
	int x=a[(L+R)/2];
	int i=L,j=R;
	while(i<=j)
	{
		while(a[i]<x) i++;
		while(a[j]>x) j--;
		if(i<=j) swap(a[i++],a[j--]);
	}
	QuickSort(a,L,j);
	QuickSort(a,i,R);
}
int main()
{
	int a[]={24,243,3,3412,2413,34,345,432,56},n=sizeof(a)/sizeof(int);
	QuickSort(a,0,n-1);
	cout<<"\nDay sau khi sap xep\n";
	for(auto x:a) cout<<setw(5)<<x;

}


