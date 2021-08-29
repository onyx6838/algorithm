#include<bits/stdc++.h>
using namespace std;
main ()
{
	char A[100],B[100];
	scanf("%s",&A);
	scanf("%s",&B);
	if(strlen(A)<strlen(B)) swap(A[100],B[100]);
	printf("xau a = %s",A);
}


