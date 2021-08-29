#include<bits/stdc++.h>
using namespace std;
struct Tre
{
	int elem,a,b;
	Tre *L,*R;
	Tre(int u,int v,Tre *T= 0,Tre *P= 0)
	{
		a=u;
		b=v;
		elem = 0;
		L=T;
		R=P;
	}
};
Tre *create(int u,int v)
{
	return u==v ? new Tre(u,v) : new Tre(u,v,create(u,(u+v)/2),create((u+v)/2+1,v));
	// not la thi k dung ham tao con k se tao 2 con trai va phai
//	if(u<v)
//	{	giai thich
//		T->L = create(u,(u+v)/2);
//		T->R = create(u,(u+v)/2);
//	}
}
long long res = 0;
void update(Tre *&T,int x)
{
	T->elem++;
	if(T->L)
	{
		if(x <= T->L->b)	
		{
			// ben trai thi + don` ben phai cung cap va cap nhat lai gia tri (so lan)
			// rot 
			res+= T->R->elem;
			update(T->L,x);	
		}
		else	update(T->R,x);
	}
}
int main()
{
	int n,x;
	scanf("%d",&n);
	Tre *T = create(1,n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&x);
		update(T,x);
	}
	printf("%lld",res);
}

