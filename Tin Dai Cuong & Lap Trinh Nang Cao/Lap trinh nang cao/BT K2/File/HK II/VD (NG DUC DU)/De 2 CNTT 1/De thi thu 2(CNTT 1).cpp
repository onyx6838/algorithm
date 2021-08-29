/* De 2 (CNTT 1)
- cho tep VB chua n diem tren mphang: dong dau` chua so diem, moi dong tiep theo chua hoanh do va tung do cua diem
- ham doc du lieu diem tu tep
- xac dinh diem o xa goc toa do nhat
- neu co 2 diem tao 1 doan thang xac dinh so dthang trong goc phan tu III*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
struct diem
{
	float x,y;
};
diem *nhap(int *n,FILE *f=stdin)			// kieu nhap 1
{
	fscanf(f,"%d",n);
	diem *a=(diem *)calloc(*n,sizeof(diem));
	for(int i=0;i<*n;i++)	
	{
		fscanf(f,"%f\n",&a[i].x);
		fscanf(f,"%f\n",&a[i].y);
	}
	return a;
}
/*void nhap(int *n,diem **a,FILE *f=stdin)		// kieu nhap 2
{
	fscanf(f,"%d\n",n);
	*a=(diem *)calloc(*n,sizeof(diem));
	for(int i=0;i<*n;i++)
	{
		fscanf(f,"%f\n",&(*a)[i].x);
		fscanf(f,"%f\n",&(*a)[i].y);
	}	
}*/
void xuat(int n,diem *a,FILE *f=stdout)
{
	fprintf(f,"Thong tin diem\n");
	for(int i=0;i<n;i++)
	{
		fprintf(f,"%.1f",a[i].x);
		fprintf(f,"%5.1f\n",a[i].y);
	}
}
float kc(diem a,diem b)
{
	float u=a.x-b.x;
	float v=a.y-b.y;
	return sqrt((u*u)+(v*v));
}
void xanhat(int n,diem *a)
{
	diem O;O.x=O.y=0;
	int p=-1;
	float max=kc(a[0],O);
	for(int i=1;i<n;i++)
		if(max < kc(a[i],O))
		{
			p=i;
		}
	printf("Diem xa O nhat %.1f %.1f",a[p].x,a[p].y);	
}
int ba(int n, diem *a)
{
	diem O;O.x=O.y=0;
	int d=0;
	for(int i=0;i<n;i++)	
		if(a[i].x<0 && a[i].y<0)	d++;
	return 	(d*(d-1))/2;
}
int main ()
{
	FILE *f=fopen("diem.txt","r");
	int n;
	diem *a=nhap(&n,f);	// nhap kieu 1
	//diem *a;nhap(&n,&a,f);	//nhap kieu 2
	xuat(n,a);
	xanhat(n,a);
	printf("\nSo doan thang trong III %d",ba(n,a));
	fclose(f);
	free(a);
}


