//Tim vi tri phan tu am dau tien
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[] = {4,7,2,-8,3,-6,1,-8}, n=sizeof(a)/sizeof(int);
	for(i=0; i<n; i++)	if(a[i]<0)	{cout<<i; break;
	}
	if(i==n)	cout<<"k co ptu am";
}

