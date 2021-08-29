//demo
#include<bits/stdc++.h>
#include"node.cpp"
#include"dlist.cpp"
#include"iterator.cpp"
using namespace std;
int main()
{
	dlist<int>  L;
	for(int i=1;i<10;i++) i%2?L.push_front(i):L.push_back(i);
	cout<<"\nDuyet xuoi\n";for(Node<int> *p=L.first();p!=NULL;p=p->getNext()) cout<<p->getElem()<<" ";
	//cout<<"\nDuyet nguoc\n";for(Node<int> *p=L.last();p!=NULL;p=p->getPrev()) cout<<p->getElem()<<" ";
	Node<int> *p=L.find(1);
	L.insertAfter(p,100);
	L.insertBefore(p,99);
	cout<<"\nDuyet xuoi\n";for(Node<int> *p=L.first();p!=NULL;p=p->getNext()) cout<<p->getElem()<<" ";
	L.remove(p);
	cout<<"\nDuyet xuoi\n";for(Node<int> *p=L.first();p!=NULL;p=p->getNext()) cout<<p->getElem()<<" ";
	cout<<"\nDanh sach\n";
	for(int i=1;i<=L.size();i++) cout<<L.getNode(i)->getElem()<<" ";
	//Duyet bang bo lap
	cout<<"\nDuyet bang bo lap\n";
	Iter<int> it(&L);
	while(it.hasnext()) cout<<it.next()<<" ";
}


