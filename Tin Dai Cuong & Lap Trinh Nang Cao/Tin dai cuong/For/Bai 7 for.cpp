/* kiem tra co phai so armstrong khong */
#include<stdio.h>
main (){
	int n,i,s,x;
	scanf("%d",&n);
	s=0;
	x=n;
	for (i=0;i<=n;i++)
		{		
		i=n%10;	
		s=s+(i*i*i);
		n=n/10;
		}
	if (x==s)
		printf("so nguyen to");
	else 
		printf("khong thoa man");		
}


