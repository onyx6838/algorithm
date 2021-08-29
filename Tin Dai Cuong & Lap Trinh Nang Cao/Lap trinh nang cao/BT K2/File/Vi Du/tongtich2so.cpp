// nhap 2 so tu "haiso.txt" va tinh tong, tich luu vao "tongtich.txt"
#include<bits/stdc++.h>
using namespace std;
int main ()
{
	FILE *fin=fopen("D:\\DEV - C\\BT K2\\File\\haiso.txt","rt");		/*mo file nhanh hon*/
	FILE *fout=fopen("D:\\DEV - C\\BT K2\\File\\tongtich.txt","wt");
	//fin=fopen("D:\\DEV - C\\BT K2\\File\\haiso.txt","rt");			Mo file kieu chi tiet
	//fout=fopen("D:\\DEV - C\\BT K2\\File\\tongtich.txt","wt");
	int a,b;
	if(!fin)	printf("Error");
	else
	{
		fscanf(fin,"%d%d",&a,&b);
		fprintf(fout,"Tong 2 so = %d",a+b);
		fprintf(fout,"\nTich 2 so = %d",a*b);
	}
	fclose(fin);
	fclose(fout);
}


