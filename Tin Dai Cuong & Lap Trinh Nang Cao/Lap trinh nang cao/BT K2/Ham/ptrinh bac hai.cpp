#include<stdio.h>
#include<math.h>
void pt2 (float a,float b, float c)
{
	if (a==0)
		{
			if(b==0 && c==0)	printf("vo so nghiem");
			if(b==0 && c!=0)	printf("vo nghiem");
			if(b!=0)			printf("1 nghiem x=%f",-c/b);
		}
	else
		{
			float d=b*b-(4*a*c);
			if(d<0)				printf("vo nghiem");
			if(d==0)			printf("Nghiem kep x1=x2=%f",-b/2/a);
			if(d>0)
				printf("Hai nghiem phan biet x1= %f , x2= %f",(-b-sqrt(d))/2/a,(-b+sqrt(d))/2/a);
		}	
}
main (){
	pt2 (1,-2,-1);
	printf("\n");
	pt2(2,4,5);
}


