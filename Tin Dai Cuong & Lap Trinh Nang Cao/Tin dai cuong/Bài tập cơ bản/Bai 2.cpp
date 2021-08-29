/* tinh chu vi HCN biet dt=9.1 va ty le giua chieu dai va chieu rong la p=2 */
#include<stdio.h>
#include<math.h>
#define s 9.1
int main(){
	float a,C;
	a= sqrt(s/2);
	printf("cdai = %f \ncrong = %f",2*a,a);
	C= (a + 2*a)*2;
	printf("\nchu vi = %f",C);	
}

