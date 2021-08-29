#include<bits/stdc++.h>
using namespace std;
void hoandoi(float &a, float &b)
{
	float tg;
	tg = a;  
	a = b;
	b = tg;
}
int main()
{
	float a=5.6,b=3.2;
	swap(a,b);   //hoan doi 2 gia tri
	int x=7,y=2;
	cout<<"\na= "<<a;
	cout<<"\nb= "<<b;
	swap(x,y);
	cout<<"\nx = "<<x<<"\ny = "<<y;
}


