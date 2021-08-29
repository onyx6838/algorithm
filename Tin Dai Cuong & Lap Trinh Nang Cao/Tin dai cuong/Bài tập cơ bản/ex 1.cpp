#include<stdio.h>
main (){
	float s,x;
	int i,n;
	printf("n= ");scanf("%d",&n);
	printf("x= ");scanf("%f",&x);
	s=2005;
	for(i=1;i<=n;i++)
		s=s+((x+2*n+1)/(2*n+7));
	printf("s=%f",s);
}


