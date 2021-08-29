//Tim cac nghiem pt x1 + x2+... xn =M 
#include<bits/stdc++.h>
using namespace std;
void TRY(int *x,int k,int T,int n,int M)
{
	if(k==n-1)
	{
		x[k+1] = M-T;
		for(int i=1;i<=n;i++)	cout<<x[i]<<" ";
		cout<<endl;
	}
	else	// k<n-1
	{
		for(x[k+1]=0; x[k+1]<=M-T;x[k+1]++)	
			TRY(x,k+1,T+x[k+1],n,M);
	}
}
int main()
{
	int x[100],n,M;
	cin>>n>>M;
	TRY(x,0,0,n,M);
}
