#include<bits/stdc++.h>
using namespace std;
long long nt(int *a,int n)	//a[0] ->a[n-1]
{
	long long res = 0;
	for(int i=0; i<n; i++)
		for(int j=i+1;j<n;j++)	res+=a[i] > a[j];	// return ?0:1
	return res;
}	
int b[100005],c[100005];
long long MS(int *a,int L,int R)
{
	if(L==R)	return 0;
	int i,j,k,M = (L+R)/2;
	long long res = MS(a,L,M) + MS(a,M+1,R);
	for(i=L;i<=M;i++)	b[i] = a[i];	// copy nua dau sang b
	for(i=M+1;i<=R;i++)	c[i] = a[i];	// copy nua dau sang c
	b[M+1] = c[R+1] = 1 + max(b[M],c[R]);	//INT_MAX la max +1 cua 2 day b,c thay linh canh vo cuung`
	for(int i=L, j=M+1,k=L; k<=R; k++)
	if(b[i]<=c[i])	a[k] = b[i++];
	else
	{
		res += M-i+1;
		a[k] = c[j++];
	}
	return res;
}
int main()
{
	int a[100005],n; //{4,7,2,8,4,8,3,2,4},n=sizeof(a)/sizeof(int);
	scanf("%d",&n);
	for(int i=0;i<n;i++)	scanf("%d",&a[i]);
	printf("%lld",MS(a,0,n-1));
}

