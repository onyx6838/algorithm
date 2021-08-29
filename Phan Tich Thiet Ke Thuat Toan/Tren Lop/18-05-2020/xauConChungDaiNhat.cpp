#include<bits/stdc++.h>
using namespace std;
class xccdn
{
	int n,m;
	char x[100],y[100],c[100][100];
	void thuan()
	{
		for(int i=0;i<=n;i++)	c[i][0] = 0;
		for(int j=0;j<=m;j++)	c[0][j] = 0;
		
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				{
					if(x[i]==y[j])	c[i][j] = c[i-1][j-1] + 1;
					else c[i][j] = max(c[i-1][j],c[i][j-1]);
				}		
	}
	void nghich(int n,int m)
	{
		if(c[n][m] == 0)	return;
		while(c[n][m] == c[n-1][m])	n--;	//len
		while(c[n][m] == c[n][m-1])	m--;	//sang
		nghich(n-1,m-1);
		printf("%c",x[n]);
	}
	public:void sol()
	{
		printf("x = ");fflush(stdin);scanf("%s",x+1);	n = strlen(x+1);
		printf("y = ");fflush(stdin);scanf("%s",y+1);	m = strlen(y+1);
		thuan();
		printf("\nDo dai xau con chung dai nhat %d",c[n][m]);
		printf("\nXau con chung dai nhat: ");
		nghich(n,m);
	}
};
int main()
{
	xccdn X;X.sol();
}
