#include<bits/stdc++.h>
using namespace std;
string K(string str)
{
	string res="";
	set<char> C;
	for(char c:str) C.insert(c);
	for(auto t:C) res+=t;
	return res;
}
int main()
{
	set<string> S;
	string words[]={"a","aa","aaa","ab","abb"};
	for(string str:words) S.insert(K(str));
	cout<<S.size();
}

