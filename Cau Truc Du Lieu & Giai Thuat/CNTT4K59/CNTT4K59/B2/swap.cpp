#include<bits/stdc++.h>
using namespace std;

template <class T>
void Swap(T &a,T &b)
{
	T x=a;a=b;b=x;
}
int main()
{
	int a=4,b=6; 
	Swap(a,b);
	cout<<"a = "<<a<<"\t"<<"b = "<<b<<endl;

}


