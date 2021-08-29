#include<bits/stdc++.h>
struct sach
{
	char ten[30],tg[30];
	int nxb;
};
sach *nhap(int *n,FILE *f=stdin)
{
	fscanf(f,"%d\n",n);
	sach *a=(sach *)calloc(*n,sizeof(sach));
	for(int i=0;i<*n;i++)
	{
		fscanf(f,"%[^\n]\n",&a[i].ten);
		fscanf(f,"%[^\n]\n",&a[i].tg);
		fscanf(f,"%d\n",&a[i].nxb);
	}
	return a;
}
void xuat(int n,sach *a,FILE *f=stdout)
{
	fprintf(f,"Thong tin sach\n");
	for(int i=0;i<n;i++)
		fprintf(f,"%-15s%-15s%-10d\n",a[i].ten,a[i].tg,a[i].nxb);
}
void tim(int n,sach *a)
{
	char tim[30];
	printf("Nhap ten can tim\n");
	fflush(stdin);gets(tim);
	for(int i=0;i<n;i++)	// neu khong co thi thong bao: k tim dc (coi nhu for sai)
		{
			if(stricmp(a[i].ten,tim)==0)
				{	
					printf("Thong tin sach can tim\n");
					printf("%-15s%-15s%-10d",a[i].ten,a[i].tg,a[i].nxb);
					return;
				}	
		}
	printf("\nKhong tim thay");
}
void SX(int n,sach *a)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(a[i].nxb > a[j].nxb)
				{
					sach c;
					c=a[i];
					a[i]=a[j];
					a[j]=c;
				}
	printf("Danh sach NXB nho hon 2000\n");
	for(int i=0;i<n;i++)
	{	
		if(a[i].nxb <2000)		printf("%-11s%-15s%-10d\n",a[i].ten,a[i].tg,a[i].nxb);
	}
}
int main()
{
	FILE *f=fopen("sach.txt","r");
	FILE *f1=fopen("kqsach.txt","w");
	int n;
	sach *a=nhap(&n,f);
	xuat(n,a,f1);
	SX(n,a);
	tim(n,a);
	fclose(f);
	fclose(f1);
	free(a);	
}
