#include"bits/stdc++.h"
#include<map>
#include<unordered_map>
using namespace std;
// Bang Bam hoac dung cay nhi phan tim kiem
int main()
{
	map<string,string> Dic;	//luon luon sap xep tang dan  vi day la cay nhi phan
	Dic["i"] = "toi";
	Dic["you"] = "ban";
	Dic["he"] = "anh ay";
	Dic["love"] = "yeu";
	string s;
	cout<<"Nhap tu can tra: ";
	getline(cin,s);
	if(Dic.find(s)!=Dic.end())
		cout<<s<<" co nghia la "<<Dic[s];
	else 
		cout<<"khong co";
	cout<<"\n\nNoi Dung Tu Dien\n";
	for(auto d:Dic)	cout<<d.first<<" -> "<<d.second<<endl;		
}
