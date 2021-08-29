#include<bits/stdc++.h>
#define MAX 20
using namespace std;
class HVL
{
	char x[100] = {};
	int n;
	map<char,int> f;
	void TRY(int k) //gsu da co tu x1 den x(k-1)
	{
		if(k>n)	cout<<x+1<<endl;
		else
		{
			for(auto &t:f)	// do t thay doi -> dia chi
			if(t.second > 0)
			{
				x[k] = t.first;
				t.second--;
				TRY(k+1);
				t.second++;
			}
		}
	}
	public:void sol(){
		string s;
		cin>>s;
		n=s.size();
		for(auto c:s)	f[c]++;
		TRY(1);
	}
};
int main()
{
	HVL H;
	H.sol();
}
