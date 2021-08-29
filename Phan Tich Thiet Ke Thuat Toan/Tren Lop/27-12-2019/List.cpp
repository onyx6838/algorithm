// Tinh giai thua cho so lon dung list
#include"iostream"
#include<list>
using namespace std;

int main()
{
	int n;
	list<int> L(1,1);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int nho = 0;
		for(auto it=L.rbegin();it!=L.rend();it++)
		{
			nho+=*it*i;
			*it = nho % 100;
			nho/=100;
		}
		while(nho)
		{
			L.push_front(nho%100);
			nho/=100;
		}
//		while(L.back()==0)
//		{
//			dem++;
//			L.pop_back();
//		}
	}
	for(auto it=L.begin();it!=L.end();it++)
	{
			if(*it < 10 && it!=L.begin())	cout<<'0'<<*it;
			else cout<<*it;
	}	
	
	//for(auto c:L)	printf("%.1d",c);
//	for(auto c:L)	cout<<c;
//	cout<<string(dem,'0');
}

		// moi 1 node la 1 chu so
//		for(auto it=L.rbegin();it!=L.rend();it++)
//		{
//			nho+=*it*i;
//			*it = nho % 10;
//			nho/=10;
//		}
//		while(nho)
//		{
//			L.push_front(nho%10);
//			nho/=10;
//		}

	//	moi 1 node la 2 chu so
	
	//Cai tien code bang cach cho cac so 0 ra ngoai roi in lai
