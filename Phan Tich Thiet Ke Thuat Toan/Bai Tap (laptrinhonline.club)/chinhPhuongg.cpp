#include<bits/stdc++.h>
using namespace std;
long long sol(long long n){
	long long sum = 0;
	for(int i=0;i<=n;i++)
	{
		if(
			(((long long)sqrt(i)) * ((long long)sqrt(i)) == i) && i%3==1
		){
			sum+=i;
		}
	}
	return sum;
}
int main()
{
	long long n;
	cin>>n;
	cout<<sol(n);
}

