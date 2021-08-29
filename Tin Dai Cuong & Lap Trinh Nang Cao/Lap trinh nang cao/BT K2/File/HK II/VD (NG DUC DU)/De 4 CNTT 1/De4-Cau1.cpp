#include<bits/stdc++.h>
using namespace std;
float **phat(int m,int n)
{
	float **a=(float **)calloc(m,sizeof(float *));
	for(int i=0;i<m;i++)	a[i]=(float *)calloc(n,sizeof(float));
	return a;
}
void free(int m,int ***a)
{
	for(int i=0;i<m;i++)	free((*a)[i]);
	free(*a);
}
void nhap(int *m,int *n,float ***a,FILE *f=stdin)
{
	fscanf(f,"%d%d",m,n);
	(*a)=phat(*m,*n);
	for(int i=0;i<*m;i++)
		for(int j=0;j<*n;j++)	fscanf(f,"%f",&(*a)[i][j]);
}
void xuat(int m,int n,float **a)
{
	printf("MT\n");
	for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			printf("%-8.1f",a[i][j]);
			printf("\n");
		}
		
}
int mtTamGiac(int m,int n,float **a){
	if(m != n)	return 0;
	else{
		int i,j;
	    for(i=0;i<n;i++)
	        for(j=0;j<i;j++)
	            if(a[i][j]!=0) return 0;
	    return 1;
	}
}
float Tongtamgiacduoi(int m,int n,float **a)
{
	float sum=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(i+j > n-1)
				sum=sum+a[i][j];
	return sum;
}
void tonghangVaMax(int m,int n,float **a)
{
	float s;
	float cot_min = INT_MAX;
	for (int i=0;i<m;i++)
	{
		s=1;
		for (int j=0;j<n;j++)	
			s*=a[i][j];
		if(s < cot_min)	cot_min = s;
		printf("\nTich hang %d = %f",i+1,s);
	}
	printf("\nTich cac hang min voi min = %f", cot_min);
	// in ra cac hang co min
}
int DoanCatOy(D_Diem D)
{
     int i,j;
     //Liet ke cac doan cat truc tung
     printf("\n\nCau 3");
     int dem=0;
	 for(i=1;i<=D.n;i++)
	 for(j=i+1;j<=D.n;j++)
	 if ((D.A[i].x*D.A[j].x<=0) && (fabs(D.A[i].x)+ fabs(D.A[j].x)>0))
	 {
	 	dem++;
	 	printf("\nDoan A%dA%d cat truc tung ",i,j);
	     }
     return dem;
}
int main ()
{
	FILE *f=fopen("MT.txt","r");
	int m,n;
	float **a;
	nhap(&m,&n,&a,f);
	xuat(m,n,a);
	if(mtTamGiac(m,n,a) == 1) printf("Thoa man");
	else printf("k thoa man");
	printf("\n Tong tam giac duoi %f",Tongtamgiacduoi(m,n,a));
	tonghangVaMax(m,n,a);
	fclose(f);
	free(a);
}
