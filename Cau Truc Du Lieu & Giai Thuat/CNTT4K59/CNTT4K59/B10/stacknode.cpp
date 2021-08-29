//Cai dat stack bang danh sach lien ket
#include<bits/stdc++.h>
using namespace std;
#ifndef __stacklist__cpp__
#define __stacklist__cpp__
template <class T>
class Node
{
	T Elem;
	Node *Next;
	public:
		Node(T x,Node<T>*N=NULL)
		{
			Elem=x; Next=N;
		}
		T getElem(){return Elem;}
		Node<T>*getNext(){return Next;}
};
template<class T>
class stack
{
	int num;
	Node<T> *Head;
	public:
		stak() {num=0;Head=NULL;}
		int size(){return num;}
		bool empty() {return num==0;}
		void push(T x)
		{
			Head=new Node<T>(x,Head);
			num++;
		}
		void pop(){if(Head) {Head=Head->getNext(); num--;}}
		T top() {return Head->getElem();}
};
#endif

