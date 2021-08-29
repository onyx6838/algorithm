#include<bits/stdc++.h>
using namespace std;
map<int,int> D;
int leo(int n)
{
	if(n<3)	return D[n]=1<<(n-1);	// dich bit
	if(D.find(n)!=D.end())	return D[n];	// tim thay thi dua ra de
	// giam thao tac tinh lai
	return D[n]=leo(n-1) + leo(n-2) + leo(n-3);
	// trc khi return se luu vao D trc (gan gtri)
}
int main()
{
	cout<<leo(40);	// 679168468 mat 64.5s vi co do phuc tap mu~
}
