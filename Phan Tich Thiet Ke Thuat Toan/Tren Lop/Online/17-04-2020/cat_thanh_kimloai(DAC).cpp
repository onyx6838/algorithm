#include<bits/stdc++.h>
using namespace std;
struct Tre
{
	int a,b,M;
	// a,b 2 can tren duoi cua doan cat
	// M: do dai cua doan bi cat
	Tre *L,*R;
	Tre(int u,int v)
	{
		a  = u, b = v, M = b - a; L=R=0;
	}
};
int update(Tre *&T,int k)	// co the bo & vi truy cap theo dia chi cac node
{
	if(T->L==0)	{T->L=new Tre(T->a,k);T->R=new Tre(k,T->b);}
	// chua co con thi cap nhat can tren va can duoi
	else T->L->b > k ?update(T->L,k):update(T->R,k);
	// co con thi de quy ve 1 ben de chia can tiep
	// ben nao lon hon thi de quy ve ben trai de cat
	// k thi de quy ve ben phai de chia
	return T->M = max(T->L->M, T->R->M);
}
void inorder(Tre *T, string p = "\n")
{
	if(!T)	return;
	inorder(T->L,p + "\t\t");
	cout<<p<<"{"<<T->a<<","<<T->b<<","<<T->M<<"}";
	inorder(T->R,p + "\t\t");
}
int main()
{
	int a[] = {13,8,17,5,9};	// vi tri cat
	Tre *T = new Tre(0,20);	// thanh KL dai` m
	//Tre T(0,20);
	for(int k:a)	cout<<update(T,k)<<" ";
	inorder(T);

//	int n,m;
//	cin>>n>>m;
//	Tre *T = new Tre(0,m);
//	int a[n];
//	for(int i=0;i<n;i++)	cin>>a[i];
//	for(int k:a)	cout<<update(T,k)<<" ";
}

