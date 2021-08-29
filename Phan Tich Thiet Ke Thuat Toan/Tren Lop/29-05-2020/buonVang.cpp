#include<bits/stdc++.h>
using namespace std;
//O(n)
int main()
{
	int n,a[100005];
	cin>>n;
	for(int i=1;i<=n;i++)	cin>>a[i];
	int res = 0, Max = a[n];
	for(int i=n;i>=1;i--)
	{
		if(a[i] > Max) 	Max=a[i];	// k lai~
		else	res += Max-a[i];	// lai~ + vao res	 ( < max thi cong vao res max-a[i])
	}	
	cout<<res;
}
