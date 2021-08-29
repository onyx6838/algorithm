#include <iostream.h>
#include <conio.h> 
int operater (int a, int b) 
{ 
	return a*b; 
}
float operater (float a, float b) 
{ 
	return (a/b); 
} 
int main ()
{ 
	int x=5,y=2; 
	float n=5.0,m=2.0; 
	cout << operater (x,y); 
	cout << "\n" << operater (n,m);
	return 0; 
} 

