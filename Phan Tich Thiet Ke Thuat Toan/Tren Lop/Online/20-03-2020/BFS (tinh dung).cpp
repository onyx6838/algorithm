// tinh dung (pause)
// Cho so nguyen duong n co the sinh ra 2n+1 hoac 3n sinh den khi nao gap 1 so nguyen to thi xuat ra
// so nguyen to do
/*
12 -> 25 -> 51
		 -> 75
   -> 36 -> 73
		 -> 108
 Neu dung thuat toan DFS -> khong dung` 
 Ta dung BFS thay vi DFS
*/
#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
	if(n==2)	return 1;	// loai bo cac so chan vi khong phai SNT
	if(n<2 || n%2==0)	return 0;
	for(int i=3;i*i<=n;i+=2)	if(n%i==0)	return 0;	// neu n le? thi chi xet 3 -> can n va +2
	return 1;
}
// dung BFS de tim cac kha nang cua no thay vi dung DFS se chi di sau vao 1 so
int BFS(int n)
{
	queue<int> Q;
	Q.push(n);
	while(1)
	{
		int u=Q.front();Q.pop();	// tim cac kha nang cua n
		if(isprime(u))	return u;	// dung se tra 
		Q.push(2*u+1);	// di sau vao u (sinh ra 2n+1)
		Q.push(3*u);
	}
	return -1;
}
int main()
{
	cout<<BFS(12);
}

