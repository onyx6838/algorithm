// day~ diem? (diem.txt) sap xep tung do tang dan (luu vao "tung.txt) sap xep hoanh do tang do tang dan ("hoanh.txt")
#include<bits/stdc++.h>
using namespace std;
int main ()
{
	FILE *fi=fopen("diem.txt","r");
	FILE *f1=fopen("tung.txt","w");
	FILE *f2=fopen("hoanh.txt","w");
	float x[20],y[20];
	int n;
	if(!fi || !f1 || !f2)	printf("Error");
	else
	{
		fscanf(fi,"%d",&n);
		for(int i=1;i<=n;i++)
			fscanf(fi,"%f%f",&x[i],&y[i]);
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				{
					if(x[i]>x[j])	swap(x[i],x[j]);
					if(y[i]>y[j])	swap(y[i],y[j]);
				}
		for(int i=1;i<=n;i++)
			{
				fprintf(f1,"%8.1f",x[i]);
				fprintf(f2,"%8.1f",y[i]);
			}				
	}
	fclose(fi);
	fclose(f1);
	fclose(f2);
}


