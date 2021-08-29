#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> lists ;
	set<int> s;
	int n , x;
	cin>>n;
	for(int i = 0 ; i < n ; ++i){
		cin>>x;
		lists.push_back(x);
		s.insert(x);
	}
	cout<<"Can Xoa It Nhat "<<lists.size() - s.size() <<" phan tu";
}

