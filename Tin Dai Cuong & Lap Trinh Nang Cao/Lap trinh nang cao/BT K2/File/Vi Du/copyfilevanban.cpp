// Copy van ban copyfilevanban.cpp -> dich.txt
#include<bits/stdc++.h>
using namespace std;
int main ()
{
	char ten1[30],ten2[30];
	FILE *f1,*f2;
	printf("Ten file nguon ");
	fflush(stdin);gets(ten1);
	printf("Ten file dich ");
	fflush(stdin);gets(ten2);
	f1=fopen(ten1,"r");
	f2=fopen(ten2,"w");
	if (!f1 || !f2) printf("Error");
	char t[1000];
	while(fgets(t,1000,f1))	fprintf(f2,"%s",t);    // gets code nhanh hon cho xau 
/*	while(feof(f1))
	{
		fscanf(f1,"[^\n]",t);
		fprintf(f2,"%s\n",t);				Xu li cho van ban dai` nhu xau vi` co xuong' dong (\n)
		fscanf(f1,"%[^\n]",t);				Neu la so, day~ so thi` chi? ca`n 1 dong` va` %d
	}*/
	fclose(f1);
	fclose(f2);
}


