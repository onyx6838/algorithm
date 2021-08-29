#include<stdio.h>
#include<string.h>
typedef struct Thuoc{
	char ten[30];
	int HSD;
	int soluong;
	int c;
}T;
main(){
	T T[100];
	int i,n,s1,s2,s3;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		{
			printf("Loai thuoc %d: ",i);
			fflush(stdin);gets(T[i].ten);
			printf("\ncong dung: ");
			scanf("%d",&T[i].c);
			printf("\nHSD: ");
			scanf("%d",&T[i].HSD);
			printf("\nSo luong: ");
			scanf("%d",&T[i].soluong);
    	}
    for (i=1;i<=n;i++)
		{
			if(T[i].HSD <= 2022)
				printf("\nThuoc %d het han",i);
			else printf("\nThuoc %d con HSD",i);	
		}
s1=s2=s3=0;
	for(i=1;i<=n;i++)
		{	
			if (T[i].c == 1)
					s1= s1 +T[i].soluong;
			else if (T[i].c == 2)
					s2= s2 +T[i].soluong;
			else if (T[i].c == 3)
					s3= s3 +T[i].soluong;
		}
printf("\nso luong thuoc CD3 = %d",s3);
printf("\nso luong thuoc CD1 = %d",s1);	
printf("\nso luong thuoc CD2 = %d",s2);
}
