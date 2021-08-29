// Luy thua voi so fibonacci
// O(logn)
// Thuat toan tinh F(n) co do phuc tap O(logn)
#include<bits/stdc++.h>
using namespace std;
void LuyThuaMaTran(int n, long &a, long &b)
{
	if(n==1)	{a=b=1;return;}
	long x,y;
	LuyThuaMaTran(n/2,x,y);
	if(n%2==0)
	{
		a = x*x + y*y;
		b = 2*x*y - y*y;
	}
	else
	{
		a = x*x + 2*x*y;
		b = x*x + y*y;
	}
}
pair<long, long> MyPow(int n)
{
	if(n==1)	return {1,1};
	pair<long,long> t = MyPow(n/2);
	if(n%2==0)	return {t.first*t.first + t.second*t.second,2*t.first*t.second - t.second*t.second};
	return {t.first*t.first + 2*t.first*t.second,t.first*t.first + t.second*t.second};
}
// su dung pair cho cap a b
int main()
{
	int n;
	long u,v;
	printf("Nhap so nguyen duong n = ");scanf("%d",&n);
	//LuyThuaMaTran(n,u,v);
	pair<long,long> t = MyPow(n);
//	printf("F[%d] = %ld\n",n,v);
	printf("F[%d] = %ld\n",n,t.second);
}

