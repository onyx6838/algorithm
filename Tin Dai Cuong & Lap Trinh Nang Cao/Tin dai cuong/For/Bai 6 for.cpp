/* kiem tra xem co phai so hoan hao khong */
#include<stdio.h>
main (){
	int  n,i,s;
	scanf ("%d",&n);
	s=0;	
	if (n<0)
		printf ("khong thoa man");
	else
		{
	 	for (i=1;i<n;i++)
	{
	if (n%i==0)
	 	s=s+i;
	else s=s;
		}
	if (s==n) 
		printf("--> %d la so nguyen to",n);	
	else
	 	printf ("khong thoa man");  } 
}



