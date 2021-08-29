#include<bits/stdc++.h>
using namespace std;
#ifndef VECTOR_CPP
#define VECTOR_CPP 1
template <class T>  
class Vector{
	private:
			int  N;        //S? chi?u t?i da c?a Vector
			T *V;     	   //luu tr? d? li?u
			int n;          //S? ph?n t? hi?n có trong Vector
	public:
			Vector();
			~Vector();
			int getAtRank(int r, T &o);
			int replaceAtRank(int r, T o);
			int insertAtRank(int r, T o);
			int removeAtRank(int r, T &o);
			int size(){return n;}
			int isEmpty(){return n==0;}
};
template <class T> 
int Vector<T>::removeAtRank(int r, T &o)
{
	if(r<0||r>=n) return 0;
	o=V[r]; //lay ra truoc khi xoa
	for(int i=r;i<n-1;i++) V[i]=V[i+1];
	n--;
	return 1;
}
template <class T> 
int Vector<T>:: insertAtRank(int r, T o)
{
	if(r<0 || r>n) return 0;
	if(n==N) //Khi day phai mo rong vung nho 
	{
		N=2*N+10;
		T *W=new T[N];
		for(int i=0;i<r;i++)W[i]=V[i];
		W[r]=o; //chen
		for(int i=r;i<n;i++) W[i+1]=V[i];
		delete []V;
		V=W;
	}
	else //Du khong gian
	{
		for(int i=n-1;i>=r;i--) V[i+1]=V[i];
		V[r]=o;//chen
	}
	n++;
	return 1;
}
template <class T> 
int Vector<T>::replaceAtRank(int r, T o) 
{
	if(r<0 || r>=n) return 0;
	V[r]=o; 
	return 1;
}
template <class T> 
Vector<T>::Vector(){N=100; n=0;  V=new T[N];}
template <class T> 
Vector<T>::~Vector() {delete []V;}
template <class T> 
int Vector<T>::getAtRank(int r, T &o)
{
	if(r<0 || r>=n) return 0;
	o=V[r]; 
	return 1;
}

#endif
