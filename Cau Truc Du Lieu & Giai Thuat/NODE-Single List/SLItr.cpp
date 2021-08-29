#ifndef SINGLE_LIST_ITR
#define SINGLE_LIST_ITR 3
#include "SLIST.cpp"
#include"iostream"
template<class T>
class SingleListItr
{
	private:
		SingleList<T> *slist;
		Node<T> *curNode;
	public:
		SingleListItr(SingleList<T> *list)
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
