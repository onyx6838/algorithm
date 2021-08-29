#include<bits/stdc++.h>
using namespace std;
int main()
{
	//set<int> S;
	multiset<int> S;
	int a[]={543,3432,3,23,546,8,3,543};
	for(auto x:a) S.insert(x);
	for(auto t:S) cout<<t<<" ";

}


