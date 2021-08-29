#include"iostream"
#include"conio.h"
#include"sortnn.cpp"
#include"array.cpp"
using namespace std;
int compare0(float x, float y)
{
	if(x<y)
		return 1;
	else
		return 0;	
}
int compare1(float x,float y)
{
	if(x>y)
		return 1;
	else
		return 0;	
}
int main()
{
	float *a;
	int n;
	system("cls");
	cout<<"Nhap n";
	cin>>n;
	a = new float[n];
	InputArr(a,n,"a");
	system("cls");
	cout<<"Day so ban dau";
	PrintArr(a,n,0);
	BubbleSort(a,n,compare0);
	//SelectionSort(a,n,compare1);
	//InsertionSort(a,n,compare);
	//cout<<"Day so duoc sep";
	cout<<"\nDay tang dan: ";
	PrintArr(a,n,0);
	InsertionSort(a,n,compare0);
	cout<<"\nDay giam dan: ";
	PrintArr(a,n,0);
	getch();
	return 0;
}
