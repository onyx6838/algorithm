#include<stdio.h>
#define input(n) printf("Nhap so %s: ",#n);scanf("%u",&n);
int main()
{
	unsigned int a,b;
	Buoc1:
			input(a);
			input(b);
	Buoc2:
			if(a==b) goto Buoc3;
			a>b?a-=b:b=-a;
			goto Buoc2;
	Buoc3:	printf("UCLN la %d",a);
	// Dac ta tu nhien( Cac buoc noi theo ngon ngu tu nhien)
}

