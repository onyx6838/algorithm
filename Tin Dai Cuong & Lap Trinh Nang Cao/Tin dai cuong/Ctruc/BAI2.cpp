#include<stdio.h>
struct Cauthu{
	char HT[30];	/*ho ten*/
	int SBT;		/*so ban thang*/
	int SP;			/*so phut thi dau*/
	int t;			/* tien thuong*/
}CT[100];
main(){
	int i,n;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		{
			printf("Ten CT %d: ",i);
			fflush(stdin);
			gets(CT[i].HT);
			printf("\nSBT: ");
			scanf("%d",&CT[i].SBT);
			printf("\nSo phut thi dau: ");
			scanf("%d",&CT[i].SP);
    	}
	for(i=1;i<=n;i++)
		if(CT[i].SP >= 500 && CT[i].SBT >= 3)
			{
			CT[i].t=5000000;
			printf("\nCT %d: %s",i,CT[i].HT);
			printf("\ntien thuong = %d",CT[i].t);
			}
		else if(CT[i].SP >=500 || CT[i].SBT >=3)
			{
			CT[i].t=2000000;
			printf("\nCT %d: %s",i);
			printf("\ntien thuong =%d",CT[i].t);
			} 
		else
			{
			printf("\nCT %d: %s",i,CT[i].HT);
			printf("\nkhong co thuong");
			}
	for(i=1;i<=n;i++)
		{
		if (CT[i].t == 5000000)
			printf("\nCT co tien thuong max: %s",CT[i].HT);
		else if(CT[i].t == 2000000)
			printf("\nCT co tien thuong max: %s",CT[i].HT);
		else printf("\nkhong max");	
		}
				
}


