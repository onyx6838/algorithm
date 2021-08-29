//Bo lap xuoi cho danh sach don
#include<bits/stdc++.h>
#include"slist.cpp"
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
	Iter(slist<T> *L)
	{
		curr=L->first();
	}
};
#endif
