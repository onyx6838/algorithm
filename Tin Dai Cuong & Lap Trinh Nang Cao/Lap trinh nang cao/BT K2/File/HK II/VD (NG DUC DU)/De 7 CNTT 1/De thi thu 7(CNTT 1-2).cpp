#include<bits/stdc++.h>
struct vdv
{
	char ht[30];
	int sd;
	char dh;
};
vdv *nhap(int *n,FILE *f=stdin)
{
	fscanf(f,"%d\n",n);
	vdv *a=(vdv *)calloc(*n,sizeof(vdv));
	for(int i=0;i<*n;i++)	
	{
		fscanf(f,"%[^\n]\n",&a[i].ht);
		fscanf(f,"%d\n",&a[i].sd);
		fscanf(f,"%c\n",&a[i].dh);
	}
	return a;
}
void xuat(int n,vdv *a,FILE *f=stdout)
{
	fprintf(f,"Thong tin thi sinh\n");
	for(int i=0;i<n;++i)
		fprintf(f,"%-30s%-15d%10c\n",a[i].ht,a[i].sd,a[i].dh);
}
void tongmax(int n,vdv *a)
{
	int t1,t2,t3;
	t1=t2=t3=0;
		for(int i=0;i<n;i++)	
		{
			if(a[i].dh=='A')	t1+=a[i].sd;
			if(a[i].dh=='B')	t2+=a[i].sd;
			if(a[i].dh=='C')	t3+=a[i].sd;
		}
	printf("Tong diem truong A = %d",t1);
	printf("\nTong diem truong B = %d",t2);
	printf("\nTong diem truong C = %d",t3);
	if(t1 > t2 && t1 >t3)	printf("\nTruong A diem max");
	else if(t2 > t1 && t2 >t3)	printf("Truong B diem max");
	else printf("Truong C diem max");
}
void SX(int n,vdv *a)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(a[i].sd<a[j].sd)
				{
					vdv c;
					c=a[i];
					a[i]=a[j];
					a[j]=c;
				}	
	printf("3 thi sinh diem cao nhat\n");					
	for(int i=0;i<3;i++)	printf("%-15s%-10d%10c\n",a[i].ht,a[i].sd,a[i].dh);	
}
int main ()
{
	FILE *fi=fopen("thisinh.txt","r");
	FILE *fo=fopen("output.txt","w");
	int n;
	vdv *a=nhap(&n,fi);
	xuat(n,a,fo);
	SX(n,a);
	tongmax(n,a);
	fclose(fi);
	fclose(fo);
	free(a);
}
