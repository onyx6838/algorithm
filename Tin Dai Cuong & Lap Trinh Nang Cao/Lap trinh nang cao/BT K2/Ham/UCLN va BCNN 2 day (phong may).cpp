/*
- viet ham tim UCLN cua 2 so nguyen
- viet ham tim BCNN cua 2 so nguyen
- ham main nhap vao 2 day so so sanh UCLN va BCNN cua 2 day do*/
#include<bits/stdc++.h>
using namespace std;
typedef long day[100];
long uc2(long a,long b)
{
	while(b)
	{
		long r=a%b;
		a=b;
		b=r;
	}
	return a>0?a:-a;
}
long bc2(long a,long b)
{
	if(a==0 || b==0)	return 0;
	long t=a*b/uc2(a,b);
	return t>0?t:-t;
}
void nhap(int *n,day *a)					// Ham nay lam thay doi gia tri a va n
{
	scanf("%d",n);
	for(int i=1;i<=*n;i++)
	{
	printf("a[%d]= ",i);
	scanf("%ld",&(*a)[i]);	
	}
}
long ucday(int n,day a)
{
	long d=0;
	for(int i=1;i<=n;i++)	d=uc2(d,a[i]);
	return	d;
}
long bcday(int n,day a)
{
	long d=a[1];
	for(int i=1;i<=n;i++)	d=bc2(d,a[i]);
}
int main ()
{
	int n,m;
	day a,b;
	nhap(&n,&a);
	nhap(&m,&b);
	printf("\nUCLN day a = %d",ucday(n,a));
	printf("\nBCNN day a = %d",bcday(n,a));
	printf("\nUCLN day b = %d",ucday(m,b));
	printf("\nBCNN day b = %d",bcday(m,b));
}


