#include<bits/stdc++.h>
#include<vector>
#include<set>
using namespace std;

int main()
{
 	int n ;
 	cin>>n;
 	int a;
 	vector<int> V;
 	for(int i=0;i<n;i++)
 	{
 		cin>>a;
 		V.push_back(a);
	 }
	 set<int> S;
	 
	 for(int x: V)
	 S.insert(x);
	 
	  cout<<"can xoa so phan tu :"<< V.size()- S.size();
	 
 	
}

