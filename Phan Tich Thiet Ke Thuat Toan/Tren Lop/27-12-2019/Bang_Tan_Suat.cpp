#include"bits/stdc++.h"
using namespace std;
// Cay tim kiem nhi phan
int main()
{
	map<char,int> M;
	string s;
	cin>>s;
	for(auto c:s)	M[c]++;
	cout<<"\nbang Tan Suat\n";
	for(auto d:M)	cout<<d.first<<" -> "<<d.second<<endl;
}
