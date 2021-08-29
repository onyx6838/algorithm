#include<stdio.h>
main (){
	int x[10],i,n;
	    for (i=0;i<10;i++)
		{ 	printf("x[%d]",i);
			scanf("%d",&x[i]);
		}
	scanf("%d",&n);
		for (i=0;i<10;i++)
			{ if (x[i]==n)
				printf("thuoc day so nguyen");
			 else ("khong thoa man");	
				}	
}


