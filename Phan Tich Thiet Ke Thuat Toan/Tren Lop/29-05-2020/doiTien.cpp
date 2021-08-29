#include<bits/stdc++.h>
using namespace std;

int main()
{
	int mg[] = {1,2,5,10,20,50,100,200,500}, n=sizeof(mg)/sizeof(int);
	sort(mg,mg+n,greater<int>());
	int M,k=0;
	cout<<"Nhap so tien M = ";cin>>M;
	for(auto x:mg)	{	// lay cac to tien menh gia lon nhat trc
		k += M/x;
		M%=x;
	}
	cout<<"So to it nhat "<<k;
}

