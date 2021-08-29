#ifndef SINGLELIST_CPP
#define SINGLELIST_CPP 1
#include "NODE.CPP"
#include "iostream"
using namespace std;
template<class T>
class SingleList
{
	private:
		Node<T> *header;//Con tro vao dau dsach
		Node<T> *trailer;//con tro vao cuoi dsach
		long n;//so ptu hien co cua dsach
	public:
		SingleList();
		long size();
		int isEmpty();
		Node<T> *first();//tra lai d/chi do con tro header tro den
		Node<T> *last();//tra lai d/chi do con tro trailer tro den
		void replace(Node<T> *p,T e);//thay the
		Node<T> *insertAfter(Node<T> *p,T e);//Chen vao cuoi dsach
		Node<T> *insertFirst(T e);//Chen them 1 node vao dau dsach
		Node<T> *insertLast(T e);
		void remove(Node<T> *);	
		Node<T> *getNode(int);	
};
template<class T>
SingleList<T>::SingleList()
{
	header=NULL;
	trailer=NULL;
	n=0;
}
template<class T>
long SingleList<T>::size()
{
	return n;
}
template<class T>
int SingleList<T>::isEmpty()
{
	return n==0;
}
template<class T>
Node<T>*SingleList<T>::first()
{
	return header;
}
template<class T>
Node<T>*SingleList<T>::last()
{
	return trailer;
}
template<class T>
void SingleList<T>::replace(Node<T> *p,T e)
{
	p->setElem(e);
}
template<class T>
Node<T>*SingleList<T>::insertAfter(Node<T> *p,T e)
{
	Node<T> *q;
	q=new Node<T>;
	if(q==NULL)	return NULL;
	q->setElem(e);
	q->setNext(p->getNext());
	p->setNext(q);
	if(p==trailer)
		trailer=q;
	n++;
	return q;	
}
template<class T>
Node<T> *SingleList<T>::insertFirst(T e)
{
	Node<T> *q;
	q=new Node<T>;
	if(q==NULL)	return NULL;
	q->setElem(e);
	if(isEmpty())
	{
		header=q;
		trailer=q;
	}
	else
	{
		q->setNext(header);
		header=q;
	}
	n++;
	return q;
}
template<class T>
Node<T> *SingleList<T>::insertLast(T e)
{
	Node<T> *q;
	q=new Node<T>;
	if(q==NULL)	return NULL;
	q->setElem(e);
	if(isEmpty())
	{
		header=q;
		trailer=q;
	}
	else
	{
		trailer->setNext(q);
		trailer=q;
	}
	n++;
	return q;
}
template<class T>
void SingleList<T>::remove(Node<T> *p)
{
	Node<T> *q;
	if(p==header)
	{
		if(size()==1)
		{
			header=NULL;
			trailer=NULL;
		}
		else	header=header->getNext();
	}
	else
	{
		q=header;
		while(q->getNext()!=p)//Vong lap tim vi tri node truoc
			q=q->getNext();
		if(q!=NULL)
		{
			if(p!=trailer)
			q->setNext(p->getNext());
			else
				trailer=q;
		}
	}
	n--;
	delete []p;
}
template<class T>
Node<T> *SingleList<T>::getNode(int i)
{
	if(i<0 || isEmpty())
		return NULL;
	Node<T> *p;
	int dem=0;
	p=header;
	while(dem<i && p!=NULL)
	{
		dem++;
		p=p->getNext();	
	}	
	return p;
}
#endif
