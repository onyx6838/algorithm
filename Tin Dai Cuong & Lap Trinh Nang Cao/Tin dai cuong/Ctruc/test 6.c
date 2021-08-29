#include<stdio.h>
#include<string.h>
	typedef struct{
		char ten[30];
		char tacdung[10];
		int nam,soluong;
	}THUOC;
main (){
	THUOC T[100];
	int n,i,j; 
	scanf("%d",&n);
		for (i=1;i<=n;i++)
			{
				printf("Ten thuoc %d: ",i);
				fflush(stdin);
				gets(T[i].ten);
				printf("Tac dung: ");
				fflush(stdin);
				gets(T[i].tacdung);
				printf("HSD: ");
				scanf("%d",&T[i].nam);
				printf("So luong: ");
				scanf("%d",&T[i].soluong);
			}
		/*for (i=1;i<=n;i++)
			{
				if (T[i].nam < 2018)
					printf("\nThuoc %d het han",i);
				else
					printf("\nThuoc %d con HSD",i);
			}*/
/*t1=t2=t3=0;		
			for(i=1;i<=n;i++)
			{
				if(T[i].tacdung == 'A')
					t1=t1+T[i].soluong;
				if(T[i].tacdung == 'B')
					t2=t2+T[i].soluong;
				if(T[i].tacdung == 'C')	
					t3=t3+T[i].soluong;
			}
printf("So luong CD: \nA = %d\nB = %d\nC = %d",t1,t2,t3);*/
		for(i=1;i<=n;i++)
			for(j=i+1;j<=n;j++)
				if(strcmp(T[i].ten,T[j].ten)>0)
					{
						THUOC z;
						z=T[i];
						T[j]=T[i];
						T[j]=z;
					}
	for(i=1;i<=n;i++)
		printf("%s",T[i].ten);				
}	

