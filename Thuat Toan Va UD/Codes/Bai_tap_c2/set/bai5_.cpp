#include<bits/stdc++.h>
using namespace std;

int cylicWord(string word) {
	set<string> S;
	for (int i = 0; i < word.length(); ++i)
	{
		S.insert(word);
		word = word.back() + word;
		word.pop_back();
	}
	for (auto it: S) cout << it << "\t";
	
	return S.size();
}

int main()
{
	vector<string> s={"watermelon","apple","apple","orange"};
	set<string> se;
	for(int i=0;i<s.size();i++)
		se.insert(s[i]);
	for(auto it:se)
		cout<<it<<" ";
}

