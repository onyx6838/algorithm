// Duyet  cau trong bai moi con duong ve khong
#include<bits/stdc++.h>
using namespace std;
struct Tre
{
	int n;
	vector<Tre*> Child;
	Tre(int m=0){n=m;}
};
Tre *create(int n)
{
	if(n==0)	return new Tre(); // cay rong n=0
	Tre *T = new Tre();
	for(int a=1;a*a<=n;a++)
	{
		// n%a thi sinh ra con them vao vector dsach cac con
		if(n%a==0)
		{
			T->Child.push_back(create((a-1)*(n/a+1)));
		}
	}	
	return T;	
}
void inorder(Tre *T)	// trung t tu
{
	if(T==0)	return;
	if(T->Child.size())
	{
		inorder(T->Child[0]);
		cout<<T->n<<" ";
		for(int i=1;i<T->Child.size();i++)	inorder(T->Child[i]);
	}
	else cout<<T->n<<" ";
}
void preorder(Tre *T)
{
	if(T)
	{
		cout<<T->n<<" ";
		for(auto c:T->Child)	preorder(c);
	}
}
int main()
{
	Tre *T = create(12);
	cout<<"\nDuyet trung thu tu \n"; inorder(T);
	cout<<"\nDuyet tien thu tu \n"; preorder(T);
}

