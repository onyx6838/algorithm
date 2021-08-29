#include<bits/stdc++.h>
using namespace std;
class Tre
{
	public:
	int Elem;
	Tre *Left,*Right;
	Tre(int x,Tre *L=0,Tre *R=0) {Elem=x,Left=L,Right=R;} //Ham tao	
};
void Insert(Tre *&T,int x)
{
	if(T==0) {T=new Tre(x); return;}
	if(x<T->Elem) 
	{
		if(T->Left==0) T->Left=new Tre(x);
		else Insert(T->Left,x);
	}
	else
	{
		if(T->Right==0) T->Right=new Tre(x);
		else Insert(T->Right,x);
	}
}
int Max(Tre *T){return T->Right?Max(T->Right):T->Elem;}
int Min(Tre *T){return T->Left?Min(T->Left):T->Elem;}
void Remove(Tre *&T,int x)
{
	if(T==0) return;
	if(T->Elem>x) return Remove(T->Left,x);
	if(T->Elem<x) return Remove(T->Right,x);
	if(T->Left==0) T=T->Right;
	else 
	{
		int k=Max(T->Left);
		T->Elem=k;
		Remove(T->Left,k);
	}
}
int main()
{
	Tre *T=0;
	int n,x,g,k;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&x);
		Insert(T,x);
		if(i%2==0 && x<T->Elem) 
		{
			k=Max(T->Left);
			Insert(T->Right,T->Elem);
			T->Elem=k;
		}
		else if(i%2==1 && i>1 && x>T->Elem)
		{
			k=Min(T->Right);
			Insert(T->Left,T->Elem);
			T->Elem=k;
		}
		printf("%d ",T->Elem);
	}
}


