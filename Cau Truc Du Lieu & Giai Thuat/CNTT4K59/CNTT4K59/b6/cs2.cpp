//Doi co so
#include<bits/stdc++.h>
using namespace std;
void cs2(int n)
{
	if(n<2) cout<<n;
	else
	{
		cs2(n/2);
		cout<<(n%2);
	}
}
string doi(int n)
{
	if(n==0) return "0";
	if(n==1) return "1";
	return doi(n/2)+(n%2?"1":"0");
}
int main()
{
	//cs2(173);
	cout<<doi(173);
}


