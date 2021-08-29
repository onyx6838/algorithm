// HK II
/* day~ so
- nhap day so nguyen tu file a.txt
-.........					b.txt
- xuat file day.txt gom day a ,day b, giao a va b, hop a va b
(ham -doc day tu file
	 - xuat day ra file
	 - rut gon day so cac ptu trung nhau chi de 1 ptu
	 - tim giao 2 day
	 - tim hop 2 day
)*/	
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int *nhap(int *n,FILE *f=stdin)
{
	fscanf(f,"%d",n);
	int *a=(int *)calloc(*n+1,sizeof(int));
	for(int i=0;i<*n;i++)	fscanf(f,"%d",&a[i]);
	return a;
}
void xuat(int n,int *a,FILE *f=stdout)
{	
	fprintf(f,"%d\n",n);
	for(int i=0;i<n;i++)	fprintf(f,"%5d",a[i]);
	fprintf(f,"\n");
}
void RG(int *n,int *a)
{
	int k;
	for(int i=0;i<=*n;i++)
		{
			for(int j=i+1;j<=*n;j++)
				if(a[i]==a[j])
				{
					for(k=i;k<=*n;k++)
					{
						a[k] = a[k + 1];
						i--;		
					}		
				}	
		}
	*n--;
}
int *hop(int n,int m,int *a,int *b,int *k,int *c)
{
	*k=n+m;
	for(int i=0;i<=n;i++)	c[i]=a[i];
	for(int i=0;i<=m;i++)	c[i+n]=b[i];
	RG(k,c);
	return c;
}
int *giao(int n,int m,int *a,int *b,int *d)
{
	for(int i=0;i<=n;i++)
		for(int j=0;j<=m;j++)
			if(a[i]==b[j])
				d[i]=a[i];
				return d;	
}
int main ()
{
	int n,m,k,h;
	FILE *f1=fopen("a.txt","r");
	if(!f1)	printf("Error");
	int *a=nhap(&n,f1);
	fclose(f1);
	FILE *f2=fopen("b.txt","r");
	if(!f2)	printf("Error");
	int *b=nhap(&m,f2);
	fclose(f2);
	FILE *f=fopen("day.txt","w");
	xuat(n,a,f);
	xuat(m,b,f);
	fclose(f);
	free(a);
	free(b);
	int *d;
	giao(n,m,a,b,d);
	fprintf(f,"%5d",d); 		
	// In ra k dung ham`
	fclose(f);
	free(d);
}
	/*hop(n,m,a,b,&k,c);
	xuat(k,c,f);
	fclose(f);
	free(c);
	int *d;
	giao(n,m,a,b,d);
	xuat(k,d,f);
	fclose(f);
	free(d);			Tinh giao, hop*/

