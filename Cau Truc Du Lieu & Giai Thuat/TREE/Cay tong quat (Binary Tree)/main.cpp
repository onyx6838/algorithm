#include"conio.h"
#include"stdio.h"
#include"iostream"
#include"BTree.cpp"
using namespace std;
void pri(BTreeNode<int> *p)
{
	cout<<p->getElem()<<" ";
}
float t;
void tinhtong(BTreeNode<int> *p)
{
	t=t+p->getElem();
}
int main()
{
	BTree<int> tree;
	BTreeNode<int> *p;
	//Tao cay
	p=tree.insert(NULL,100);
	p=tree.insert(tree.getRoot(),10);
	tree.insert(p,9);
	tree.insert(p,8);
	p=tree.insert(tree.getRoot(),20);
	//Duyet cay
	cout<<"Duyet theo thu tu truoc: ";
	tree.preOrder(tree.getRoot(),pri);
	cout<<"\nDuyet theo thu tu giua: ";
	tree.inOrder(tree.getRoot(),pri);
	cout<<"\nDuyet theo thu tu sau: ";
	tree.postOrder(tree.getRoot(),pri);
	//Tinh tong tat ca ca nut tren cay
//	t=0;
	tree.postOrder(tree.getRoot(),tinhtong);
	cout<<"\nTong cac nut tren cay= "<<t;
	tree.remove();
	cout<<"\nDuyet theo thu tu giua: ";
	tree.inOrder(tree.getRoot(),pri);
	getch();
	return 0;
}
