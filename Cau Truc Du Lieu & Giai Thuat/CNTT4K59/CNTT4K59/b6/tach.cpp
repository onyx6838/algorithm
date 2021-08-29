#include<bits/stdc++.h>
using namespace std;
//int tach(int n)
//{
//	return n%2||n<5?1:tach(n/2+2)+tach(n/2-2);
//}
void ve(int n,string p="")
{
	if(n%2||n<5) cout<<p<<n<<"\n";
	else
	{
		ve(n/2+2,p+"\t");
		cout<<p<<n<<"\n";
		ve(n/2-2,p+"\t");
	}
}
int main()
{
//	cout<<tach(108);
	ve(108);
}


