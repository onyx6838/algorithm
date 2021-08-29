#include<bits/stdc++.h>
using namespace std;
//void Eratosthenes(int n){
//	bool s[n+5];
//	//for(int i=2; i<=n; s[i++]=1);	// ddanh dau 1 full mang la true
//	fill(s,s+n+1,true);	// danh dau true dung fill
//	for(int i=2; i<=n; i++)			
//	if(s[i]){
//		cout<<i<<"\t";
//		for(int j=i*i;j<=n;j+=i)	s[j]=0;
//	}
//}


// co the de luc dau la false
//bool s[100005]={1,1};// khoi gan tu 2 den n+4 toan 0 (hai so dau tien la 2,3 la 1)
// 10^5 = 100005

//void Eratosthenes(int n){		
//	for(int i=2; i<=n; i++)			
//	if(s[i]==0){
//		//cout<<i<<"\t";
//		for(int j=i*i;j<=n;j+=i)	s[j]=1;
//	} // dung thi cho true
//}


// 10^6 = 1000005 thi co truong hop am thi dung kieu long
bool s[1000005]={1,1};
void Eratosthenes(long long n){		
	for(long long  i=2; i<=n; i++)			// tiep tuc tang dan de sang`	
	if(s[i]==0){
		//cout<<i<<"\t";
		for(long long j=i*i;j<=n;j+=i)	s[j]=1;	 // xet voi T/hop 2  ta loai bo cac boi^ cua 2 va danh dau	
	} // dung thi cho true
}
int main()
{
	Eratosthenes(1000000);	//in ra cac so nguyen to < 1000
	int n;
	do{
		cout<<"\nNhap n = ";cin>>n;
		cout<<(s[n]?" khong nguyen to":" nguyen to");
	}while(n);
}
// phai loc theo tuan tu
