#include<bits/stdc++.h>
using namespace std;
int f(int x)
{
	return x*x;
}
float f(float x)
{
	return x*x*x;
}
int main()
{
	int n=10,t=0;
	float s=0;
	for(int i=1;i<=n;i++)
	{
		t=t+f(i);
		s=s+f((float)i);
	}
	cout<<"t = "<<t<<endl<<"s = "<<s;
}


