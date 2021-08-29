#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={4,7,2,8,1,6,9,3,5},n=sizeof(a)/sizeof(int);
	vector<int> b(a,a+n);
	//sort(a,a+n,greater<int>());
	sort(b.begin(),b.end(),[](int a,int b){return (a-b)%2?a%2<b%2:a<b;});
	for(auto x:b) cout<<x<<" ";

}


