/* Doc MT A chua cac so nguyen , co kich co m*n tu mot tep van ban (tep tep tu bphim) co cau truc:
dong dau ghi so hang, so cot va moi dong sau ghi cac hang cua MT
- Ham in MT ra man hinh dang bang
- Ham tinh trung binh cong cac so chan va chia 3 du 1
- Tinh tong cua tung hang
- In MT duoi dang bang vao tep VB*/
#include<bits/stdc++.h>
using namespace std;
int **capphat(int m,int n)
{
	int **a=(int **)calloc(m,sizeof(int *));
	for(int i=0;i<m;i++)	a[i]=(int *)calloc(n,sizeof(int));
	return a;
}
void free(int m,int ***a)
{
	for(int i=0;i<m;i++)	free((*a)[i]);
	free (*a);
}
void nhap(int *m,int *n,int ***a,FILE *f=stdin)
{
	fscanf(f,"%d",m);
	fscanf(f,"%d",n);
	(*a)=capphat(*m,*n);
	for(int i=0;i<*m;i++)
		for(int j=0;j<*n;j++)	fscanf(f,"%d",&(*a)[i][j]);
}
void xuat(int m,int n,int **a,FILE *f=stdout)
{
	fprintf(f,"Ma tran:\n");
	for(int i=0;i<m;i++)
		{
		for(int j=0;j<n;j++)
			fprintf(f,"%-8d",a[i][j]);
			fprintf(f,"\n");
		}
}
void TBC(int m,int n,int **a)
{
	float s;
	int d=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(a[i][j]%2==0	&& a[i][j]%3==1)
				{
					s+=a[i][j];
					d++;
				}
	if(d==0)	printf("Khong thoa man");
	else printf("TBC cac so chan %3 == 1 : %.2f",s/d);
}
void tonghang(int m,int n,int **a)
{
	int s;
	for (int i=0;i<m;i++)
		{
			s=0;	// khi i tang theo hang luu vao s=0 + kq
			for (int j=0;j<n;j++)	s+=a[i][j];
			printf("\nTong hang %d = %d",i+1,s);
		}		        
}
void le(int m,int n,int **a)
{
	int min=a[0][0];
	for(int i=1;i<m;i++)
		for(int j=1;j<n;j++)
			if(a[i][j]<min && a[i][j]> 0 && a[i][j]%2!=0)
				min=a[i][j];
	printf("\nPtu le nho nhat MT %d",min);		
}
int main ()
{
	FILE *fi=fopen("MT.txt","r");
	FILE *fo=fopen("xuatMT.txt","w");
	int m,n;
	int **a;
	nhap(&m,&n,&a,fi);
	xuat(m,n,a);
	TBC(m,n,a);
	tonghang(m,n,a);
	xuat(m,n,a,fo);
	le(m,n,a);
	fclose(fi);
	fclose(fo);
	free(a);
}
