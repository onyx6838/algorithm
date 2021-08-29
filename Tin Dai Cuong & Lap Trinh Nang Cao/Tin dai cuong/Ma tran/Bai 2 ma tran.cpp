#include<stdio.h>
main (){
	int a[10][10],i,j,m,n,tle,minj,kt,demchan,chia5,demhang,tong;
	scanf("%d",&m);
	scanf("%d",&n);
		for (i=1;i<=m;i++)
			for (j=1;j<=n;j++)
				{printf ("a[%d][%d]",i,j);
				scanf("%d",&a[i][j]);
				}
	printf("MT\n");	
		for (i=1;i<=m;i++)
		{	for (j=1;j<=n;j++)	
			printf(" %d",a[i][j]);
			printf("\n");}
	tle=0;		
		for (i=1;i<=m;i++)
			for (j=1;j<=n;j++)
			{ if(a[i][j] %2 !=0)
				tle = a[i][j] +tle;
				}				
	printf("Tong ptu le = %d",tle);	
	minj=a[1][1];
		for (j=1;j<=n;j++)
			{
			for (i=1;i<=m;i++)
				if (a[i][j]<minj)
				minj=a[i][j];}
				printf ("\nmin = %d",minj);
	kt=0;
			for (i=1;i<=m;i++)
				for (j=1;j<=n;j++)
					if(i<j && a[i][j]==0)
						 kt++;	
				if (kt == ((m*n)-n)/2)
					printf("\nMT TG duoi");
				else printf("\nkhong thoa man");
	demchan=0;
			for (i=1;i<=m;i++)
				for (j=1;j<=n;j++)
					if(a[i][j]%2==0)
						demchan++;
			printf("\n%d ptu chan",demchan);
	chia5=0;	
			for (i=1;i<=m;i++)
				for (j=1;j<=n;j++)
					if(a[i][j]%5==0)
						chia5++;
			printf("\n%d ptu chia het cho 5",chia5);
	tong=0;
	demhang=0;	
			for (i=1;i<=n;i++)
			{
						for (j=1;j<=n;j++)
						tong+=a[i][j];
						demhang++;
						printf("\ntong hang %d = %d",demhang,tong);    
		    }										
}


