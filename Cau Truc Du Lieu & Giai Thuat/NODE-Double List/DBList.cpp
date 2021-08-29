#ifndef	DBLIST_CPP
#define DBLIST_CPP 1
#include"NodeDB.cpp"
#include"iostream"

template<class T>

class List
{
	private:
		Node<T> *header;
		Node<T> *trailer;
		long n;
	public:
		List();
		long size();
		int isEmpty();
		Node<T> *first();
		Node<T> *last();
		void replace(Node<T> *p,T e);
		void remove(Node<T> *p);
		Node<T> *insertBefore(Node<T> *p,T e);
		Node<T> *insertAfter(Node<T> *p,T e);
		Node<T> *insertFirst(T e);
		Node<T> *insertLast(T e);
		Node<T> *getNode(int i);
};
template<class T>
List<T>::List()
{
	header=NULL;
	trailer=NULL;
	n=0;
}
template<class T>
long List<T>::size()
{
	return n;
}
template<class T>
int List<T>::isEmpty()
{
	return n==0;
}
template<class T>
Node<T> *List<T>::first()
{
	return header;
}
template<class T>
Node<T> *List<T>::last()
{
	return trailer;
}
template<class T>
void List<T>::replace(Node<T> *p,T e)
{
	p->setElem(e);
}
template<class T>
Node<T> *List<T>::insertBefore(Node<T> *p,T e)
{
	Node<T> *q;
	q = new Node<T>;
	q->setElem(e);
	if(p==header)
	{
		header->setPre(q);
		q->setNext(header);
		header=q;
	}
	else
	{
		p->getPre()->setNext(q);
		q->setPre(p->getPre());
		q->setNext(p);
		p->setPre(q);
	}
	n++;
	return q;
}
template<class T>
Node<T> *List<T>::insertAfter(Node<T> *p,T e)
{
	Node<T> *q;
	q=new Node<T>;
	q->setElem(e);
	if(p==trailer)
	{
		trailer->setNext(q);
		q->setPre(trailer);
		trailer=q;
	}	
	else
	{
		p->getNext()->setPre(q);
		q->setNext(p->getNext());
		p->setNext(q);
		q->setPre(p);
	}
	n++;
	return q;
}
template<class T>
Node<T> *List<T>::insertFirst(T e)
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
		header->setPre(q);
		header=q;
	}
	n++;
	return q;
}
template<class T>
Node<T> *List<T>::insertLast(T e)
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
		q->setPre(trailer);
		trailer=q;
	}
	n++;
	return q;
}
template<class T>
void List<T>::remove(Node<T> *p)
{
	Node<T> *q;
	if(p==header)
	{
		header=header->getNext();
		if(header!=NULL)
			header->setPre(NULL);
	}
	else if(p==trailer)			// ???????
	{
		trailer = trailer->getNext();
		if(trailer!=NULL)
			trailer->setNext(NULL);
	}
	else
	{
		p->getNext()->setPre(p->getPre());
		p->getPre()->setNext(p->getNext());
	}
	n--;
	delete []p;
}
template<class T>
Node<T> *List<T>::getNode(int i)
{
	if(i<1 || isEmpty())
		return NULL;
	Node<T> *p;
	int dem=1;
	p=header;
	while(dem<i && p!=NULL)
	{
		dem++;
		p=p->getNext();	
	}	
	return p;
}
#endif
