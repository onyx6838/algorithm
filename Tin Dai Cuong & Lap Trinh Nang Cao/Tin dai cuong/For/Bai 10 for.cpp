/* so chan thi s=2*4*6*... va le thi s=1*3*5*... */
#include<stdio.h>
main (){
	int i,n,s;
	scanf("%d",&n);
	s=1;
	if (n%2==0) 
		{
			for (i=1;i<=n;i++)
			 {	if (i%2==0)
			 	s=s*i;  else s=s;    }		}
	else if (n%2 !=0)
		{
			for (i=1;i<=n;i++)
			{ if (i%2!=0)
				s=s*i;   else s=s; }
		} 
	printf("S = %d",s);
}



