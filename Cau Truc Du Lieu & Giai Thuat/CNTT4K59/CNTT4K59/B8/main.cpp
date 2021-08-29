#include<bits/stdc++.h>
#include"node.cpp"
using namespace std;
int main()
{
	Node<int> A(3);
	Node<int> B(5,&A),C(7,&A);
	Node<int> *D=new Node<int>(10,&B);
	Node<int> *E=new Node<int>(12,D);
	B.setElem(15);
	B.setNext(&C);
	for(Node<int>*p=E;p;p=p->getNext()) cout<<p->getElem()<<" ";
}


