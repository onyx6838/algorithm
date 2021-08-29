/*
- viet ham tinh n giai thua
- viet ham tinh to hop chap k cua n dua vao ham giai thua
- ham main nhap vao day so nguyen tong cac to hop chap 5 cua cac a[i] biet rang cac a[i] nhap vao trong
khoang [5,15]*/
#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL gt(int n)
{
	LL s=1;
	while(n)	s*=n--;
	return s;
}
LL c(int k,int n)
{
	return gt(n)/gt(k)/gt(n-k);
}
int main ()
{
	int a[100],n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)	scanf("%d",&a[i]);
	LL t=0;
	for(int i=1;i<=n;i++)	t+=c(5,a[i]);
	printf("Tong can tim %lld",t);
}


