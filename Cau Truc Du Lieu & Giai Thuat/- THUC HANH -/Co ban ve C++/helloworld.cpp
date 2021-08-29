#include"iostream"
#include"string.h"
using namespace std;
string hoa(string t)
{
	int lt=t.length();
	for(int i=0;i<=lt;i++)
	{
		if(t[i]>='a' && t[i]<='z')	t[i]-=32;
	}
	return t;
}
string thuong(string t)
{
	int lt=t.length();
	for(int i=0;i<=lt;i++)
	{
		if(t[i]>='A' && t[i]<='Z') t[i]+=32;
	}
	return t;
}
int main()
{
	string h;
	getline(cin,h);
	string s=hoa(h);
	cout<<s;
	string z=thuong(h);
	cout<<"\n"<<z;
}
