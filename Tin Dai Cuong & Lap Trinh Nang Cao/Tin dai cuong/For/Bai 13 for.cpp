#include<stdio.h>
int i,n;
int x[100],a,b;

void nhap(){
	scanf("%d",&n);
		for (i=0;i<n;i++)
		{printf ("x[%d]= ",i);
				scanf("%d",&x[i]);  }
	printf("a= "); scanf("%f",&a);
	printf("b= "); scanf("%f",&b); }
void tinh()	{
	int T=0,dem=0;
			for (i=0;i<n;i++)
			 if (x[i]>= a && x[i]<=b)
				{T=T + x[i];
				dem++;
				}	
	printf("gia tri TB trong khoang a -> b la %f",(float)T/dem);			
}
main (){
	nhap();
	tinh();
}


