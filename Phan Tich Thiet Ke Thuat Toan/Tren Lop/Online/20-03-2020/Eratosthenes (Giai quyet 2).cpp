#include<bits/stdc++.h>
using namespace std;
bool s[1000005]={1,1};
void Eratosthenes(long long n){		
	for(long long  i=2; i<=n; i++)			
	if(s[i]==0){
		//cout<<i<<"\t";
		for(long long j=i*i;j<=n;j+=i)	s[j]=1;
	} // dung thi cho true
}
int main()
{
	Eratosthenes(1000000);	// in cac so nguyen to 
	vector<int> P;
	for(int i=1;i<=1e6;i++)	if(s[i]==0)	P.push_back(i);
	long long n;
	do
	{
		cout<<"\nNhap n = ";cin>>n;
		cout<<(s[n]?"khong nguyen to":"nguyen to");
	}while(n);
}

