//Tham so mac dinh
#include<bits/stdc++.h>
using namespace std;

int tong(int a=3,int b=7); //Khai bao nguyen mau
int main()
{
	int x=2,y=5;
	cout<<"\n"<<tong(x,y);  //2+5
	cout<<"\n"<<tong(x);    //2+7
	cout<<"\n"<<tong();    //3+7
}

int tong(int a,int b)
{
	return a+b;
}

