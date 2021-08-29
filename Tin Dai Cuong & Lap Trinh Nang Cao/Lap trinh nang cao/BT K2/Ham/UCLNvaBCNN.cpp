//ham tinh UCLN, BCNN
#include<bits/stdc++.h>
using namespace std;
int uoc(int *a,int b)
{
	for(int i=0;i;i++)
	{
		if(*a>b) (*a)-=b;
		else b-=(*a);	
	}	
	return (*a);
}
main ()
{
	int x,y;
	scanf("%d%d",&x,&y);
	uoc(&x,y);	
	printf("UCLN = %d",x);                                                                                                                                                                                                                                        
}


