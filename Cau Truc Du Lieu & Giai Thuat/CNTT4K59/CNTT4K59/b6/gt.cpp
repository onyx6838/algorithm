#include<bits/stdc++.h>
using namespace std;

int gt(int n)
{
	return n==0?1:n*gt(n-1);
}
int main()
{
	cout<<gt(10);

}


