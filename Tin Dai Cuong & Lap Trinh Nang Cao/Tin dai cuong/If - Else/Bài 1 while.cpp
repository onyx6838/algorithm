#include<stdio.h>
main (){
	int a,b,i;
	scanf("%d%d",&a,&b);
	int max=a>b?a:b;
	int min=a<b?a:b;
	i=min;
	while (i>=1)
		{ 
			if (max % i ==0 && min %i==0)
		{
				printf ("UCLN cua a va b la",i); 
				break;}
		}
		
		
}


