#ifndef NODE_CPP 
#define NODE_CPP
#include"iostream" 
using namespace std; 
template <class T> 
class Node
{
	private:  	T elem;  
				Node *next; 
	public:  
	Node(T x,Node *N=0){elem=x;next=N;}  
	Node *getNext(){return next;}
	void setNext(Node<T>*N){next=N;}
	T  getElem() {return elem;}    
	void  setElem(T x){elem=x;}
};
#endif
