#include<stdio.h>
#include<string.h>
typedef struct sinhvien{
	char hoten[30];
	float toan,van,t;
}S;
main (){
	S SV[100];
	int n,i,j;
	float max,min;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			printf("Ho ten SV%d: ",i);
			fflush(stdin);gets(SV[i].hoten);
			printf("\nDiem toan = ");
			scanf("%f",&SV[i].toan);
			printf("\nDiem van = ");
			scanf("%f",&SV[i].van);
			SV[i].t=SV[i].toan+SV[i].van;
		}
	max=SV[1].toan;
	min=SV[1].van;
	int k=1;
	int u=1;
	for(i=1;i<=n;i++)
		if(SV[i].toan > max)
			{
			max=SV[i].toan;
			k=i;
			}
	printf("\nSV%d toan max %s = %f",k,SV[k].hoten,max);
	for(i=1;i<=n;i++)
			if(SV[i].van < min)
				{
				min=SV[i].van;
				u=i;
				}
	printf("\nSV%d co diem van la %s = %f",u,SV[u].hoten,min);
	for(i=1;i<=n;i++)
		for(j=i+1;j<=n;j++)
			if(SV[i].t > SV[j].t)
				{
					S z;
					z=SV[i];
					SV[i]=SV[j];
					SV[j]=z;
				}
	for(i=1;i<=3;i++)
		printf("\n%s		%f",SV[i].hoten,SV[i].t);	
				
}



