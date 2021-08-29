//Hop le cua dau ngoac
#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<char>S;
	string x;
	cout<<"Nhap vao bieu thuc:(())"; cin>>x;
	bool ok=true;
	for(char c:x)
	if(c=='(' || c=='[' || c=='{') S.push(c);
	else if(c==')')
	{
		if(S.empty() || S.top()!='(') {ok=false;break;}
		S.pop();
	}
	else if(c==']')
	{
		if(S.empty() || S.top()!='[') {ok=false;break;}
		S.pop();
	}
	else if(c=='}')
	{
		if(S.empty() || S.top()!='{') {ok=false;break;}
		S.pop();
	}
	cout<<(ok?"Hop le":"Sai dau ngoac");
}


