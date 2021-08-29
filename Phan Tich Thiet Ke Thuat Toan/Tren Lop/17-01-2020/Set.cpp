/*
Set
- insert : them vao (giong thi k them)
- erase : xoa ptu
*/
#include<bits/stdc++.h>
#include<set>
using namespace std;

int main()
{
	int a[] = {4,7,2,8,4,8,3,2};
	//set<int> S;
	//set<int,greater<int> > S; 	// lon' -> be'
	// giong cay nhi phan tim kiem BTS
	for(int x:a)	S.insert(x);
	// insert (neu co thi k them , chua co thi insert)
	cout<<"\nSet sau khi tao: ";
	for(auto t:S)	cout<<t<<" ";
	
	// xoa di phan tu 
	int k=5;
	//S.erase(k);	//xoa gia tri
	auto z = S.find(k);
	//set<int>::iterator z = S.find(k);
	if(z!=S.end())	S.erase(z);		// xoa con tro? tro? toi'
	cout<<"\nSet sau khi xoa k: ";
	for(set<int>::iterator it=S.begin();it!=S.end();it++)	cout<<*it<<" ";
	// duyet theo bo lap
}
