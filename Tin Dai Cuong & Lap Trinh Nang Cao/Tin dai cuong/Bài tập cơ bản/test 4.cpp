#include<stdio.h>
#include<math.h>
main (){
	int n,i,k;
	float x[100],y[100],min;
	printf("n= ");scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("x[%d]= ",i);scanf("%f",&x[i]);
		printf("y[%d]= ",i);scanf("%f",&y[i]);
	}
	printf("\nDay cac diem");
	for(i=1;i<=n;i++)
		printf("\nD%d (%.1f,%.1f)",i,x[i],y[i]);
	min=sqrt(pow(x[1],2)+pow(y[1],2));
	k=n;
	for(i=1;i<=n;i++)
		if(sqrt(pow(x[i],2)+pow(y[i],2))<min)
			{
			min=sqrt(pow(x[i],2)+pow(y[i],2));
			i=k;
			}
	printf("\nDo dai gan goc toa do nhat = %f",min);
	printf("\ndiem %d gan goc toa do nhat",k);	
}


