// Doc file songuyen.txt va tinh tong, hieu xuat ra file Kqua
#include<bits/stdc++.h>
using namespace std;
int main ()
{
	FILE *f=fopen("songuyen.txt","r");
	if(!f)	printf("Error");
	int s=0,a;
	while(fscanf(f,"%d",&a)!=EOF)	s+=a;
	printf("Tong day so %d",s);
	fclose(f);
}


