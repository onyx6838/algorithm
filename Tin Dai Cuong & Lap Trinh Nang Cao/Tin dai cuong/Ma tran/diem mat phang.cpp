#include<stdio.h>
#include<math.h>
main (){
	int i,n,dem,dem1,k;
	float x[100],y[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("x[%d]",i);scanf("%f",&x[i]);
		printf("y[%d]",i);scanf("%f",&y[i]);
	}
	printf("-------\n");
	for(i=1;i<=n;i++)
	{
	printf("A[%d]= (%f,%f)",i,x[i],y[i]);
	printf("\n");
	}
	dem=dem1=0;
	for(i=1;i<=n;i++)
	{
		if(fabs(x[i])>fabs(y[i]))
			dem++;
		else
			dem1 ++;	
	}
	printf("nam tren pgiac goc phan tu III= %d\n",dem);
	printf("nam tren pgiac goc phan tu III= %d",dem1);
	k=0;
	for(i=1;i<=n;i++)
		if((pow(x[i],2)+pow(y[i],2))>0)
			k++;
printf("\nThuoc phan tu thu I =%d",k);
}


