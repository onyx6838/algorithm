#ifndef NODE_CPP
#define NODE_CPP 1
#include"iostream"
using namespace std;
template <class T>
class Node
{
	private:
		T Elem;
		Node *Next;
		Node *Pre;
	public:
		Node();
		Node *getnext();
		Node *getpre();// tra lai dia chi node ke tiep
		void setnext(Node<T>*);
		void setpre(Node<T>*);
		T getElem();
		void setElem(T);	
};
template<class T>
Node<T>::Node()
{
	Pre = Next = NULL;
}

template<class T>
Node<T> *Node<T>::getnext()
{
	return Next;
}

template<class T>
Node<T> *Node<T>::getpre()
{
	return Pre;
}

template<class T>
void Node<T>::setnext(Node<T>*p )
{
	Next = p;
}

template<class T>
T Node<T>::getElem()
{
	return Elem;
}
template<class T>
void Node<T>::setpre(Node<T> *p)
{
	Pre = p;
}
template<class T>
void Node<T>::setElem(T e)
{
	Elem = e;
}
#endif
