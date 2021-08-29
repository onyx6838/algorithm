#include"iostream"
#ifndef QUEUE_CPP
#define QUEUE_CPP 1
using namespace std;
template<class T>
class Queue
{
	private:
		int N;
		T *Q;
		int f,r;
	public:
		Queue(int c=25);
		int enqueue(T o);
		int dequeue(T &o);
		int front(T &o);
		int size();
		int isEmpty();
};
template<class T>
Queue<T>::Queue(int c)
{
	N=c;
	Q=new T[N];
	f=0;
	r=0;
}
template<class T>
int Queue<T>::enqueue(T o)
{
	if(size()==N-1)	return 0;
	else
	{
		Q[r]=o;
		r=(r+1)%N;
		return 1;
	}
}
template<class T>
int Queue<T>::dequeue(T &o)
{
	if(isEmpty()) return 0;
	else
	{
		o=Q[f];
		f=(f+1)%N;
		return 1;
	}
}
template<class T>
int Queue<T>::size()
{
	return (N-f+r)%N;
}
template<class T>
int Queue<T>::isEmpty()
{
	return (f==r);
}
template<class T>
int Queue<T>::front(T &o)
{
	if(isEmpty()) return 0;
	else
	{
		o=Q[f];
		return 1;
	}
}
#endif
