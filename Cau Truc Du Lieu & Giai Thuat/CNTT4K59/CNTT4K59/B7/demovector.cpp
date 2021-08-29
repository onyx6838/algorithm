#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> V(3,5);
	V.push_back(4);
	V.push_back(8);
	V.push_back(3);
	V.resize(8);
	cout<<"\nSize "<<V.size();			//So phan tu luu hien thoi
	cout<<"\nCapacity "<<V.capacity();  //Kha nang chua
	cout<<"\nThong tin hien thoi : ";
	//Duyet C++11 
	for(auto x:V) cout<<x<<" ";
	//Duyet truyen thong
	cout<<"\n";
	for(int i=0;i<V.size();i++) cout<<V.at(i)<<" "; //V.at(i) ~ V[i]
	//Duyet thong qua bo lap xuoi (contro)
	cout<<"\n";
	for(/*vector<int>::iterator*/auto it=V.begin();it!=V.end();it++)
	cout<<*it<<" "; 
	//Duyet thong qua bo lap nguoc (contro)
	cout<<"\n";
	V.pop_back(); //loai bo phan tu cuoi
	for(vector<int>::reverse_iterator it=V.rbegin();it!=V.rend();it++)
	cout<<*it<<" "; 
	cout<<(V.empty()?"\nVector rong":"\nVec to co phan tu");
}


