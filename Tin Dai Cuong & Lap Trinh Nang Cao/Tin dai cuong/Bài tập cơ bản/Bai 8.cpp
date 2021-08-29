#include<stdio.h>
int main (){
	char T[100];
	int c,m,g,x,y;
	printf("%s",T);
	fflush(stdin);
	gets(T);
	scanf("%d",&c);
	scanf("%d",&m);
	scanf("%d",&g);
	x = m-c;
	y = (m-c)*g;
	printf("dien tieu thu la %d \ntien phai tra la %d", x,y);
	}


