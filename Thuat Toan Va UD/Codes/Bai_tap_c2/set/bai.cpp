#include<bits/stdc++.h>
using namespace std;

int main()
{
	set<char> S;
	vector<string> words = {"ad", "aa", "aaa","aabb","bab","baabbc","ab","ba"};
	for(string str : words){
		for(char c : str){
			S.insert(c);
		}
	}
	cout<<S.size();
}

