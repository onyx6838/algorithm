//Bo lap xuoi cho danh sach kep
#include<bits/stdc++.h>
#include"dlist.cpp"
#include"node.cpp"
#ifndef __iterator_cpp__
#define __iterator_cpp__
template <class T>
class Iter
{
	Node<T> *curr;
	public:
	bool hasnext(){return curr!=NULL;}
	T next() 
	{
		T x=curr->getElem();
		curr=curr->getNext();
		return x;
	}
	Iter(dlist<T> *L)
	{
		curr=L->first();
	}
};
#endif
