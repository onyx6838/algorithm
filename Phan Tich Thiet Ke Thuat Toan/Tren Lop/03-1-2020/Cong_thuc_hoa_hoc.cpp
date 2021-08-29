//Tinh khoi luong hop chat (DUOI 10)
#include<bits/stdc++.h>
using namespace std;
map<char,int> M={{'H',1},{'C',12},{'O',16},{'(',0},{')',0}};
int main()
{
	string e;
	stack<int> S;
	cout<<"Nhap cong thuc:	";cin>>e;
	for(char c:e)
	{
		if(M.find(c)!=M.end())	S.push(M[c]);
		else if(c==')')	// gap dau ngoac thi pop dinh ra ngoai cong vao t roi push lai
		{
			int t=0;
			while(S.top())
			{
				t+=S.top();
				S.pop();	// cho tong t ra ngoai
			}
			S.pop();	// xoa dau ngoac (xoa so 0)
			S.push(t);	// push t vao stack
		}
		else S.top()*=c-'0';	// tru` di ki tu '0' vi stack<int>
	}
	int t=0;
	while(S.size())
	{
		t+=S.top();
		S.pop();	
	}
	cout<<"\nKhoi luong hoa chat: "<<t;	
}
