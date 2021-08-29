// CAU 2
// Ma tran nhap xuat , tinh ( VD: tich cac cot chan)
/*#include<stdio.h>
main (){
	int a[100][100],i,j,n,m;
	int tich,minj[10],k,min;
	printf("m= ");scanf("%d",&m);
	printf("n= ");scanf("%d",&n);
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			{
				printf("a[%d][%d]",i,j);
				scanf("%d",&a[i][j]);
			}
	printf("-----------\n");
	for(i=1;i<=m;i++)
		{
		for(j=1;j<=n;j++)	
			printf("%d ",a[i][j]);
			printf("\n");	
		}
	tich=1;	
	for(j=1;j<=n;j++)
		{
		for(i=1;i<=m;i++)
			if(j%2==0)
				tich*=a[i][j];
		}
		printf("Tich cot chan = %d",tich);
	min=a[1][1];	
	for(j=1;j<=n;j++)
		{
		for(i=1;i<=m;i++)
			if(a[i][j]<min)
				minj[j]=a[i][j];
		}
		for(j=1;j<=n;j++)
			printf("\nMin cot %d= %d",j,minj[j]);
}*/
/*#include<stdio.h>
#include<math.h>
main(){
	int a[100][100],i,j,n,m;
	int q,c,d,k;
	printf("m= ");scanf("%d",&m);
	printf("n= ");scanf("%d",&n);
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			{
				printf("a[%d][%d]",i,j);
				scanf("%d",&a[i][j]);
			}
	printf("-----------\n");
	for(i=1;i<=m;i++)
		{
		for(j=1;j<=n;j++)	
			printf("%d ",a[i][j]);
			printf("\n");	
		}
// Kiem tra q = ptu trong mtran k va in vi tri 		
	printf("q= ");scanf("%d",&q);
	c=d=1;
	k=0;
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			if(a[i][j]==q)
			{
				c=i;
				d=j;
				k++;
			}
	if(k==0)
			printf("k co");
	else
	 	printf("vi tri i=%d, j=%d",c,d);
}*/
// Kiem tra MTran tam giac duoi(tren) va in ra min tren duong cheo chinh
/*#include<stdio.h>
main(){
	int a[100][100],i,j,n,m;
	int min;
	printf("m= ");scanf("%d",&m);
	printf("n= ");scanf("%d",&n);
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			{
				printf("a[%d][%d]",i,j);
				scanf("%d",&a[i][j]);
			}
	printf("-----------\n");
	for(i=1;i<=m;i++)
		{
		for(j=1;j<=n;j++)	
			printf("%d ",a[i][j]);
			printf("\n");	
		}
	int z=0;	
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			{
			if(i<j && a[i][j]==0)
			z++;
			}
	if(z==0)	printf("k thoa man");
	else 	printf("MT tam giac duoi");
	min= a[1][1];
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			if(i<j && min>a[i][j])
				min=a[i][j];
	printf("\nmin= %d",min);					
}*/
#include<stdio.h>
#include<math.h>
main(){
	int a[100][100],i,j,n,m;
	int tong,dem,tich[10],demtich;
	printf("m= ");scanf("%d",&m);
	printf("n= ");scanf("%d",&n);
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			{
				printf("a[%d][%d]",i,j);
				scanf("%d",&a[i][j]);
			}
	printf("-----------\n");
	for(i=1;i<=m;i++)
		{
		for(j=1;j<=n;j++)	
			printf("%d ",a[i][j]);
			printf("\n");	
		}
	tong=dem=0;
	for(j=1;j<=n;j++)
		{
		for(i=1;i<=n;i++)
			tong+=a[i][j];
			dem++;
			printf("\nTong cot %d = %d",dem,tong);
		}
	tich[10]=1;
	demtich=0;
	for(i=1;i<=m;i++)
		{
		for(j=1;j<=n;j++)
			tich[i]*=a[i][j];
		}
	for(i=1;i<=m;i++)
		if(tich[i] %2==0)	
			demtich++;
	printf("\n%d hang co tich chan",demtich);				
}




