#include<bits/stdc++.h>
using namespace std;
int n;
int d[100][100]={};
// Khoi tao ban` co rong
void init(int board[][100])
{
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			board[i][j] = 0;
}
// Ktra xem vi tri (i,j) co nam trong ban co khong
int check(int i,int j)
{
	return (i>=0 && i<n && j>=0 && j<n);
}
// Xuat ma tran ban co
void show(int board[][100])
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<board[i][j]<<"\t";
			cout<<"\n";
	}
}
//Ktra buoc di tiep theo co di duoc khong
void TRY(int step, int i,int j, int board[][100], int *I,int *J, int &OK)
{
	int m, inext, jnext;	// khoi tao m la buoc di cua quan ma (8 kha nang) va buoc di tiep theo 
	for(m = 0; m < 8;m++)
	{
		inext = i + I[m];	// dua vao vi tri tiep theo truc x
		jnext = j + J[m];	// dua vao vi tri tiep theo truc y
		if(check(inext,jnext) && board[inext][jnext]==0)	// neu buoc di hop le va chua di qua thi 
		{
			board[inext][jnext] = step + 1;	//step la so vi tri da di qua va +1 de danh dau
			d[inext][jnext] = 1;
			if(step == n*n - 1)	OK = 1;	// di het ban co thi OK = 1
			else
			{
				TRY(step + 1 , inext, jnext,board,I,J,OK);	// thu di tiep step + 1 xem co di duoc k
				d[inext][jnext] = 0;
				if(!OK)	board[inext][jnext] = 0;	// khong di duoc het ban co OK=0
			}
		}
	}
}
int main()
{
	cin>>n;
	int board[100][100], OK = 0, i,j;
	cin>>i>>j;
	int I[8] = {-2,-1,1,2,2,1,-1,-2};
	int J[8] = {1,2,2,1,-1,-2,-2,-1};
	init(board);
	board[i][j] = 1;
	TRY(1,i,j,board,I,J,OK);
	if(OK)	show(board);
	else cout<<"khong co loi giai";
}
