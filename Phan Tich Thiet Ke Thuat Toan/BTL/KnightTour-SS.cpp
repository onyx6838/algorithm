#include<bits/stdc++.h>
using namespace std;

class KnightTour
{
	private:
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
					visited[i][j] = std::numeric_limits<int>::min();
		}
		void print()
		{
			for(int i=0;i< n;i++){
				for(int j=0;j<n;j++)
				{
					cout<<visited[i][j]<<" ";
				}
				cout<<endl;		
			}
		}
		bool TRY(int step, int x, int y)
		{
			if(step == n * n )	// di duoc het ban` co
				return true;
			for(int i=0; i < 8; i++)
			{
				int nextX = x + xMoves[i];
				int nextY = y + yMoves[i];
				if(check(nextX, nextY) && visited[nextX][nextY] == numeric_limits<int>::min())	// ktra buoc di hop le va chua di qua
				{
					visited[nextX][nextY] = step;	// danh dau vi tri da di qua
					if(TRY(step + 1,nextX, nextY))	return true;
					visited[nextX][nextY] = numeric_limits<int>::min();	// lui
				}
			}
			return false;
		}
		bool check(int x,int y)
		{
			if(x < 0 || x>= n || y < 0 || y>= n)	return false;
			return true;
		}
		void sol()
		{
			int m,n;
			cin>>m>>n;
			visited[m][n] = 0;
			if(TRY(1,m,n)==false) 	cout<<"Khong co loi giai";
			else print();
		}
};
int main()
{
	int n;
	cin>>n;
	KnightTour *T = new KnightTour(n);
	T->sol();	
}
