#include<bits/stdc++.h>
#include<queue>
using namespace std;
struct ss
{
	bool operator()(int x,int y)
	{
		if(x%2==y%2) return x>y;	// uu tien be truoc lon sau
		return x%2>y%2;
	}
};
int main()
{
	int a[] = {4,7,2,8,4,8,3,2};
//	priority_queue<int> PQ;		//uu tien lon den be
//	priority_queue<int,vector<int>,greater<int>	  > PQ;	// uu tien tu be den lon (greater)
// 	greater la ham co san
	priority_queue<int,vector<int>,ss> PQ;	// truyen` ham ss ( chan trc le sau)
	//Hang doi uu tien
	for(int x:a) PQ.push(x);
	while(PQ.size())
	{
		cout<<PQ.top()<<" ";
		PQ.pop();
	}
}

