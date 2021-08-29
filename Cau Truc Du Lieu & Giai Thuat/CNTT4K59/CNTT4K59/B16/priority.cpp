//Hang doi uu tien
#include<bits/stdc++.h>
#include<queue>
using namespace std;
struct ss
{
	bool operator()(int a,int b)
	{
		if((a-b)%2==0) return a>b;
		return a%2>b%2;
	}
};
int main()
{
//	priority_queue<int> Q;  //hang doi uu tien lon
	priority_queue<int,vector<int>,ss> Q;  //hang doi uu tien be
	int a[]={543,3432,3,23,546,8};
	for(auto x:a) Q.push(x);
	while(Q.size())
	{
		cout<<Q.top()<<" ";
		Q.pop();
	}
}


