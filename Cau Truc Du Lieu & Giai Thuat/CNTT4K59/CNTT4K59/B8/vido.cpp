#include<bits/stdc++.h>
#include<list>
using namespace std;
int main()
{
	list<int> L;
	for(int i=1;i<=10;i++) i%2?L.push_front(i):L.push_back(i);
//	cout<<"\nDanh sach : ";	for(auto x: L) cout<<x<<" ";
//	L.pop_front();
//	cout<<"\nDanh sach : ";	for(auto x: L) cout<<x<<" ";
//	L.pop_back();
//	cout<<"\nDanh sach : ";	for(auto x: L) cout<<x<<" ";
	cout<<"\nDanh sach xuoi : ";
	for(list<int>::iterator it=L.begin();it!=L.end();it++) cout<<*it<<" "; 	
	cout<<"\nDanh sach nguoc : ";
	for(list<int>::reverse_iterator it=L.rbegin();it!=L.rend();it++) cout<<*it<<" "; 	
}


