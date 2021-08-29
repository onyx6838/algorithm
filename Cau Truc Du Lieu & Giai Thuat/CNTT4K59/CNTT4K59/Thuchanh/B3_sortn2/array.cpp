#ifndef ARRAY_H
#define ARRAY_H 
#include"iostream"
using namespace std;
template <class T>
void InputArr(T *a, int n, char *c)
{
     for(int i=0;i<n;i++)
	 {
       cout<<c<<"["<<i<<"]=";
       cin>>a[i];
     } 
}
template <class T>
void PrintArr(T *a, int n, char xuongdong)
{
	  for(int i=0;i<n;i++)  cout<<a[i]<<xuongdong;     
}
#endif

