#include<iostream>
#include<conio.h>
#define pi 3.14
using namespace std;
float dtich(float r)
{
	return (pi*r*r);
}
float chuvi(float r)
{
	return (2*pi*r);
}
int main ()
{	
	float k;
	cin>>k;
	float s=dtich(k);
	float c=chuvi(k);
	float a=dtich(2*k);
	float b=chuvi(2*k);
	cout<<s<<"\n"<<c;
	cout<<"\n"<<a<<"\n"<<b;
}
