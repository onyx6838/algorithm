#ifndef NODE_CPP
#define NODE_CPP 1
#include"iostream"
using namespace std;
template<class T>
class Node
{
	private:
		T elem;
		Node *Next;
		Node *Pre;
	public:
		Node();
		Node *getNext();//Tra lai dia chi cua doi tuong do tphan Next tro den
		void setNext(Node<T> *);//
		Node *getPre();
		void setPre(Node<T> *);
		T getElem();
		void setElem(T);//Dat thay the ptu luu trong Node = ptu cuoi	
};

template<class T>

Node<T>::Node()
{
	Pre=NULL;
	Next=NULL;
}
template<class T>

Node<T> *Node<T>::getNext()
{
	return Next;
}

template<class T>

void Node<T>::setNext(Node<T> *p)
{
	Next=p;
}

template<class T>

Node<T> *Node<T>::getPre()
{
	return Pre;
}

template<class T>

void Node<T>::setPre(Node<T> *p)
{
	Pre=p;
}

template<class T>

T Node<T>::getElem()
{
	return elem;
}

template<class T>
void Node<T>::setElem(T e)
{
	elem=e;
}
#endif
