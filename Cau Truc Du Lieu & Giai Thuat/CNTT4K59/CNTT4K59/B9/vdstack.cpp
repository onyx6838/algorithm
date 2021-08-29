#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
	stack<int> S;
	for(int i=1;i<=5;i++) S.push(i);
	while(S.size())
	{
		cout<<S.top()<<" ";
		S.pop();
	}
}


