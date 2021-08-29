// nhap ngay thang tim ngay tiep theo
#include<bits/stdc++.h>
using namespace std;
int Nhuan(int y)
{
	return y%400==0 || (y%4==0 && y%100==0);
}
int main ()
{
	int d,m,y,d1,m1,y1;
	int t[]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("d/m/y\n");
	scanf("%d/%d/%d",&d,&m,&y);
	if(Nhuan(y))	
		{
		t[1]++;
		if(d==t[1])	d1=1,m1=m+1,y1=y;
		if(d!=t[m] && m<13)	 d1=d+1,m1=m,y1=y;
		if(d==t[m] && m==12)	d1=m1=1,y1=y+1;	
		if(d==t[m] && m<12)	d1=1,m1=m+1,y1=y;
		}
	else
	{
	if(d!=t[m] && m<13)	 d1=d+1,m1=m,y1=y;
	if(d==t[m] && m==12)	d1=m1=1,y1=y+1;	
	if(d==t[m] && m<12)	d1=1,m1=m+1,y1=y;
	}
	printf("Ngay tiep theo: %d/%d/%d",d1,m1,y1);	
}
