//demo
#include<bits/stdc++.h>
#include"node.cpp"
#include"slist.cpp"
#include"iterator.cpp"
using namespace std;
int main()
{
	slist<int> L;
	for(int i=1;i<10;i++) i%2?L.push_front(i):L.push_back(i);
	cout<<"\ndanh sach: "; 
	Iter<int> it(&L);
	do
	{
		cout<<it.next()<<" ";
	}while(it.hasnext());
//	for(Node<int>*p=L.first();p;p=p->getNext()) cout<<p->getElem()<<" ";
//	L.pop_front();
//	cout<<"\nXoa dau : ";
//	for(Node<int>*p=L.first();p;p=p->getNext()) cout<<p->getElem()<<" ";
//	L.pop_back();
//	cout<<"\nXoa cuoi : ";
//	for(Node<int>*p=L.first();p;p=p->getNext()) cout<<p->getElem()<<" ";	
}

