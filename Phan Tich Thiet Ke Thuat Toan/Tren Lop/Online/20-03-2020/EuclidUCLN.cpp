#include<stdio.h>
#define input(n) printf("Nhap so %s : " , #n);	scanf("%u",&n);
int Euclid(int a,int b){
	while(b){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int main()
{
	int x,y;
	input(x);
	input(y);
	//Ham co san __gcd(x,y)
	printf("Uoc chung lon nhat la %d",Euclid(x,y));
}

