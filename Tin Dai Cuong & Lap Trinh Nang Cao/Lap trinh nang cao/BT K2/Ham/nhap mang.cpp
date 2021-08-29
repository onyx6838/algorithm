#include<stdio.h>
#include<math.h>
void nhap()
	{
		int a[50][50],i,j,m,n;
		scanf("%d",&m);
		scanf("%d",&n);
		for(i=1;i<=m;i++)
			for(j=1;j<=n;j++)
			{
				printf("a[%d][%d] = ",i,j);
				scanf("%d",&a[i][j]);
			}
		for(i=1;i<=m;i++)
			{
				for(j=1;j<=n;j++)
				printf("%d",a[i][j]);	
				printf("\n");	
			}	
	}
main (){
	nhap();
}


