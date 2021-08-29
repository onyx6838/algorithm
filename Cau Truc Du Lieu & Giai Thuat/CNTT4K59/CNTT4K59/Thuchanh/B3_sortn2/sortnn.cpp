#ifndef SORT_NN_H
#define SORT_NN_H 
#include"array.cpp"
template <class T>
void Swap(T &a, T &b)
{
    T tg =a;
    a= b;
    b=tg;
}
template <class T>
void BubbleSort(T *a, int n, int comp(T,T))
{
	for(int i=0;i<n-1;i++)
	for(int j=n-1;j>i;j--)
    if(comp(a[j],a[j-1])) Swap(a[j],a[j-1]);			  		  
}
template<class T>
void SelectionSort(T *a,int n, int comp(T,T))
{
    for(int i=0;i<=n-2;i++)
	{ 
        int min=i;
        for(int j=i+1;j<n;j++)
        if(comp(a[min],a[j])) min=j;
		Swap(a[i],a[min]);
    }
}
template<class T>
void InsertionSort(T *a,int n, int comp(T,T)){
    for(int i=1; i<=n-1;i++) 
	{
    	int j = i-1;
        T x = a[i];
        while(comp(a[j],x) && j>=0) a[j+1]=a[j--];
        a[j+1]= x;
    }      
}
#endif

