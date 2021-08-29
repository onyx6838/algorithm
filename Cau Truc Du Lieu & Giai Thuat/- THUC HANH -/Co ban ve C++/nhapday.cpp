#include"iostream"
using namespace std;
template<class T>
void nhap(T *&a,int &n)
{
	a=new T[n+1];
	for(int i=0;i<n;i++)
		cin>>a[i];
}
template<class T>
void xuat(T *a,int n)
{
	for(int i=0;i<n;i++)	cout<<a[i]<<" ";
}
int main()
{
	int *a,n;
	cin>>n;
	nhap(a,n);
	xuat(a,n);
}
