#include"iostream"
#include"conio.h"
#include"BTree.cpp"
using namespace std;
void visit(BNode<int,char*>*p)
{
	cout<<p->getElem()<<" ";
}
int main()
{
	BTree<int,char*> tree;
	BNode<int,char*> *p;
	//BNode<int,float> *p
	system("cls");
	tree.insert(100,"100-1");
	tree.insert(70,"70a");
	tree.insert(150,"150x");
	tree.insert(120,"120-y");
	tree.inOrder(tree.getRoot(),visit);
	//		cout<<"\n";
	//		tree.postOrder(tree.getRoot(),visit);
	//tree.remove(150);
	cout<<"\n";
	//		tree.inOrder(tree.getRoot(),visit);
	p=tree.search(120,tree.getRoot());
	if(p!=NULL)
		cout<<"Tim thay khoa 120, Co gia tri "<<p->getElem();
	else
		cout<<"Khong tim thay khoa 120. ";
	tree.remove(120);
	tree.remove(100);
//	tree.remove(70);
	cout<<"\nDuyet cay theo thu tu giua: ";
	tree.inOrder(tree.getRoot(),visit);
	getch();
	return 0;		
}
