#include<bits/stdc++.h>
using namespace std;
#ifndef __node_cpp__
#define __node_cpp__
template <class T>
class Node
{
	T Elem;
	Node *Next;
	public:
		Node(){}
		Node(T x,Node *N=NULL)
		{
			Elem=x;
			Next=N;
		}
		T getElem(){return Elem;}
		Node<T>*getNext(){return Next;}
		void setElem(T x) {Elem=x;}
		void setNext(Node *N){Next=N;}
};
#endif

