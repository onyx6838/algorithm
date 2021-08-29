//Cai dat danh sach lien ket bang mang
#include<bits/stdc++.h>
using namespace std;
#ifndef __queue__cpp__
#define __queue__cpp__
template<class T>
class Queue
{
	T*a;
	int n,cap,F,L;
	public:
		Queue(int c=1)
		{
			cap=c;
			n=0;
			F=0;L=-1;
			a=new T[cap];
		}
		~Queue(){delete []a;}
		void push(T x)
		{
			if(n==cap)
			{
				int newcap=2*cap+1;
				T*b=new T[newcap];
				for(int i=F,j=0;i<F+cap;i++,j++) b[j]=a[i%cap];
				F=0,L=cap-1;
				cap=newcap;
				delete[]a;
				a=b;
			}
			L=(L+1)%cap;
			a[L]=x;
			n++;
		}
		void pop()
		{
			if(n==0) return;
			if(n==1) {n=F=0;L=-1;return;}
			F=(F+1)%cap; n--; 
		}
		int size(){return n;}
		bool empty(){return n==0;}
		T front(){return a[F];}
		T back(){return a[L];}
};
#endif


