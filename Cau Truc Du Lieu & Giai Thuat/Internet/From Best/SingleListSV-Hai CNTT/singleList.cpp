#ifndef SINGLELIST_CPP
#define SINGLELIST_CPP 2
#include"Node.cpp"
#include"iostream"
using namespace std;

template<class T>

class singleList
{
	private:
		Node<T> *header;
		Node<T> *trailer;
		long n;
	public:
		singleList();
		long size();
		int isEmpty();
		Node<T> *first();// tra lai dia chi cho con tro header
		Node<T> *last();
		void replace(Node<T> *p, T e);
		void remove(Node<T> *p);
		Node<T> *insertAfter(Node<T>*p, T e);
		Node<T> *insertFirst(T e);
		Node<T> *insertLast(T e);
		Node<T> *getNode(int i);
};

template<class T>
singleList<T>::singleList()
{
	header = trailer = NULL;
	n = 0;
}

template<class T>
long singleList<T>::size()
{
	return n;
}

template<class T>
int singleList<T>::isEmpty()
{
	return n == 0;
}

template<class T>
Node<T> *singleList<T>::first()
{
	return header;
}

template<class T>
Node<T> *singleList<T>::last()
{
	return trailer;
}

template<class T>
void singleList<T>::replace(Node<T>*p, T e)
{
	p->setElem(e);
}

template<class T>
Node<T> *singleList<T>::insertAfter(Node<T> *p, T e)
{
	Node<T> *q;
	q = new Node<T>;
	if(q == NULL) return NULL;
	q->setElem(e);
	q->setnext(p->getnext());
	p->setnext(q);
	if(p == trailer) q = trailer;
	n++;
	return q;
}

template<class T>
Node<T> *singleList<T>::insertFirst(T e)
{
	Node<T> *q;
	q = new Node<T>;
	if(q == NULL) return NULL;
	q->setElem(e);
	if(isEmpty()){
		header = q;
		trailer = q;
	}
	else {
		q->setnext(header);
		header = q;
	}
	n++;
	return q;
}

template<class T>
Node<T> *singleList<T>::insertLast(T e)
{
	Node<T> *q;
	q = new Node<T>;
	if(q == NULL) return NULL;
	q->setElem(e);
	if(isEmpty()){
		header = q;
		trailer = q;
	}
	else {
		trailer->setnext(q);
		trailer = q;
	}
	n++;
	return q;
}
template<class T>
void singleList<T>::remove(Node<T> *p)
{
	Node<T> *q;
	if(p == header){
		if(size() == 1){
			header = NULL;
			trailer = NULL;
		}
		else {
			header = header -> getnext();
		}
	}
	else {
		q = header;
		while(q->getnext() != p) q = q -> getnext();
		if(q != NULL){
			if(q != trailer){
				q->setnext(p->getnext());
			}
			else trailer = q;
		}
	}
	n--;
	delete [] q;
}

template<class T>
Node<T> *singleList<T>::getNode(int i)
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
