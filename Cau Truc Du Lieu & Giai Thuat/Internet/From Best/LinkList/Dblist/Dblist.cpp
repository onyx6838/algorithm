#ifndef SINGLELIST_CPP
#define SINGLELIST_CPP 2
#include"Node.cpp"
#include"iostream"
using namespace std;

template<class T>

class DbList
{
	private:
		Node<T> *header;
		Node<T> *trailer;
		long n;
	public:
		DbList();
		long size();
		int isEmpty();
		Node<T> *first();// tra lai dia chi cho con tro header
		Node<T> *last();
		void replace(Node<T> *p, T e);
		void remove(Node<T> *p);
		Node<T> *insertAfter(Node<T>*p, T e);
		Node<T> *insertBefore(Node<T>*p, T e);
		Node<T> *insertFirst(T e);
		Node<T> *insertLast(T e);
		Node<T> *getNode(int i);
};

template<class T>
DbList<T>::DbList()
{
	header = trailer = NULL;
	n = 0;
}

template<class T>
long DbList<T>::size()
{
	return n;
}

template<class T>
int DbList<T>::isEmpty()
{
	return n == 0;
}

template<class T>
Node<T> *DbList<T>::first()
{
	return header;
}

template<class T>
Node<T> *DbList<T>::last()
{
	return trailer;
}

template<class T>
void DbList<T>::replace(Node<T>*p, T e)
{
	p->setElem(e);
}

template<class T>
Node<T> *DbList<T>::insertBefore(Node<T> *p, T e)
{
	Node<T> *q;
	q = new Node<T>;
	if(q == NULL) return NULL;
	q->setElem(e);
//	if(isEmpty()){
//		header = trailer = q;
//	}
//	else{
		if(p == header){
			header->setpre(q);
			q->setnext(header);
			header = q;
		}
		else{
			p->getpre()->setnext(q);
			q->setpre(p->getpre());
			q->setnext(p);
			p->setpre(q);
		}
//	}
	n++;
	return q;
}
template<class T>
Node<T> *DbList<T>::insertAfter(Node<T> *p, T e)
{
	Node<T> *q;
	q = new Node<T>;
	if(q == NULL) return NULL;
	q->setElem(e);
//	if(isEmpty()) return NULL;
//	else{
		if(p == trailer){
			trailer->setnext(q);
			q->setpre(trailer);
			trailer = q;
		}
		else{
			p->getnext()->setpre(q);
			q->setnext(p->getnext());
			p->setnext(q);
			q->setpre(p);
		}
//	}
	n++;
	return q;
}

template<class T>
Node<T> *DbList<T>::insertFirst(T e)
{
	Node<T> *q;
	q = new Node<T>;
	if(q == NULL) return NULL;
	q->setElem(e);
	if(isEmpty()) header = trailer = q;
	else {
		q->setnext(header);
		header->setpre(q);
		header = q;
	}
	n++;
	return q;
}

template<class T>
Node<T> *DbList<T>::insertLast(T e)
{
	Node<T> *q;
	q = new Node<T>;
	if(q == NULL) return NULL;
	q->setElem(e);
	if(isEmpty()){
		header = trailer = q;
	}
	else {
		trailer->setnext(q);
		q->setpre(trailer);
		trailer = q;
	}
	n++;
	return q;
}
template<class T>
void DbList<T>::remove(Node<T> *p)
{
	if(p == header){
		if(size() == 1){
			header = trailer = NULL;
		}
		else{
			header = header->getnext();
		}
	}
	else if(p == trailer){
		trailer = p->getpre();
		p->getpre()->setnext(NULL);
	}
	else {
		p->getpre()->setnext(p->getnext());
		p->getnext()->setpre(p->getpre());
	}
	n--;
	delete [] p;
}

template<class T>
Node<T> *DbList<T>::getNode(int i)
{
	if(i < 1 || isEmpty()){
		return NULL;
	}
	Node<T> *p;
	p = new Node<T>;
	int dem = 1;
	p = header;
	while(dem < i && p != NULL){
		dem++;
		p=p->getnext();
	}
	return p;
}
#endif
