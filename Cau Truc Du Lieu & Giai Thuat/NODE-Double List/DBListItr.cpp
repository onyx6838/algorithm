#ifndef DOUBLE_LIST_ITR
#define DOUBLE_LIST_ITR 3
#include"DBList.cpp"
#include<iostream>

template<class T>

class ListItr
{
	private:
		List<T> *slist;
		Node<T> *curNode;
	public:
		ListItr(List<T> *list)
		{
			slist=list;
			curNode=slist->first();
		}	
		void reset()
		{
			curNode=slist->first();
		}
		int hasNext()
		{
			return curNode!=NULL;
		}
		T next()
		{
			T e;
			e=curNode->getElem();
			curNode=curNode->getNext();
			return e;
		}
};
#endif
