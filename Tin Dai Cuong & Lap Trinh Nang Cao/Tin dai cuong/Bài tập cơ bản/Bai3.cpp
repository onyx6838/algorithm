#include<stdio.h>
#include<math.h>
int main (){
	float x=3.1 , y=2.2 , z=4.3 , p,s;
	p= (x+y+z)/2;
	s= sqrt(p*(p-x)*(p-y)*(p-z));
	printf ("\ndien tich tam giac = %f",s);
	}
	

