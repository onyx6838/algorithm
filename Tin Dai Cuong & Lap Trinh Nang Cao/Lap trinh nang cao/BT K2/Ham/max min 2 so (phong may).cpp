/*
- viet ham tim GTLN cua 2 so thuc
- viet ham tim GTNN cua 2 so thuc
*/
#include<bits/stdc++.h>
using namespace std;
float max2(float a,float b)		{return a>b?a:b;}
float min2(float a,float b)		{return a<b?a:b;}
int main ()
{
	int n;
	float a[100];
	printf("n=");scanf("%d",&n);
	for(int i=1;i<=n;i++)	scanf("%f",&a[i]);
	float MAX=a[1],MIN=a[1];
	for(int i=1;i<=n;i++)
	{
		MAX=max2(a[1],a[i]);
		MIN=min2(a[1],a[i]);
	}
	printf("MAX= %f\nMIN= %f",MAX,MIN);
}


