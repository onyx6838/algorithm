#include<bits/stdc++.h>
using namespace std;
int Max(int *a,int n)	// Do phuc tap O(n^3)
{
	int res = INT_MIN;
	for(int i = 0; i<n; i++)
	for(int j = i; j<n; j++)
	{
		int t=0;
		for(int k=i;k<=j;k++)	t+a[k];
		if(t>res)	res = t;
	}
	return res;
}
int Max_caitien(int *a,int n)
{
	int res = INT_MIN;
	for(int i=0;i<n;i++)
	{
		int t=0;
		for(int j=i;j<n;j++)
		{
			t+=a[j];	// cong don tiet kiem vong or
			if(t>res)	res=t;
		}
	}
	return res;
}
int DAC(int *a,int L,int R)	// code them tim vi tri 
{
	if(L==R)	return a[L];
	int M=(L+R)/2;
	int T = DAC(a,L,M), P = DAC(a,M+1,R);
	/* Cum ben trai tim max*/
	int ML = a[M]; 
	t = a[M];
	for(int i=M-1;i>=L;i--)	
	{
		t+=a[i]; if(t>ML)	ML=t;
	}
	/*Cum ben phai tim max*/
	int MR = a[M+1];
	t = a[M+1];
	for(int i=M+2; i<=R; i++)
	{
		t+=a[i]; if(t>MR)	MR=t;
	}
	int G = ML + MR;
	return max(G,max(T,P));
}
int main()
{
//	int a[] = {-4,7,-2,3,-1,-2,-6,-8,0,1,-6,3},n=sizeof(a)/sizeof(int);
//	cout<<Max(a,n);
//	cout<<Max_caitien(a,n);
	int n,a[100005];
	scanf("%d",&n);
	for(int i=0; i<n;i++)	scanf("%d",&a[i]);
	printf("%d",DAC(a,0,n-1));	
}








#include<bits/stdc++.h>
using namespace std;
int DAC(int *a,int L,int R){
	if(L==R)	return a[L];
	int M=(L+R)/2;
	int T = DAC(a,L,M) , P = DAC(a,M+1,R);
	int ML = a[M];
	t=a[M];
	for(int i=M-1;i>=L;i--){
		t+=a[i];
		if(t>ML)	ML=t;
	}
	int MR = a[M+1];
	t = a[M+1];
	for(int i=M+2;i<=R;i++){
		t+=a[i];
		if(t>MR)	MR=t;
	}
	int G = ML+MR;
	return max(G,max(T,P));
}
