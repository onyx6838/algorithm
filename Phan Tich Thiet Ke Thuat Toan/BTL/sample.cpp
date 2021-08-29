#include<bits/stdc++.h>
using namespace std;

class KnightTour
{
	private:
		int cachDi;
		int n;
		int **visited;
		int xMoves[8] = {2, 1, -1, -2, -2, -1, 1, 2};
		int yMoves[8] = {1, 2, 2, 1, -1, -2, -2, -1};
	public:
		KnightTour(int n)
		{
			this->n = n;
			init();
		}
		void init()
		{
			visited = new int*[n+1];
			for(int i=0;i<n;i++)
				visited[i]=new int[n+1];
			for(int i=0;i< n;i++)
				for(int j=0;j<n;j++)
					visited[i][j] = -1;
		}
		void print()
		{
			cout<<"----";
			cout<<"Cach di ------ " << cachDi++ <<endl;
			for(int i=0;i< n;i++){
				for(int j=0;j<n;j++)
				{
					cout<<visited[i][j]<<" ";
				}
				cout<<endl;		
			}
			cout<<endl;
		}
		bool TRY(int step, int x, int y)
		{
			if(step == n * n)
			{
				print();
				return true;
			}
			bool res = false;
			for(int i=0; i < 8;i++)
			{
				int nextX = x + xMoves[i];
				int nextY = y + yMoves[i];
				if(check(nextX, nextY) && visited[nextX][nextY] == -1)
				{
					visited[nextX][nextY] = step;
					res = TRY(step + 1,nextX,nextY) || res;
					visited[nextX][nextY] = -1;
				}
			}
			return res;
		}
		bool check(int x,int y)
		{
			if(x < 0 || x>= n || y < 0 || y>= n)	return false;
			return true;
		}
		void sol()
		{
			int m, n;
			cin>>m>>n;
			visited[m][n] = 0;
			if(TRY(1,m,n)==false) 	cout<<"Stuck";
		}
};
int main()
{
	int n;
	cin>>n;
	KnightTour *T = new KnightTour(n);
	T->sol();	
}
