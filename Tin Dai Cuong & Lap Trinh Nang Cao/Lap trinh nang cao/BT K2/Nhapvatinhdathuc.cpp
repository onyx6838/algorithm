//ham nhap cho 1 da thuc , ham tinh cho 2 da thuc
#include<bits/stdc++.h>
using namespace std;
typedef int Arr[100];
void nhap(Arr *x,int n)
{
	for(int i=0;i<=n;i++)
	{
		printf("x[%d]= ",i);
		scanf("%d",x+i);	
	}
}
void xuat(int n,Arr *x,char nof[])
{
	printf("\n%s\n",nof);
	for(int i=0;i<=n;i++)	printf("%dx^%d + ",x+i,i);
}
int main ()
{
	Arr A,B;
	int z,m;
	printf("so ptu cua A =");scanf("%d",&z);
//	printf("so ptu cua B =");scanf("%d",&m);
	nhap(&A,z);
	xuat(z,&A,"Da thuc A: ");
}


