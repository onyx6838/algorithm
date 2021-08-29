#include<iostream>
#include"Vector.cpp"
#include"Iterator.cpp"
using namespace std;
int main()
{
	Vector<float> V;
	for(int i=1;i<10;i++) V.push_back(i*i);
	cout<<"\nDu lieu ban dau\n"; for(int i=0;i<V.size();i++) cout<<V[i]<<" ";
	V.insert(4,5);
	cout<<"\nDu lieu sau chen\n"; for(int i=0;i<V.size();i++) cout<<V[i]<<" ";
	V.remove(6);
	cout<<"\nDu lieu sau chen\n"; for(int i=0;i<V.size();i++) cout<<V[i]<<" ";
	//Dung bo lap de xuat
	cout<<"\nDu lieu xuat bang bo lap \n";
	Iterator<float> it;
	for(it=V.begin();it!=V.end();it++) cout<<*it<<" ";
}


