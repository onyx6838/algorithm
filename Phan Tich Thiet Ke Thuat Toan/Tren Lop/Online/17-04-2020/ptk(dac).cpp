#include<bits/stdc++.h>
using namespace std;
int partition(int *a,int L,int R){
	swap(a[L],a[(L+R)/2]);
	int i=L;
	for(int j=L+1;j<=R;j++)
	if(a[j]<a[L])	swap(a[++i],a[j]);
	swap(a[L],a[i]);
	return i;
} // phan hoach
int find_k(int *a,int L,int R,int k)	// O(n)
{
	if(L==R)	return a[L];
	int p = partition(a,L,R);
	if(k==p-L+1)	return a[p];	
	if(k < p-L+1)	return find_k(a,L,p-1,k);
	return find_k(a,p+1,R,k-(p-L+1));
}// tim ptu thu k theo 3 truong hop
void qs(int *a,int L,int R)	// sap xep vs chia de tri
{
	if(L>=R)	return;
	int p=partition(a,L,R);
	qs(a,L,p-1);	// de quy sap xep 1 ben
	qs(a,p+1,R);
}
int main()
{
	int a[] = {7,4,2,8,4,6,2,4,3,7},n=sizeof(a)/sizeof(int);
	// 2 2 3 4 4 4
	//cout<<find_k(a,0,n-1,7);
	qs(a,0,n-1);
	for(int x:a)	cout<<x<<" ";
}

