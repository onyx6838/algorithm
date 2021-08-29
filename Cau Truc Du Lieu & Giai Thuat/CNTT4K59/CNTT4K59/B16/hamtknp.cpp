#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int k=5,a[]={1,3,5,5,5,7,9,12},n=sizeof(a)/sizeof(int);
	vector<int> b(a,a+n);
//	int *p=lower_bound(a,a+n,k); cout<<"\nVi tri tim thay "<<p-a;
//	int *q=upper_bound(a,a+n,k); cout<<"\nVi tri tim thay "<<q-a;
	vector<int>::iterator it=lower_bound(b.begin(),b.end(),k);
	cout<<*it;
}


