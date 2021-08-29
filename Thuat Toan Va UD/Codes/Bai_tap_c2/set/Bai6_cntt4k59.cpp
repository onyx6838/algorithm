#include<bits/stdc++.h>

using namespace std;
void diversity (string str ,int k)
{
	set<string> s;
	if(str.size() <k)
	{
		cout<<"impossible";
	}
	else
	{
		for(int i=0;i<str.size();++i)
		{
			s.insert(to_string(str[i]));
		}
		if (s.size() > k) cout<<"0";
		else cout<<to_string(k - s.size());
	}
}
int main()
{
	string str="codelearn";
	int k = 4;
	diversity(str, k);
}

