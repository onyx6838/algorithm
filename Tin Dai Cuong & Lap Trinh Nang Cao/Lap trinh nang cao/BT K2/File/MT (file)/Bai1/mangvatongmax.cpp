//BT: Nhap mang? vao` data.txt va` tinh tong , max
#include<bits/stdc++.h>
#define FOR(i,n)	for(int i=1;i<=n;i++)
using namespace std;
int main ()
{
	FILE *fi=fopen("data.txt","r");
	FILE *fo=fopen("MT.txt","w");
	int a[20],s=0,n;
	if(!fi || !fo)	printf("Error");
	else
	{
	fscanf(fi,"%d",&n);
	FOR(i,n)
		fscanf(fi,"%5d",&a[i]);
	FOR(i,n)
		fprintf(fo,"%5d",a[i]);	
	
	}
	fclose(fi);
	fclose(fo);
}
