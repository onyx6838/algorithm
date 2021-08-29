#include<bits/stdc++.h>
using namespace std;
struct Tre
{
	int f;
	Tre *Left,*Right,*Far;
	Tre(int t,Tre *L = 0, Tre *R = 0,Tre *F=0)
	{
		f=t; Left = L; Right = R; Far = F;
	}
};
void outcode(Tre *t)
{
	if(t->Far)	
	{
		outcode(t->Far); // neu co cha thi in ra
		cout<<(t==t->Far->Left?"0":"1");	// co con trai phai thi in them 0 vs trai 1 vs phai
	}
}
int deepth(Tre *t)
{
	return t->Far?deepth(t->Far)+1:0;
}
struct cmp
{
	bool operator()(Tre *u,Tre *v)
	{
		return u->f > v->f;
	}// ham lay tu be den lon
};
int main()
{
	string s = "DAIHOCGIAOTHONGVANTAI";
	map<char,int> M;
	for(char c:s)	M[c]++;
	//for(auto t:M)	cout<<"\n"<<t.first<<" ts "<<t.second;
	Tre *A[1000]	= {}; // mang cac node ban dau` toan` NULL
	//chi luu dia chi cua node 
	priority_queue<Tre*,vector<Tre*>,cmp> 	Q;//hang doi uu tien xay dung cay
	for(auto t:M)
	{
		A[t.first] = new Tre(t.second);
		Q.push(A[t.first]);
	}
	while(Q.size()>=2)	// tao cay khi con` >2 thi phai ghep'
	{
		Tre *u = Q.top();	Q.pop();
		Tre *v = Q.top();	Q.pop();
		Tre *z = new Tre(u->f + v->f,u,v);	// tan suat la tong u.f+v.f va con trai u con phai v
		u->Far = v->Far = z;
		Q.push(z);
	}
	for(auto t:M)
	{
		cout<<"\n"<<t.first<<" co ma : ";
		outcode(A[t.first]);
	}
	int d = 0;
	for(auto t:M)	d+=deepth(A[t.first])* t.second;
	cout<<"\nTong so bit sau khi nen"<<d;
}
