#include"bits/stdc++.h"
#include<vector>
using namespace std;

int main()
{
	vector<int> A(7,3);
	cout<<"Kha nang luu "<<A.capacity();
	cout<<"\nDung luong "<<A.size()<<endl;
	for(int x:A)	cout<<x<<" ";	//C++11
	A.resize(4);
	cout<<"\nKha nang luu "<<A.capacity();
	cout<<"\nDung luong "<<A.size()<<endl;
	A.push_back(6);
	A.push_back(2);
	for(int x:A)	cout<<x<<" ";
	// pop_back de xoa
	cout<<"\nDuyet theo size\n";
	for(int i=0;i<A.size();i++)	cout<<A.at(i)<<" ";	// A[i] ~ A.at(i)
	// Duyet theo chieu xuoi k dung auto
	cout<<"\nDuyet theo chieu xuoi:\n";
	for(vector<int>::iterator it=A.begin();it!=A.end();it++)
		cout<<*it<<" ";
	cout<<"\nDuyet chieu ngc lai\n";
	for(vector<int>::reverse_iterator it=A.rbegin();it!=A.rend();it++)	
		cout<<*it<<" ";
	cout<<"\nDuyet nhung thay = auto (kieu cua bien phu thuoc vao du lieu dang chua)\n";
	for(auto it=A.begin();it!=A.end();it++)	
		cout<<*it<<" ";
	sort(A.begin(),A.end());
	cout<<"\nSau khi sap xep\n";
	
	for(auto it=A.begin();it!=A.end();it++)	
		cout<<*it<<" ";
		
}

