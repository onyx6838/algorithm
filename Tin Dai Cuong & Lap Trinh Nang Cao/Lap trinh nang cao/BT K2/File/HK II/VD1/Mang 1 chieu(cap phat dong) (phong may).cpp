/* mang 1 chieu
- viet ham nhap 1 day so thuc trong do co cap phat dong
- viet ham nhap 1 day so thuc tu file co cap phat dong
- viet ham xuat day ra file
- kiem tra xem co 2 phan tu nao cua day bang nhau k
- ktra xem day co la cap so cong hay khong a[2]-a[1]=a[3]-a[2]=.....=a[n]-a[1]
- tim GTLN cua day
- Ham main nhap vao 2 day so thuc(1 day tu ban phim, 1 day tu file day.txt,ktra xem day 1 co 2 phan tu trung nhau k,
day 2 co la CSC k, tinh tong max cua 2 day, xuat 2 day ra 2 file a.txt va b.txt*/
#include<stdio.h>
#include<stdlib.h>
float *nhap(int *n,FILE *f=stdin)
{
	fscanf(f,"%d",n);								// chu y n la con tro
	float *a=(float *)calloc(*n+1,sizeof(float));		// phai co thu vien stdlib.h
	//float *a=new float[n]; 							C++
	for(int i=0;i<*n;i++)	fscanf(f,"%f",a+i);							// &a[i]
	return a;
}
void xuat(int n,float *a,FILE *f=stdout)
{
	fprintf(f,"%d\n",n);
	for(int i=0;i<n;i++)	fprintf(f,"%5.1f",a[i]);
}
int KTB(int n,float *a)			// tra ve 0 neu k co hoac 1 neu co
{
	for(int i=0;i<=n;i++)
		for(int j=i+1;j<=n;j++)
			if(a[i]==a[j])	return 1;
				return 0;	
}
int KTCSC(int n,float *a)
{
	float d=a[1]-a[0];
	for(int i=2;i<n;i++)	if(a[i]-a[i-1]-d) return 0;	// neu #0 thi` tra? ve 0
	return 1;
}
float max(int n,float *a)
{
	float t=a[0];
	for(int i=0;i<=n;i++)
		if(a[i]>t)	t=a[i];
	return t;
}
int main()
{
	FILE *f=fopen("day.txt","r");
	if(!f)	{printf("Error");return 0;}
	int n;
	float *a=nhap(&n,f);	
	FILE *f1=fopen("daya.txt","w");
	xuat(n,a,f1);
	fclose(f1);
	fclose(f);
	float *b=nhap(&n); 	// nhap tu bphim
	FILE *f2=fopen("dayb.txt","w");
	xuat(n,b,f2);
	fclose(f2);
	printf("\nTong max 2 day %f",max(n,a)+max(n,b));
	if(KTB(n,a))	printf("\nDay co 2 so = nhau");
	else printf("\nDay k co nao = nhau");
	if(KTCSC(n,a))	printf("\nDay a la CSC");
	else printf("\nK thoa man");
	free(a);
	free(b);
}
