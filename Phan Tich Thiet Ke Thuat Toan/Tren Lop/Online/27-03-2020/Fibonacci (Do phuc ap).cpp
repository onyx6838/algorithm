#include<stdio.h>
long Fibonacci(int n){
	long F[n+1]={0,1,1};
	for(int k=3;k<=n;k++)	F[k] = F[k-1] + F[k-2];
	return F[n];
}
int main()
{
	int n;
	printf("Nhap vao n = ");scanf("%d",&n);
	printf("F[%d] = %lld", n, Fibonacci(n));
}

