#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> SV;
int main()
{	
	
	string s[]={"dangdungcntt", "tienquanutc", "quang123", "maianh", "nguyenminhduc2820"};
	int n,t;
	cin>>t;
	while(t--)
	{
		queue<
		> Q;	
		for(int i=0;i<5;i++) Q.push({i,1}); //Q.push(make_pair(i,1));
		cin>>n;
		while(n)
		if(Q.front().second>=n) {cout<<s[Q.front().first]<<"\n";n=0;}
		else 
		{
			n-=Q.front().second;
			Q.push({Q.front().first,Q.front().second*2});
			Q.pop();
		}
	}
}
