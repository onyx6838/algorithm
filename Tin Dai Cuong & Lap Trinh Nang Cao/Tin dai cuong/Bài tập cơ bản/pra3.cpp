// SVien, ktra ten va in ra
/*#include<stdio.h>
#include<string.h>
typedef struct{
	char ht[30];
	float toan,ly,hoa;
}SV;
main (){
	SV s[100];
	int i,n;
	char g[40];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Ho ten: ");
		fflush(stdin);gets(s[i].ht);
		printf("Toan= ");scanf("%f",&s[i].toan);
		printf("Ly= ");scanf("%f",&s[i].ly);
		printf("Hoa= ");scanf("%f",&s[i].hoa);
	}
	printf("Dsach\n");
	printf("Ho ten			Diem");
	for(i=1;i<=n;i++)
		printf("\n%s		toan= %.1f	ly=%.1f hoa=%.1f",s[i].ht,s[i].toan,s[i].ly,s[i].hoa);	
	printf("\nNhap : ");fflush(stdin);gets(g);
	for(i=1;i<=n;i++)
		if(strcmp(s[i].ht,g)==0)
			{
			printf("\n%s		toan= %.1f	ly=%.1f hoa=%.1f",s[i].ht,s[i].toan,s[i].ly,s[i].hoa);	
			break;
			}
		if(i==n+1)
			printf("k co ");			
}*/
// Cau thu kiem tra tien thuong
/*#include<stdio.h>
#include<string.h>
typedef struct Cauthu{
	char HT[30];
	int SBT;		
	int SP;			
	int t;			
}CT;
main(){
	CT c[100];
	int i,n;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		{
			printf("Ten CT %d: ",i);
			fflush(stdin);gets(c[i].HT);
			printf("\nSBT: ");
			scanf("%d",&c[i].SBT);
			printf("\nSo phut thi dau: ");
			scanf("%d",&c[i].SP);
    	}
    printf("Dsach");
    printf("\nTen		SBT		Phut");
	for(i=1;i<=n;i++)
		printf("\n%s		%d		%d",c[i].HT,c[i].SBT,c[i].SP);
			
}*/
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


