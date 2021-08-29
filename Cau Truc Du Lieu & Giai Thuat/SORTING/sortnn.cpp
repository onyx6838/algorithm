#ifndef SORT_NN_H
#define SORT_NN_H 1
#include"iostream"
#include"Array.cpp"
#include"conio.h"
template<class T>
void Swap(T &a,T &b)
{
	T tg=a;
	a=b;
	b=tg;
}

template<class T>
void BubbleSort(T *a,int n,int (*comp)(T,T))
{
	int i,j;
	for(i=0;i<n-1;i++)
		for(j=n-1;j>i;j--)
			if(comp(a[j],a[j-1]))
				Swap(a[j],a[j-1]);
}

template<class T>
void SelectionSort(T *a,int n,int (*comp)(T,T))
{
	int i,j,min;
	for(int i=0;i<=n-2;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
			if(comp(a[min],a[i]))	min=j;
		if(min!=i)
			Swap(a[i],a[min]);
	}	
}

template<class T>
void InsertionSort(T *a,int n,int (*comp)(T,T))
{
	T x;
	int i,j;
	for(i=1;i<=n-1;i++)
	{
		j=i-1;
		x=a[i];
		while(comp(a[j],x) && j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=x;
	}
}
#endif

