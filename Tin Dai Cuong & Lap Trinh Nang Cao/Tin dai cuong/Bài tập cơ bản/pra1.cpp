/* CAU 1*/
/* giai ptrinh bac hai tong quat ax^2+bx+c=0
#include<stdio.h>
#include<math.h>
main (){
	float a,b,c,del;
	printf("a= ");scanf("%f",&a);
	printf("b= ");scanf("%f",&b);
	printf("c= ");scanf("%f",&c);
	if(a==0)
	{
		if(b==0 && c==0)
			printf("ptrinh vo so nghiem ");
		if(b!=0)
			printf("ptrinh co nghiem = %f",-c/b);
		if(b==0 && c!=0)
			printf("ptr vo nghiem");		
	}
	else
		{
		del=b*b-(4*a*c);
			if(del <0)
				printf("ptrinh vo nghiem");
			if(del ==0)
				printf("ptrinh co nghiem kep x1=x2=%f",-b/2/a);
			if(del >0)
				{
					printf("hai nghiem pbiet");
					printf("\nx1= %f",(-b-sqrt(del))/2/a);
					printf("\nx2= %f",(-b+sqrt(del))/2/a);
				}
		}
}*/
// Lap cong thuc
/*#include<stdio.h>
#include<math.h>
main(){
	float x,s,tu,mau;
	int i,n,gt;
	printf("n= ");scanf("%d",&n);
	printf("x= ");scanf("%f",&x);
	tu=mau=0;
	gt=1;
		for(i=1;i<=n;i++)
		{
			tu+=pow(x,i);
			gt=gt*i;
			mau+=gt;
		}
	s=tu/mau;
	printf("s=%.1f",s);		
			
}*/
// Cthuc khac (b1)
/*#include<stdio.h>
#include<math.h>
main(){
	// F = x + (1+x)3 + (2+x)3 + … + (n+x)3
	float x,f;
	int n,i;
	printf("x= ");scanf("%f",&x);
	printf("n= ");scanf("%d",&n);
	f=x;
		for(i=1;i<=n;i++)
			f+=pow((x+i),3);
	printf("f= %f",f);		
}*/
// 	tinh cthuc
/*#include<stdio.h>
#include<math.h>
main(){
	float x,s,xmu,gt;
	int i,n;
	printf("x= ");scanf("%f",&x);
	printf("n= ");scanf("%d",&n);
	s=1;
	gt=1;
	xmu=0;
	for(i=1;i<=n;i++)
	{
	xmu++;	
	gt*=i;	
	s+=pow(x,xmu)/gt;
	}
	printf("s= %f",s);	
}*/
// nhap, xuat, tinh day so , day diem
/*#include<stdio.h>
#include<math.h>
main(){
	float a[100],k,x,c;
	int i,n,j;
	printf("n= ");scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			printf("a[%d]= ",i);
			scanf("%f",&a[i]);
		}
	printf("\nDay so:\n");
	for(i=1;i<=n;i++)
		printf("%.1f ",a[i]);
	printf("\nk= ");scanf("%f",&k);	
	x=0;
	for(i=1;i<=n;i++)
		{
			if(a[i]==k)
			x=1;
		}	
	if(x==1)
		printf("Thuoc day");
	else printf("k thoa man");
	// dao nguoc day
	printf("\nDay dao ngc\n");
	for(i=1;i<=n/2;i++)
		{
			c=a[i];
			a[i]=a[n-i+1];
			a[n-i+1]=c;
		}
	for(i=1;i<=n;i++)
		printf("%.1f ",a[i]);
	for(i=1;i<=n;i++)
		for(j=i+1;j<=n;j++)
			if(a[i]>a[j])
				{
					int q;
					q=a[i];
					a[i]=a[j];
					a[j]=q;
				}	
	printf("\nsap xep lai\n");
	for(i=1;i<=n;i++)
		printf("%.1f ",a[i]);			
}*/
// Day diem
#include<stdio.h>
#include<math.h>
main(){
	int x[100],y[100];
	int n,i;
	printf("n= ");scanf("%d",&n);
		for(i=1;i<=n;i++)
			{
				printf("x[%d]= ",i);scanf("%d",&x[i]);
				printf("y[%d]= ",i);scanf("%d",&y[i]);
			}
	printf("\nDay diem:\n");
	for(i=1;i<=n;i++)
		{
			printf("Diem %d ",i);
			printf("(%d,%d)\n",x[i],y[i]);
		}
	float min=sqrt(pow((x[2]-x[1]),2)+pow((y[2]-y[1]),2));
	int ddau=1;
	int dcuoi=2;
		for(i=1;i<=n;i++)
			if(min>sqrt(pow((x[i]-x[i+1]),2)+pow((y[i+1]-y[i]),2)))
				{
				min=sqrt(pow((x[i]-x[i+1]),2)+pow((y[i+1]-y[i]),2));
				ddau=i;
				dcuoi=i+1;
				}
	printf("\nDo dai ngan nhat = %.1f",min);
	printf("\nvi tri diem%d va diem%d",ddau,dcuoi);	
}

