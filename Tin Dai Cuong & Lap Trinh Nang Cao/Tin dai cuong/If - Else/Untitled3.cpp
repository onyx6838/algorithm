#include <stdio.h>
#include <math.h>
#define z 0.0001f 
double can(int x)
{
    float guess = 1.0f;
    while (fabs(guess*guess - x) >= z)
        guess = (x/guess - guess) / 2 + guess;
    return guess;
}
int main(void)
{
    int x;
    printf("x= ");
    scanf("%d", &x);
    printf("can bac 2 cua %d = %f", x, can(x));
    
}
