	// cai tien code (k dung` string dung so r in ra)
	// duy tri queue 5 ptu
#include<iostream>
#include<complex>
#include<queue>
using namespace std;
typedef pair<string,int> spair;
int main()
{
	queue<spair> Q;
	//string ten[]={"Dong","Tay","Nam","Bac","Trung"};
	string ten[]={"dangdungcntt","tienquanutc","quang123","maianh","nguyenminhduc2820"};
	for(string s:ten)	Q.push({s,1});	// khoi tao
//	Q.push({"Dong",1});
//	Q.push({"Tay",1});
//	Q.push({"Nam",1});
//	Q.push({"Bac",1});
//	Q.push({"Trung",1});
	int n;
	cin>>n;
//	int *a;
//	a = new int[n+1];
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i];
//	}
	while(1)
	{
		if(n<=Q.front().second)	
		{
			cout<<Q.front().first;	// < break
			break;
		}
		n-=Q.front().second;	// n giam  ( - tan suat front queue)
		Q.push({Q.front().first,Q.front().second*2});	// them tan suat * 2 vao cuoi
		Q.pop();
	}
}
