//cai dat queue bang slist
#include<bits/stdc++.h>
using namespace std;
#ifndef __queueslist__cpp__
#define __queueslist__cpp__
template<class T>
class Node
{
	T Elem;
	Node *Next;
	public:
		Node(T x,Node *N=0) {Elem=x;Next=N;}
		T getElem(){return Elem;}
		Node *getNext(){return Next;}
		void setElem(T x) {Elem=x;}
		void setNext(Node<T>*N=0) {Next=N;}
};
template<class T>
class Queue
{
	int n;
	Node<T> *F,*L;
	public:
		Queue() {n=0;F=L=0;}
		void push(T x)
		{
			if(n==0) F=L=new Node<T>(x);
			else 
			{
				L->setNext(new Node<T>(x));
				L=L->getNext();
			}
			n++;
		}
		void pop()
		{
			if(n==0) return;
			if(n==1) {n=0;F=L=0;}
			else
			{
				F=F->getNext();
				n--;
			}
		}
		T front(){return F->getElem();}
		T back(){return L->getElem();}
		int size(){return n;}
		bool empty(){return n==0;}
};
#endif
//int main()
//{
//	Queue<double> Q;
//	for(double i=0;i<1.5;i+=.2) Q.push(i);
//	while(Q.size())
//	{
//		cout<<Q.front()<<" ";
//		Q.pop();
//	}
//
//}
//

