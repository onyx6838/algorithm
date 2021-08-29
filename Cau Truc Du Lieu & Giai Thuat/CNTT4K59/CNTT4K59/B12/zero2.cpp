#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
	int Elem;
	Node *Far;
	vector<Node *> Child;
	Node(int x) {Elem=x; Far=0;}
};

Node *init(int n)
{
	Node *h=new Node(n);
	if(n!=0)
	{
		for(int a=1;a*a<=n;a++) 
		if(n%a==0) 
		{
			Node *p=init((a-1)*(n/a+1));
			h->Child.push_back(p);
			p->Far=h;	
		}
	}	
	return h;
}
//
void preorder(Node *h) //Duyet tien thu tu 
{
	if(h==NULL) return;
	cout<<h->Elem<<" ";
	for(int i=0;i<h->Child.size();i++) preorder(h->Child[i]);  //for(auto t:h->Child) preorder(t);
}
void postorder(Node *h) //Duyet hau thu tu 
{
	if(h==NULL) return;
	for(auto t:h->Child) postorder(t);
	cout<<h->Elem<<" ";
}
void inorder(Node *h) //Duyet trung thu tu 
{
	if(h==NULL) return;
	if(h->Child.size()>0) inorder(h->Child[0]);//con ca
	cout<<h->Elem<<" ";
	for(int i=1;i<h->Child.size();i++) inorder(h->Child[i]);
}
int high(Node *h)
{
	if(h==NULL) return 0;
	if(h->Child.size()==0) return 0;
	int MAX=0;
	for(auto c:h->Child) 
	{
		int k=high(c);
		if(MAX<k) MAX=k;
	}
	return MAX+1;
}
void induong(Node *p)
{
	if(p->Far==0) cout<<p->Elem;
	else {induong(p->Far); cout<<"->"<<p->Elem;}
}
bool Find(Node *h,int f) //Tim duong di tu goc den f tren cay h
{
	if(h->Elem==f) 
	{
		induong(h); 
		return true;
	}
	if(h->Elem<f) return false;
	for(auto t:h->Child) if(Find(t,f)) cout<<"\n";
}
int main()
{
	Node *h=init(36);
	cout<<"\nDuyet cay theo tien thu tu:\n"; preorder(h);
	cout<<"\nDuyet cay theo trung thu tu:\n"; inorder(h);
	cout<<"\nDuyet cay theo hau thu tu:\n"; postorder(h);
	cout<<"\nChieu cao cay la "<<high(h);
	cout<<"\nCac duong di den 10:\n"; Find(h,10);
}


