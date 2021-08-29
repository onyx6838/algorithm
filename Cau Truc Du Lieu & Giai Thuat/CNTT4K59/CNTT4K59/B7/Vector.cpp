//Cai dat vector bang mang
#include<iostream>
#ifndef __Vector__cpp
#define __Vector__cpp
using namespace std;

template <class T> 
class Vector
{
	int Cap,Num;   //Capacity va Size
	T *a;		   //ADT - kieu du lieu truu tuong T nao do
	public:
//	Vector()	// ham tao mac dinh
//	{
//		a=NULL;
//		Cap=Num=0;	
//	}
	void extend()  //Mo rong Capacity
 	{
		Cap=Cap*2+20;
		T*b=new T[Cap];
		for(int i=0;i<Num;i++) b[i]=a[i];
		delete []a;
		a=b;
	}
	void push_back(T x)
	{
		if(Cap==Num) extend();
		a[Num++]=x;
	}
	void pop_back()
	{
		if(Num>0) Num--;
	}
	int size() {return Num;}
	bool empty() {return Num==0;}
	Vector(int k=4)
	{
		a= new T[k];
		Cap=k;
		Num=0;
	}
	~Vector()
	{
		if(a) delete []a;
	}
	T *begin(){return a;}
	T *end() {return a+Num;}
	void insert(int k,T x)
	{
		if(k>=Num) push_back(x);
		else
		{
			if(Num==Cap) extend();
			for(int i=Num-1;i>=k;i--) a[i+1]=a[i];
			a[k]=x;
			Num++;
		}
	}
	void remove(int k)
	{
		if(k>=Num) return;
		for(int i=k+1;i<Num;i++) a[i-1]=a[i];
		Num--;
	}
	T &operator[](int i)
	{
		return a[i];
	}

};
#endif

