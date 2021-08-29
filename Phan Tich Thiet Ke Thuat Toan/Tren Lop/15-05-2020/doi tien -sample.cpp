#include<bits/stdc++.h>
using namespace std;
class Money{
	int n,M,a[100],c[100][100],inf=1e9;
	void thuan(){
		for(int j=1;j<=M;j++)	c[0][j] = inf;
		c[0][0] = 0;
		for(int i=1;i<=n;i++){
			for(int j=0;j<=M;j++){
				if(j<a[i])	c[i][j] = c[i-1][j];
				else	c[i][j] = min(c[i-1][j],1+c[i][j-a[i]]);
			}
		}
	}
	void nghich(int n,int M){
		if(c[n][M]==0)	return;
		while(c[n][M]==c[n-1][M])	n--;
		nghich(n,M-a[n]);
		cout<<a[n]<<" ";
	}
	public:void sol(){
		cin>>n>>M;
		for(int i=1;i<=n;i++)	cin>>a[i];
		thuan();
		if(c[n][M]==inf)	cout<<"khong doi duoc";
		else{
			cout<<"so to it nhat"<<c[n][M]<<"gom";
			nghich(n,M);
		}
	}
};
int main(){
	Money A;
	A.sol();
}
