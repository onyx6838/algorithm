#include<bits/stdc++.h>
#include"node.cpp"
#ifndef __dlist_cpp__
#define __dlist_cpp__
using namespace std;
template <class T>
class dlist
{
	int Num;
	Node<T> *Head,*Trail;
	public:
		dlist(){Num=0;Head=Trail=0;}
		int size(){return Num;}
		int empty(){return Num==0;}
		Node<T> *first(){return Head;}
		Node<T> *last(){return Trail;}
		void push_back(T x)
		{
			if(Num==0) Head=Trail=new Node<T>(x);
			else
			{
				Node<T> *q=new Node<T>(x,Trail,NULL);
				Trail->setNext(q); 
				Trail=q;
			}
			Num++;
		}
		void push_front(T x)
		{
			if(Num==0) Head=Trail=new Node<T>(x);
			else
			{
				Head->setPrev(new Node<T>(x,0,Head));
				Head=Head->getPrev();
			}
			Num++;
		}
		void pop_back()
		{
			if(Num==0) return;
			if(Num==1) {Head=Trail=NULL;Num=0; return;}
			Trail=Trail->getPrev(); Trail->setNext();
			Num--;
		}
		void pop_front()
		{
			if(Num<=1) return pop_back();
			Head=Head->getNext(); Head->setPrev();
			Num--;
		}
		void insertAfter(Node<T> *p,T x)
		{
			if(p==Trail) return push_back(x);
			Node<T> *q=p->getNext();
			Node<T> *r=new Node<T>(x,p,q);
			p->setNext(r);
			q->setPrev(r);
			Num++;
		}
		void insertBefore(Node<T> *p,T x)
		{
			if(p==Head) return push_front(x);
			else insertAfter(p->getPrev(),x);
		}
		Node<T> *find(T x)
		{
			for(Node<T> *p=Head;p;p=p->getNext()) if(p->getElem()==x) return p;
			return NULL;
		}
		void remove(Node<T> *p)
		{
			if(p==Head) return pop_front();
			if(p==Trail) return pop_back();
			Node<T> *q=p->getPrev();
			p=p->getNext(); 
			p->setPrev(q);
			q->setNext(p);
			Num--;			
		}
		void replace(Node<T> *p,T x){p->setElem(x);}
		Node<T> *getNode(int k)
		{
			if(k>=Num) return Trail;
			if(k==1) return Head;
			Node<T>*p;
			for(p=Head;k>1;k--,p=p->getNext()); 
			return p;
		}
};
#endif
//int main()
//{
//	dlist<int>  L;
//	for(int i=1;i<10;i++) i%2?L.push_front(i):L.push_back(i);
//	cout<<"\nDuyet xuoi\n";for(Node<int> *p=L.first();p!=NULL;p=p->getNext()) cout<<p->getElem()<<" ";
//	//cout<<"\nDuyet nguoc\n";for(Node<int> *p=L.last();p!=NULL;p=p->getPrev()) cout<<p->getElem()<<" ";
//	Node<int> *p=L.find(1);
//	L.insertAfter(p,100);
//	L.insertBefore(p,99);
//	cout<<"\nDuyet xuoi\n";for(Node<int> *p=L.first();p!=NULL;p=p->getNext()) cout<<p->getElem()<<" ";
//	L.remove(p);
//	cout<<"\nDuyet xuoi\n";for(Node<int> *p=L.first();p!=NULL;p=p->getNext()) cout<<p->getElem()<<" ";
//	cout<<"\nDanh sach\n";
//	for(int i=1;i<=L.size();i++) cout<<L.getNode(i)->getElem()<<" ";
//}
