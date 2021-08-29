//Ham tao
#include<bits/stdc++.h>
using namespace std;
struct ps
{
	int t,m;
	ps(int x=0,int y=1) //Ham tao
	{
		t=x;m=y;
	}
	//ps(){t=0;m=1;}
};
int main()
{
	ps p(2,3);   //Goi ham tao phan so 2/3
	ps *q=&p;// new ps(3,4); //Con tro tao ra doi tuong moi
	cout<<p.t<<"/"<<p.m<<"\n";
	cout<<q->t<<"/"<<q->m<<"\n";
	ps z;
	cout<<z.t<<"/"<<z.m<<"\n";
}


