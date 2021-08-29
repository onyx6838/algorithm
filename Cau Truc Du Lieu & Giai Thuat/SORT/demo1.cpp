#include"iostream"
#include"stdio.h"
#include"Sortnlogn.cpp"
#include"Array.cpp"
#include"conio.h"
using namespace std;
int main()
{
	float *a,*b;
	int n;
	system("cls");
	cout<<"Nhap n = ";
	cin>>n;
	a=new float[n];
	//b=new float[n];
	InputArr(a,n,"a");
	system("cls");
	cout<<"Day so QS\n";
	QuickSort(a,1,n);
	PrintArr(a,n,0);
//	cout<<"\nDay so HS\n";
//	HeapSort(a,n);
//	PrintArr(a,n,0);
	return 0;
}
