#include<stdio.h>
#define FOR(i,a,b) for(int i=1;i<=b;i++)
int main()
{
	int A[100005], n, M=-1,Max;
	printf("Nhap vao so phan tu: ");
	scanf("%d",&n);
	FOR(i,1,n)	printf("A[%d]=",i),scanf("%d",A+i);
	Max = A[1];
	FOR(j,2,n)
	{
		if(M < Max-A[j])	M = Max-A[j];
		if(Max < A[j])	Max = A[j];
	}
	printf("%d",(M<=0?-1:M));
}

