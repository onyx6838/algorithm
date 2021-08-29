#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;
int main()
{
	priority_queue<float> Q;
	float a[]={4,7,2,8,1};
	int n=sizeof(a)/sizeof(float);
	for(int i=0;i<n;i++) Q.push(a[i]);
	while(Q.size())
	{
		float x=Q.top();
		printf("%8.2f ",x);
		Q.pop();
	}
}

