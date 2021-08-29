#include<stdio.h>
#include<math.h>
#define pi 3.14
float dtich(float r)
{
	float s;
	s=pi * r*r;
	return s;
}
main (){
	printf("Dien tich htron co ban kinh 3 la %f",dtich(3));
}


