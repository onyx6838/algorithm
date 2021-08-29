//Tham chieu trong C++
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cout<<"Dia chi cua x : "<<&x;
	int &y=x;  //y la bi danh cua x
	cout<<"\nDia chi cua y : "<<&y;
	y=5;
	cout<<"\nx = "<<x;
	y=y+3;
	cout<<"\nx = "<<x;
	
}


