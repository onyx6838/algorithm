//Dem con duong ve khong
#include<bits/stdc++.h>
using namespace std;
map<int,int> D;
int zero(int n,int k=0)
{
	if(n==0)	return D[n]=1;
	if(D.find(n)!=D.end())	return D[n];
	int d=0;
	for(int a=1;a*a<=n;a++)	if(n%a==0)	d+=zero((a-1)*(n/a+1));
	return D[n]=d;
}
int main()
{
	cout<<zero(12000);
}

