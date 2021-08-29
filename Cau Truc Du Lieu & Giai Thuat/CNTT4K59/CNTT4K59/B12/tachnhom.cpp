//Tach nhom
#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
	int Elem;
	Node*Left,*Right;
	Node(int n)
	{
		Elem=n;
		if(n%2 || n<=4) {Left=Right=NULL;}
		else {Left=new Node(n/2-2); Right=new Node(n/2+2);}
	}
};
void Pre_Order(Node *H)
{
	if(!H) return;
	cout<<H->Elem<<" ";
	Pre_Order(H->Left);
	Pre_Order(H->Right);
}
void InOrder(Node *H,string p="     ")
{
	if(!H) return;
	InOrder(H->Left,p+"       ");
	cout<<p<<H->Elem<<"\n";
	InOrder(H->Right,p+"       ");
}
int SoNhom(Node *H)
{
	if(H==NULL) return 0;
	if(H->Left==NULL && H->Right==NULL) return 1;
	return SoNhom(H->Left)+SoNhom(H->Right);
}
int main()
{
	Node*H=new Node(60);
	cout<<"\nCay tien thu tu:\n\n";Pre_Order(H);
	cout<<"\nCay trung thu tu:\n\n";InOrder(H);
	cout<<"\nSo nhom cuoi cung "<<SoNhom(H);
}


