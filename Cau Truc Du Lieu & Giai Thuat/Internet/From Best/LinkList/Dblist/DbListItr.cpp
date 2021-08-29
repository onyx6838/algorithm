#ifndef SINGLE_LIST_ITR
#define SINGLE_LIST_ITR 3
#include"DbList.cpp"
#include<iostream>

template<class T>

class DbListItr
{
	private:
		DbList<T>*slist;
		Node<T>*curNode;
	public:
		DbListItr(DbList<T>*list)
		{
			slist = list;
			curNode = slist->first();
		}
		void resest()
		{
			curNode = slist->first();
		}
		int hasnext()
		{
			return curNode != NULL;
		}
		T next()
		{
			T e;
			e = curNode->getElem();
			curNode = curNode -> getnext();
			return e;
		}
};
#endif
