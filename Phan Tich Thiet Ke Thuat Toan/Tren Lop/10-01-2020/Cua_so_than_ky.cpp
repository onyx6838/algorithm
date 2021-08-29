#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<string> Q;
	Q.push("dangdungcntt");
	Q.push("tienquanutc");
	Q.push("quang123");
	Q.push("maianh");
	Q.push("nguyenminhduc2820");
	int n;
	cout<<"Nhap n = ";cin>>n;
	for(int i=0;i<n;i++){
		Q.push(Q.front());	// nhan doi
		Q.push(Q.front());	// nhan doi
		Q.pop();	// xoa
	}
	cout<<Q.front();
}
