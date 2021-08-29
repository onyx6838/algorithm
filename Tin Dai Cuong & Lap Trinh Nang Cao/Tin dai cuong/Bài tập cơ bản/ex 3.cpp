#include "stdio.h"
#include "math.h"
main()
{
long S;
int a;
do
{
scanf("%ld", &S);
} 
while (S<=0);
printf("\n Hinh chu nhat co the la:\n");
for (a=1;a<sqrt(S);a++)
{
if (S%a==0) printf("\n %d %d", a,S/a); 
}
}
