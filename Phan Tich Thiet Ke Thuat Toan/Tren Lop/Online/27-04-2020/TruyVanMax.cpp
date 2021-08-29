#include<bits/stdc++.h>
using namespace std;
int A[400005];
void update(int k,int a,int b,int p,int x) //nut A[k] quan ly [a,b], chen x vao vi tri p
{
	if(a==b) A[k]=x;
	else
	{
		int m=(a+b)/2;
		p<=m?update(2*k,a,m,p,x):update(2*k+1,m+1,b,p,x); 
		A[k]=max(A[2*k],A[2*k+1]);
	}	
}
int get(int k,int a,int b,int L,int R)  //a<=L<=R<=b
{
	if(L==a && R==b) return A[k];
	int m=(a+b)/2;
	if(R<=m) return get(2*k,a,m,L,R);                          //a<=L<=R<=m<=b ben trai de quy trai
	if(L>m) return get(2*k+1,m+1,b,L,R);                          //a<=m<L<=R<=b	de quy phai
	return max(get(2*k,a,m,L,m),get(2*k+1,m+1,b,m+1,R));  //  L<=m<=R
}
int main()
{
	int n,x,q,L,R;
	scanf("%d%d",&n,&q);
	fill(A,A+400005,INT_MIN);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&x); update(1,1,n,i,x);
	}
	while(q--)
	{
		scanf("%d%d",&L,&R);
		printf("%d\n",get(1,1,n,L,R));
	}
}

