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
	public:
		Node();
		Node *getNext();//Tra lai dia chi cua doi tuong do tphan Next tro den
		void setNext(Node<T>*);//
		T getElem();
		void setElem(T);//Dat thay the ptu luu trong Node = ptu cuoi	
};
template<class T>

Node<T>::Node()
{
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
