#include<bits/stdc++.h>
using namespace std;
#ifndef __node_cpp__
#define __node_cpp__
template <class T>
class Node
{
	T Elem;
	Node *Next,*Prev;
	public:
		Node(){}
		Node(T x,Node<T> *P=0,Node<T> *N=0)
		{
			Elem=x;
			Prev=P;
			Next=N; 
		}
		void setElem(T x) {Elem=x;}
		void setNext(Node<T> *N=0) {Next=N;}
		void setPrev(Node<T> *P=0) {Prev=P;}
		T getElem(){return Elem;}
		Node<T> *getNext() {return Next;}
		Node<T> *getPrev() {return Prev;}
};
#endif
//int main()
//{
//	Node<int> A(3); //Trai phai rong
//	Node<int> B(4,0,&A); 
//	A.setPrev(&B);
//
//}


