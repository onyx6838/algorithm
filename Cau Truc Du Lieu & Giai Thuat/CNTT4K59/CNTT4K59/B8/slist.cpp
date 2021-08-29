#include<bits/stdc++.h>
#include"node.cpp"
using namespace std;
#ifndef __slist_cpp__
#define __slist_cpp__
template <class T>
class slist
{
	Node<T> *head,*trail;  //head tro dau danh sach, trail tro cuoi danh sach
	int Num;               //So phan tu dang luu trong danh sach
	public:
		slist()
		{
			Num=0;
			head=trail=NULL;
		}
		int size(){return Num;}
		bool empty(){return Num==0;}
		void push_front(T x)
		{
			if(Num==0) head=trail=new Node<T>(x);
			else head=new Node<T>(x,head);
			Num++;
		}
		void push_back(T x)
		{
			if(Num==0) head=trail=new Node<T>(x);
			else
			{
				trail->setNext(new Node<T>(x));
				trail=trail->getNext();
			}
		}
		void pop_front()
		{
			if(Num==0) return;
			if(Num==1) head=trail=NULL;
			else head=head->getNext();
			Num--;
		}
		void pop_back()
		{
			if(Num==0) return;
			if(Num==1) head=trail=NULL;
			else
			{
				Node<T>*p=head;
				while(p->getNext()!=trail) p=p->getNext();
				trail=p;
				trail->setNext(NULL);
			}
			Num--;
		}
		Node<T> *first() {return head;}
		Node<T> *last() {return trail;}
		void replace(Node<T> *p,T e){p->setElem(e);}
		void insertAfter(Node<T> *p,T e)
		{
			if(p==trail) push_back(e);
			else
			{
				p->setNext(new Node<T>(e,p->getNext()));
				Num++;
			}
		}
		void remove(Node<T> *p)
		{
			//if(Num==1) {head=trail=NULL; Num--; return;}
			if(p==head) return pop_front();
			if(p==trail) return pop_back();
			Node<T> *q=head;
			while(q->getNext()!=p) q=q->getNext();
			q->setNext(p->getNext());
			Num--; 
			delete p;
		}
		Node<T>*begin() {return head;}
		Node<T>*end() {return NULL;}
};
#endif



