/*
- Viet ham tinh tong cac chu so cua 1 so
- Viet ham main nhap vao 1 day tinh tong tat ca cac chu so cua cac so*/
#include<bits/stdc++.h>
using namespace std;
int tongchuso(int n)
{
	int s=0;						//	int s=0;		
	while(n)						//	for(s;n;n/=10)	s+=n%10; 	rut gon			
	{
		s+=n%10;
		n/=10;
	}
	return s;
}
int main ()
{
	int n,a[100];
	printf("n=");scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	int t=0;
	for(int i=1;i<=n;i++)	t+=tongchuso(a[i]);
	printf("tong chu so toan day %d",t);
}


