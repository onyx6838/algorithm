#include<stdio.h>
main (){
	int i,x[10],max=x[0];
			for (i=0;i<5;i++)
			{ 
				printf ("x[%d]= ",i);
				scanf("%d",&x[i]);  }
		for (i=1;i<5;i++)
			{ 
				if (x[i] > max)
				max=x[i];         }
			printf("gia tri max la %d",max);
}



