#include<bits/stdc++.h>
using namespace std;
typedef struct SinhVien
{
	char Ma[30];
	char Ten[30];
	char NgaySinh[30];
	char QueQuan[30];
	float Toan;
	float Ly;
	float Hoa;
	float TB;
} SV;
void nhap(SV a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Ma %d: ",i);
		fflush(stdin);
		gets(a[i].Ma);
		
		printf("Ten %d: ",i);
		fflush(stdin);
		gets(a[i].Ten);
		
		printf("Ngay Sinh %d: ",i);
		fflush(stdin);
		gets(a[i].NgaySinh);
		
		printf("Que Quan %d: ",i);
		fflush(stdin);
		gets(a[i].QueQuan);
		
		printf("\nToan: ");
		scanf("%f",&a[i].Toan);
		
		printf("\nLy: ");
		scanf("%f",&a[i].Ly);
		
		printf("\nHoa: ");
		scanf("%f",&a[i].Hoa);
		
		printf("\nTB: ");
		scanf("%f",&a[i].TB);
	}
}
void xuat(SV a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%-5s%-5s%-5s%-5s%5.1f%5.1f%5.1f%5.1f",a[i].Ma,a[i].Ten,a[i].NgaySinh,a[i].QueQuan,a[i].Toan,a[i].Ly,a[i].Hoa,a[i].TB);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	SV a[n];
	nhap(a,n);
	xuat(a,n);
	
	char ma[30];	
	printf("Nhap ma can tim\n");
	fflush(stdin);
	gets(ma);
	SV t;
	bool timthay = false;
	for(int i=0;i<n;i++)
	{
		if(strcmpi(a[i].Ma,ma)==0)
		{
			t = a[i];
			timthay = true;
		}
	}
	
	if(timthay == true)
	{
		printf("%-5s%-5s%-5s%-5s%5.1f%5.1f%5.1f%5.1f",t.Ma,t.Ten,t.NgaySinh,t.QueQuan,t.Toan,t.Ly,t.Hoa,t.TB);
	}
	else
	{
		printf("khong tim thay");
	}
	
	
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(a[i].TB > 7.0)	count++;
	}
	if(count==0)	printf("Khong co svien nao diem tren 7.0");
	else
	{
		for(int i=0;i<n;i++)
		{
			if(a[i].TB > 7.0)	printf("%-5s%-5s%-5s%-5s%5.1f%5.1f%5.1f%5.1f",a[i].Ma,a[i].Ten,a[i].NgaySinh,a[i].QueQuan,a[i].Toan,a[i].Ly,a[i].Hoa,a[i].TB);
		}	
	}
}
