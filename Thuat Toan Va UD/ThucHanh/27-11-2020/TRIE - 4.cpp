#include<bits/stdc++.h>
using namespace std;

struct node {
	bool isEndOfWord;
	map<char,node*> map;
	node(){isEndOfWord = false;}
};

void add(node *&root, string value)
{
	if(root==nullptr) root = new node();
	node *tmp = root;
	for(char c:value) 
	{
		if(tmp->map[c]==nullptr) tmp->map[c] = new node();
		tmp = tmp->map[c];
	}
	tmp->isEndOfWord = true;
}
node *findPrefix(node *&root, string pre)
{
	if(root==nullptr) return false;
	node *tmp=root;
	for(char c:pre) 
	{
		if(tmp->map[c]==nullptr) return 0;
		tmp=tmp->map[c];
	} 
	return tmp;
}

void print(node *last, string candidate,string pre)
{
	if(last==nullptr) return;
	if(last->isEndOfWord==true) cout << pre+candidate << endl;
	for(auto t:last->map)
	print(t.second, candidate+t.first, pre);
}

int main()
{
	string str[]={"an", "anger", "ankle", "goole", "game"};
	node *root=0;
	for(string s : str) add(root, s);
	cout << "\nNhap tien to:"; string pre; cin >> pre;
	
	node *last=findPrefix(root, pre);
	if(last == NULL) {cout << "Khoong co tu nao co tien to " << pre; return 0;}
	print(last, "", pre);
}
