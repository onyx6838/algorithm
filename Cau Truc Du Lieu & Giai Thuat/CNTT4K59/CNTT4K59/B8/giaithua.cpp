//Giai thua
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	list<int> L(1,1);//Khoi tao 1 phan tu la 1;
	cout<<"Nhap n = "; cin>>n;
	while(n>0)
	{
		int nho=0;
		for(auto t=L.rbegin();t!=L.rend();t++)
		{
			nho+=*t*n;
			*t=nho%10;
			nho/=10;
		}
		while(nho) 
		{
			L.push_front(nho%10);
			nho/=10;
		}
		n--;
	}
	cout<<"Giai thua : ";
	for(auto t:L) cout<<t;

}


