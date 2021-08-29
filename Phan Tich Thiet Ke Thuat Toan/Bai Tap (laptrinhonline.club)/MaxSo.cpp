#include<bits/stdc++.h>
using namespace std;
int len;
string a,b;
string mx = "", mn = "9999999999999999999999";
void Try(int x,int y,string s)
{
	if(s.size() ==len)
	{
		mx = max(mx,s);
		mn = min(mn,s);
		return;
	}
	if(x < a.size())
	{
		Try(x+1,y,s+a[x]);
	}
	if(y< b.size())		Try(x,y+1,s+b[y]);
}
int main()
{
	cin>>a>>b;
	len = a.length() + b.length();
	Try(0,0,"");
	cout<<mn << "\n"<<mx;
}

