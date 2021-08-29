//chuan ten
#include<bits/stdc++.h>
using namespace std;

int main()
{
	char x[1000], *p=x; // di lan luot tung ki tu
	printf("Nhap x = "); scanf("%[^\n]",x);
	Dau:
		if(*p=='\0')	return 0;	// ktu kthuc xau thi dung
		if(*p==' ')	{p++; goto Dau;} // ki tu ' ' sang ki tu tiep theo va quay lai Dau
		printf("%c",toupper(*p++));goto Than;//# 2 th tren thi viet hoa va sang than tu` dang xet
	Than:
		if(*p=='\0')	return 0;	// ktu kthuc xau thi dung
		if(*p==' ')	{printf("%c",*p++);goto Dau;}
		printf("%c",tolower(*p++));goto Than;// # 2 th tren thi in ra va quay lai xet tiep Than
}

