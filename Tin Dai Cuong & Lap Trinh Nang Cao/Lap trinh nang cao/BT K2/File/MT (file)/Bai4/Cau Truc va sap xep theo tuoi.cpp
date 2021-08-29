//Doc du dieu tu sv.txt luu vao mang cau truc SV sap xep tuoi tang dan vao svtuoi.txt
#include<bits/stdc++.h>
using namespace std;
typedef struct sinhvien
{
	char ten[30];
	int tuoi;
	float diem;	
}SV;
void nhap(int *n,SV *a,FILE *f=stdin)
{
	fscanf(f,"%d\n",n);
	for(int i=1;i<=*n;i++)
	{
		fscanf(f,"%[^0-9]s",a[i].ten);
		fscanf(f,"%d%f\n",&a[i].tuoi,&a[i].diem);
	}
}
void xuat(int n,SV *a,FILE *f=stdout)
{
	for(int i=1;i<=n;i++)
		fprintf(f,"%s%d%8.2f\n",a[i].ten,a[i].tuoi,a[i].diem);
}
void SX(int n,SV *a,bool SS(SV,SV))
{
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++)
				if(SS(a[j],a[i]))	swap(a[i],a[j]);		
}
bool SStuoi(SV u,SV v)	{return u.tuoi<v.tuoi;}
int main ()
{
	int n;
	SV S[100];
	FILE *fi=fopen("sv.txt","r");
	FILE *fo=fopen("svtuoi.txt","w");
	nhap(&n,S,fi);
	printf("Dsach\n");
	xuat(n,S);
	SX(n,S,SStuoi);
	xuat(n,S,fo);
}

