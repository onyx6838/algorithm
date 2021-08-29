#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s = "DAIHOCGIAOTHONGVANTAI";
	map<char,int> M;
	for(char c:s)	M[c]++;
	for(auto t:M)	cout<<"\n"<<t.first<<" ts "<<t.second;
}

