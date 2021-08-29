#include<stdio.h>
main (){
	int s[10][10];
	int m,n,i,j,p=1,min,vtmin=0;
	printf ("m=");scanf("%d",&m);
	printf ("n=");scanf("%d",&n);
		for (i=1;i<=m;i++)
			for (j=1;j<=n;j++)
				{ printf ("s[%d][%d]",i,j);
					scanf ("%d",&s[i][j]);
				}
	printf("----\n");			
		for (i=1;i<=m;i++)
			{ for (j=1;j<=n;j++)
				printf("%d ",s[i][j]);
				printf("\n");}
		for (i=1;i<=m;i++)
			{ for (j=1;j<=n;j++)
				if (j%2==0)
				p*=s[i][j];}
	printf("p= %d",p);
	min=s[1][1];
		for (i=1;i<=m;i++)
			for (j=1;j<=n;j++)
				if (s[i][j]<min)
					min=s[i][j];
					 
	printf("\ngia tri = %d",min);
				
						
					
}


