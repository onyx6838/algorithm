#include<bits/stdc++.h>
using namespace std;
map<char,int> M={{'H',1},{'C',12},{'O',16},{'(',0}};
int main()
{
	int k=0;
	string e;
	stack<int> S;
	cout<<"nhap cong thuc:";cin>>e;
	for(char c:e)
	{
	 	if(M.find(c)!=M.end())
	 	{
	 		if(c!='(' && c!=')') k+=M[c];
	 		else
	 		{
	 			S.push(k); 
				k=0;           
			}
	 	}
		else if(c!=')' && M.find(c)==M.end()) S.top()*=c-'0';//doi tu ki tu ve so
		if(M.find())
	}
	int t=0;
	while(S.size())
	{
		t+=S.top();S.pop();
	}
	cout<<"khoi luong cua hoa chat:"<<t;
}
