//tim kiem nhi phan
#include<bits/stdc++.h>
using namespace std;

int bs(int *a,int L,int R,int k) //binary search dung de quy
{
	if(L>R) return -1; //Khong co
	int M=(L+R)/2;
	if(a[M]==k) return M;
	return a[M]>k?bs(a,L,M-1,k):bs(a,M+1,R,k);
}
//Khu de quy dung vong lap
int binary_search(int *a,int L,int R,int k)
{
	while(L<=R)
	{
		int M=(L+R)/2;
		if(a[M]==k) return M;
		a[M]>k?R=M-1:L=M+1;
	}
	return -1;
}
int main()
{
	int a[]={432,234,4,853,44,869,54,52,87,9523,96},n=sizeof(a)/sizeof(int);
	sort(a,a+n);
	cout<<"\nDay sau khi sx"<<endl;
	for(auto x:a) cout<<x<<" ";
	int k=87;
	int p=binary_search(a,0,n-1,k);
	if(p==-1) cout<<"\nKhong tim thay";
	else cout<<"\nTim thay "<<k<<" tai "<<p;
}


