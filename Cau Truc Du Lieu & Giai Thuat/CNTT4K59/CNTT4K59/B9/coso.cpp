//Doi co so
#include<bits/stdc++.h>
using namespace std;
int k=16;
char HEX[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main()
{
	int n;
	cout<<"Nhap n = "; cin>>n;
	cout<<"\nn o co so 16 la "; printf("%X",n);
	stack<char> S;
	while(n)
	{
		S.push(HEX[n%k]);
		n/=k;
	}
	cout<<"\nSo n trong co so k\n";
	while(!S.empty())
	{
		cout<<S.top();
		S.pop();
	}
}


