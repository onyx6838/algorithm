/*
MultiSet
- insert ( them vao (giong van them vao) )
- Xoa tat ca gia tri k neu dung erase(k) 
- Dung find va auto de xoa ptu o 1 vi tri neu co nhieu so giong nhau
*/
#include<bits/stdc++.h>
#include<set>
using namespace std;

int main()
{
	int a[] = {4,7,2,8,4,8,8,3,2};
	multiset<int,greater<int> > S;	// lon' -> be'
	// giong cay nhi phan tim kiem BTS
	for(int x:a)	S.insert(x);
	// insert (neu co thi van them)
	cout<<"\nMultiSet sau khi tao: ";
	for(auto t:S)	cout<<t<<" ";
	
	// xoa di phan tu 
	int k=8;
	//S.erase(k);	//xoa gia tri
	auto z = S.find(k);
	//multiset<int>::iterator z = S.find(k);
	if(z!=S.end())	S.erase(k);		// xoa con tro? tro? toi' chi xoa 1 gia tri
	cout<<"\nMultiSet sau khi xoa k: ";
	for(set<int>::iterator it=S.begin();it!=S.end();it++)	cout<<*it<<" ";
	// duyet theo bo lap
}
