// Doc MT tu file mt.txt xuat MT ra man hinh va in ra ma tran chuyen vi vao "mtcv.txt"
#include<bits/stdc++.h>
#define FOR(i,m)	for(int i=1;i<=m;i++)
#define FOR(j,n)	for(int j=1;j<=n;j++)
using namespace std;
int main ()
{
	FILE *fi=fopen("mt.txt","r");
	FILE *fo=fopen("mtcv.txt","w");
	int a[100][100],m,n;
	if(!fi || !fo)	printf("Error");
	else
	{
		fscanf(fi,"%d%d",&m,&n);
		FOR(i,m)
			FOR(j,n)
				fscanf(fi,"%d",&a[i][j]);
		printf("MT\n");
// In ra MT		
		FOR(i,m)
		{
			FOR(j,n)
			
				printf("%5d",a[i][j]);
				printf("\n");
		}
// MT chuyen vi
		FOR(j,n)
		{
			FOR(i,m)
			
				fprintf(fo,"%5d",a[i][j]);
				fprintf(fo,"\n");
		}
	}
	fclose(fi);
	fclose(fo);		
}


