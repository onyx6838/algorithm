#include<stdio.h>
main (){
	int a[30][30];
	int i,j,m,n;
	printf("m=");scanf("%d",&m);
	printf("n=");scanf("%d",&n);
		for(i=1;i<=m;i++)
			for(j=1;j<=n;j++)
				{
				printf("a[%d][%d]",i,j);
				scanf("%d",&a[i][j]);
				}
		for(i=1;i<=m;i++)
			{
				for(j=1;j<=n;j++)	
					printf("%d   ",a[i][j]);
					printf("\n");
			}
}



