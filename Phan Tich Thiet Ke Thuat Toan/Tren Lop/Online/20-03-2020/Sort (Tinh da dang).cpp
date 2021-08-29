// Da dang: moi bai toan co nhieu cach giai -> tim cach tot nhat
// Vi du bai toan sap xep
// Cho 1 xau ki tu chi gom nhung ki tu thuong Tieng Anh -> sap xep tang dan
#include<bits/stdc++.h>
using namespace std;
void sort(char *x) // hai vong lap sap xep doi cho	(exchange sort)
{
	// Do phuc tap hai vong lap sap xep doi cho co do phuc tap O(n^2)
	for(char *p=x; *p; p++)	// p tro chu dau tien (vi tri x)
	for(char *q=p+1; *q; q++)	// sau +1 so sanh se swap
	if(*p > *q)	swap(*p,*q);
}
void counting_sort(char *x)	// sap xep dem co do phuc tap O(n) voi n - do dai xau
{
	// dem trong x co bao nhieu ki tu 'a' , 'b' , .. , 'z'
	int d[300] = {};
	for(char *p=x; *p; p++)		d[*p]++;	//dem tan suat	(gap chu nap ++) , co the d['l']=2, cac ki tu # =1 , con lai =0
	char *q=x;
	for(int i='a';i<='z';i++)	// duyet chu rieng biet
	for(int j=1;j<=d[i];j++)	*q++=i;	// q se tu liet ke chu cai cua 1 chu rieng biet
}
int main()
{
	char x[1000];
	cout<<"Nhap xau x = ";cin>>x;
	counting_sort(x);
	cout<<"\nSau khi sap : "<<x;
}
