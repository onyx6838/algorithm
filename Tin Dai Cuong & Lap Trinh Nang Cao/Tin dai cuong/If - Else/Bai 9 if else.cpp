#include<stdio.h>
main (){
	int h,t;
	scanf("%d",&t);
	if (t<=100)
		h=0.05*t;
	else if (t<=300)
		h=0.1*t;
	else if (t>300)
		h=0.2*t;
	printf("tong hoa hong dc nhan %d", h);			
}


