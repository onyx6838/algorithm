#include<bits/stdc++.h>
#include<string>
using namespace std;
string viethoa(string a)
{
	for(auto &x:a) x=toupper(x);
	return a;
}
int main()
{
	string a,b;
	cout<<"Nhap ten a = "; cin.ignore(0); getline(cin,a);
	cout<<"Nhap ten b = "; cin.ignore(0); getline(cin,b);
	if(a==b) cout<<"Giong nhau";
	else if(a<b) cout<<"nho hon";
	else cout<<"lon hon";
	cout<<"\n"<<viethoa(a);
	cout<<"\n"<<viethoa(b);

}


