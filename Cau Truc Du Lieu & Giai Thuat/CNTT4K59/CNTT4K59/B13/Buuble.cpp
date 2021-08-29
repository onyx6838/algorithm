//Bubble sort
#include<bits/stdc++.h>
using namespace std;
template <class T>
void Swap(T &a,T&b) {T t=a;a=b;b=t;}
bool ss(int a,int b) {return a>b;}
bool chanle(int a,int b) {if((a-b)%2==0) return a<b; else return a%2<b%2;}
template <class T>
void Bubble(T *L,T *R,bool cmp(T,T)) //sap xep tu L toi vi R-1
{
	for(T *p=L;p<R;p++)
	for(T *q=R-1;q>p;q--)
	if(cmp(*q,*(q-1))) Swap(*q,*(q-1));
}
int main()
{
	int a[]={4,7,2,8,1,6,9,3,5},n=sizeof(a)/sizeof(int);
	Bubble(a,a+n,chanle);
	cout<<"\nDay sau khi sap xep \n";
	for(int x:a) cout<<x<<" ";
}


