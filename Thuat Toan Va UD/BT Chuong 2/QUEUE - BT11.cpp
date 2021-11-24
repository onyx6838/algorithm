#include<bits/stdc++.h>
using namespace std;
int orgRotting(vector<vector<int>> &grid)
{
	if(grid.empty())	return 0;
	int countFreshOrg = 0;	// so qua k bi thoi'
	int m = grid.size();	// kích thuoc ma tran 
	int n = grid[0].size();
	int time = 0;	// so ngay de qua bi thoi tat ca
	vector<pair<int,int>> adja = {{0,1},{1,0},{-1,0},{0,-1}};	// vi tri lan can
	
	queue<pair<int,int>> q;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(grid[i][j]==1)	countFreshOrg++;
			else if(grid[i][j]==2)	q.push({i,j});
		}
	}
	while(countFreshOrg != 0 && !q.empty())
	{
		int qs = q.size();
		for(int i=0;i<qs;i++)
		{
			int rotI = q.front().first;	// toa do x
			int rotJ = q.front().second;	// toa do y
			q.pop();	// xoa khoi? queue
			for(auto d: adja)
			{
				int newX = rotI + d.first;	// toa do moi
				int newY = rotJ + d.second;
				if (newX >= 0 && newX < m && newY >= 0 && newY < n && grid[newX][newY] == 1)
				// ktra hop le toa do moi' va` ktra co qua? tuoi o vi tri moi
                {
                	grid[newX][newY] = 2;	// doi gia tri qua moi -> qua thoi 
                	countFreshOrg --;	// giam so qua tuoi
                	q.push({newX,newY});
                }
			}
		}
		time++;
	}
	return countFreshOrg == 0 ? time : -1;
}
int main()
{
	vector<vector<int>> grid = {{2, 1, 0, 2, 1},{0, 0, 1, 2, 1},{1, 0, 0, 2, 1}};
	cout<<orgRotting(grid);
}
