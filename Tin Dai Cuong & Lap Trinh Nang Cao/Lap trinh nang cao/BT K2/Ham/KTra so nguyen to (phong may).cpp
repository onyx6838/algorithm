/*
- viet ham ktra so nguyen to
- ham main nhap vao 2 so a,b in ra tat ca so nguyen to trong khoang [a,b] va dem xem co bn so nguyen to*/
#include<bits/stdc++.h>
using namespace std;
long ktnt(int n)
{
	if(n<2) return 0;
	for(int i=2;i*i<=n;i++)	if(n%i==0) 	return 0;
	return 1;	
}
int main ()
{
	long a,b;
	int d=0;
	scanf("%ld%ld",&a,&b);
	for(int i=a;i<=b;i++)
	if(ktnt(i))
	{
		printf("%5d",i);
		d++;
	}
	printf("\n%d so nguyen to trong doan [%d,%d]",d,a,b);
}


