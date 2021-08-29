//Cai dat stack bang mang
#include<bits/stdc++.h>
using namespace std;
#ifndef __Stack__cpp__
#define __Stack__cpp__
template <class T>
class stack
{
	int t=0,cap;
	T *a;
	public:
	stack(int Cap=100)
	{
		cap=Cap;
		a=new T[cap];
		t=-1;
	}
	~stack(){delete []a;}
	int size() {return t+1;}
	T top(){return a[t];}
	void pop(){if(t>=0) t--;}
	void push(T x)
	{
		if(t==cap-1)
		{
			cap=2*cap+10;
			T *b=new T[cap];
			for(int i=0;i<t;i++) b[i]=a[i];
			delete []a;
			a=b;
		}
		a[++t]=x;
	}
	bool empty() {return t+1==0;}
};
#endif
