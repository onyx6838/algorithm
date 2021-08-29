//Ktra so nguyen to
#include<bits/stdc++.h>
using namespace std;
// Dem dung' 2 uoc duong
bool ktnt(long long n)	//9.95s
{
	int d=0;
	for(long long i=1;i<=n;i++)	d+= n%i == 0;	// chia het thi d++
	return d==2;
	// 2 uoc: 1 va chinh no
}
bool isprime(long long n)	//0.02548s
{
	if(n==2 || n==3)	return 1;	// loai bo cac TH
	if(n<2 || n%2==0 || n%3==0)	return 0;
	// n con lai khong chia het cho 2 hoac 3 (so duong)
	// n co dang 6k+1 hoac 6k+5
	for(long long i=5;i*i<=n;i+=6)	// 5 7, 11 13, 17 19, 23 25, 29 31, 35 37 
	// xet tren 6k+1 va 6k+5
	if(n%i==0 || n%(i+2)==0)	return 0;
	return 1;
}
int main()
{
	long long n=1e9+7;
//	if(ktnt(n))	cout<<"so nguyen to";
	if(isprime(n))	cout<<"so nguyen to";
	else cout<<"khong nguyen to";
	
	// Dem so so nguyen to [0,n]
	int n;
	cin>>n;
	int d=0;
	for(int i=2;i<=n;i++)	d+=isprime(i);	// O(n*sqrt(n)) = O(n^3/2)
	cout<<"So cac so nt "<<d;
}
