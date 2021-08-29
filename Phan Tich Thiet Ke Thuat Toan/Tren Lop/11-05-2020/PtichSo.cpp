#include<bits/stdc++.h>
using namespace std;
void TRY(int *x,int k,int T,int n){
	if(T==n)
	{
		cout<<"\n"<<n<<"="<<x[1];
		for(int i=2;i<=k;i++)
		{
			cout<<"+"<<x[i];
		}
	}
	else
	{
		for(x[k+1] = x[k]; x[k+1]+T <=n; x[k+1]++)
		TRY(x,k+1,T + x[k+1],n);
	}
}
//Cai tien x(k+1)
void Try(int *x,int k,int T,int n){
	for(x[k+1]=x[k]; T+2*x[k+1]<=n; x[k+1]++)	Try(x,k+1,T+x[k+1],n);	// t hop co >2 
	x[k+1] = n-T;
	for(int i=1;i<=k+1;i++)	cout<<x[i]<<" ";	// t hop co 1 
	cout<<"\n";
}
int main()
{
	int x[100]={1},n;
	cin>>n;
	//TRY(x,0,0,n);
	Try(x,0,0,n);
}

