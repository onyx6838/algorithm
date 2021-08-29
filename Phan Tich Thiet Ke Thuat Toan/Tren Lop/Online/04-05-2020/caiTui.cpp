#include<bits/stdc++.h>
using namespace std;
//int x;
class Tui{
	int n,a[100],M,res=0;
	char x[100],pa[100]; // phuongan[]
	void TRY(int k,int T) // g/sau da chon x1...xk va x1*a1+...+xk*ak=T
	{
		if(k==n)
		{
//			if(res < T)	res = T;
			if(res < T)	
			{
				res=T;
				strcpy(pa,x+1);
			}
		}
		else
		{
//			for(x=0;x<=1;x++)
//			if(T + x*a[k+1] <= M)
//			{
//				TRY(k+1,T+x*a[k+1]);
//			}	
			for(x[k+1]='0';x[k+1]<='1';x[k+1]++)
			if(T + (x[k+1]-'0')*a[k+1] <= M)
			{
				TRY(k+1,T+(x[k+1]-'0')*a[k+1]);
			}
		}
	}
	public:void sol()
	{
		cin>>n>>M;
		for(int i=1;i<=n;i++)	cin>>a[i];
		TRY(0,0);
		cout<<res;
		printf("\n%s",pa);
	}
};
int main()
{
	freopen("tui.txt","r",stdin);
	Tui T;
	T.sol();
}

