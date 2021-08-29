//Cai dat bo lap vector
#include<bits/stdc++.h>
#include"Vector.cpp"

#ifndef __itera__cpp__
#define __itera__cpp__
using namespace std;
template <class T>
class Iterator
{
	T *curr;	
	public:
		void operator++(int)
		{
			curr++;
		}
		T operator*()
		{
			return *curr;
		}
		bool operator!=(T *p)
		{
			return curr!=p;
		}
		void operator=(T *p)
		{
			curr=p; 
		}
};
#endif

