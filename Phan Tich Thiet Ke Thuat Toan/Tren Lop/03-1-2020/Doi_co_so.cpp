#include"bits/stdc++.h"
#include<stack>
using namespace std;
char Hex[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// Dung cac ki tu de chuyen sang he co chu cai (16)
int main()
{
	stack<char> S;
	int n;
	cout<<"Nhap n = ";cin>>n;
	int k;
	cout<<"\nNhap co so k = ";cin>>k;
	while(n)
	{
		S.push(Hex[n%k]);	// push vao theo kqua cua phep chia n%k
		n/=k;	// lay dan` ra cac so con lai
	}
	//Push cac vi tri danh dau la so ( ki tu%Hex[i])
	//A: 10
	//.......
	//Z: 16
	// Dung cho he 2 ,8, 10
//	while(n)
//	{
//		S.push(n%2);
//		n/=2;
//	}
	cout<<"\nSau khi doi co so: ";
	while(!S.empty())
	{
		cout<<S.top(); // xem gtri
		S.pop();
	}
	
	printf("\nSo sanh %X",3567);
	//%X de hien thi so co so 16
}
