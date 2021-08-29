#include<stdio.h>
#include<math.h>
main (){
	int a,s;
	do
	{
		printf("s= ");
		scanf("%d",&s);
	}
	while (s<=0);
	printf("Cac truong hop a vs b");
	for (a=1;a<sqrt(s);a++)
		{
		if(s%a==0)
			printf("\na=%d\nb=%d",a,(s/a));
		}
}


