#include<iostream>
using namespace std;
int tach(int n)
{
	if(n<=4 || n%2)	return 1;	// 2 nhom chenh nhau 4 ng
	return tach(n/2+2)	+ tach(n/2-2);	// de quy ve 2 ben ( 2 con cua goc)
}
void inorder(int n,string s="\n")
{
	if(n<=4 || n%2)	cout<<s<<n;	// k chia dc
	else
	{
		inorder(n/2+2,s + "\t");	// in ra lui` vao 1 tab
		cout<<s<<n;	// nut cha
		inorder(n/2-2,s + "\t");	// xuong dong va 1 tab lui`
	}
}
int main()
{
	int n;
	printf("Nhap vao so nguoi: ");scanf("%d",&n);
	printf("So nhom can tim %d",tach(n));
	inorder(n);
}

