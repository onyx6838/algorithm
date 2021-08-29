#ifndef SINGLELIST_CPP
#define SINGLELIST_CPP 
#include "node.cpp"
#include "iostream"
using namespace std;
template <class T>
class SingleList{
private:
	Node<T> *header;  // Con tro tro vao dau danh sach
	Node<T> *trailer; // Con tro tro vao phan tu cuoi cua danh sach
	long n;		       // so phan tu hien co cua danh sach
public:
	SingleList(){header=trailer=0; n=0;}
	long   size(){return n;}
	int    isEmpty(){return n==0;}
	Node<T>* first(){return header;}	// Tra lai dia chi do con tro header tro den
	Node<T>* last(){return trailer;}	// Tra lai dia chi do con tro trailer tro den
	void replace(Node<T> *p, T e) //Thay the phan tu luu trong p bang phan tu e va tra lai dia chi p
	{
		p->setElem(e);
	}	
	Node<T>* insertAfter(Node<T> *p, T e) // Chen them node sau node do p tro toi
	{
		Node<T>*q=new Node<T>(e,p->getNext());
		p->setNext(q);
		n++;
		return q;
	}
	Node<T>* insertFirst(T e) // Chen them 1 node vao dau danh sach
	{
		header=new Node<T>(e,header);
		if(n==0) trailer=header;
		n++;
		return header;
	}
	Node<T>* insertLast(T e)  //Chen them mot node vao cuoi danh sach
	{
		if(n==0) return insertFirst(e);
		trailer->setNext(new Node<T>(e));
		trailer=trailer->getNext();
		n++;
		return trailer;
	}
	void remove(Node<T> *p)		 // Loai bo node do con tro p tro toi
	{
		if(p==NULL) return;
		if(n==1) {header=trailer=0;}
		else if(p==header) header=(header->getNext());
		else
		{
			Node<T>*q=header; 
			while(q->getNext()!=p) q=q->getNext();
			q->setNext(p->getNext());
			if(p==trailer) trailer=q;
		}
		n--;
	}
	Node<T>* getNode(int i) //node header tinh la thu 0
	{
		Node<T>*p=header;
		for(;p!=NULL&&i>0;p=p->getNext(),i--);
		return p;
	}
};
#endif
