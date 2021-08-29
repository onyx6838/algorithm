#include<bits/stdc++.h>
using namespace std;
struct thiSinh
{
	char hoten[30];
	float diem;
	char truong;
};
thiSinh *nhap(int *n,FILE *f=stdin)
{
	fscanf(f,"%d\n",n);
	thiSinh *a=(thiSinh *)calloc(*n,sizeof(thiSinh));
	for(int i=0;i<*n;i++)
	{
		fscanf(f,"%[^\n]\n",a[i].hoten);
		fscanf(f,"%f\n",&a[i].diem);
		fscanf(f,"%c\n",a[i].truong);
	}
	return a;
}
// Cau1
void tongDiemMin(int n,thiSinh *a)
{
	int t1,t2,t3;
	t1=t2=t3=0;
		for(int i=0;i<n;i++)	
		{
			if(a[i].dh=='A')	t1+=a[i].diem;
			if(a[i].dh=='B')	t2+=a[i].diem;
			if(a[i].dh=='C')	t3+=a[i].diem;
		}
	printf("Tong diem truong A = %d",t1);
	printf("\nTong diem truong B = %d",t2);
	printf("\nTong diem truong C = %d",t3);
	if(t1 < t2 && t1 < t3)	printf("\nTruong A diem min");
	else if(t2 < t1 && t2 < t3)	printf("\nTruong B diem min");
	else printf("\nTruong C diem min");
}
// Cau2
void xuatDiemCaoNhat(int n,thiSinh *a,FILE *f=stdout)
{
	float diemMax = INT_MIN;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(a[i].diem<a[j].diem)
				{
					diemMax = a[j].diem;
				}
	// Xuat file
	fprintf(f,"Thong tin thi Sinh diem cao nhat\n");
	for(int i=0;i<n;i++)
		if(a[i].diem == diemMax)
		{
			fprintf(f,"%-30s%-c\n",a[i].hoten,a[i].truong);
		}
}

int main ()
{
	int n;
	FILE *fi=fopen("input.txt","r");
	nv *a=nhap(&n,fi);
	FILE *fo=fopen("caonhat.txt","w");
	tongDiemMin(n,a);
	xuatDiemCaoNhat(n,a,fo);
	fclose(fi);
	fclose(fo);
	free(a);
}
