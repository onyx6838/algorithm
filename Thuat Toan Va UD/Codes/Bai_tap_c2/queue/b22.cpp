#include<bits/stdc++.h>
using namespace std;
void b22(string s[],int n){
	map<string, pair<int,int>> mp;
	int max=0;
	for(int i=0;i<n;i++){
		if(mp[s[i]].second==0)
			mp[s[i]].first=i,
			mp[s[i]].second=1;
		else{
			if(max<i-mp[s[i]].first) max=i-mp[s[i]].first;
		}
	}
	cout<<max;
}
bool B23(vector<int> arr,int sum)
{
	map<int,int> MAP;
	for(auto x : arr)
	MAP[x]++;
	for(auto x : arr)
	{
		if(MAP[sum-x] >= 1)
		{
			if(x != sum-x || (x == sum-x && MAP[x] >1))
			return true;
		}
	}
	return false;
}
int main()
{
//	string s[]={"a","b","c","a","c","b"};
	vector<int> arr ={3,-1,3,9,8};
	cout<<B23(arr,6);
//	b22(s,sizeof(s)/sizeof(s[0]));
	return 0;
}


