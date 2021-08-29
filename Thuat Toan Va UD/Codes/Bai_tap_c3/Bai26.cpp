#include<bits/stdc++.h>
using namespace std;
vector<int> product(vector<string> A, vector<string> B){
	map<string, int> m;
	for(auto x:A)
		m[x]++;
	vector<int> v;
	for(auto x:B){
		if(m[x] == 0){
			v.push_back(true);
			m[x]++;
		}
		else 
			v.push_back(false);
	}
	return v;
}
int main()
{
	vector<string> A = {"Banana", "Banana", "Apple"};
	vector<string> B = {"Orange", "Apple", "Banana", "Watermelon"};
	vector<int> v = product(A, B);
	for(auto x:v)
		cout<<x<<" ";
}


