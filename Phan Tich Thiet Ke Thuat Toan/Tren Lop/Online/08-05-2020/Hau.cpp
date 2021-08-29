#include<bits/stdc++.h>
using namespace std;
class Hau
{
	int n,x[100],dem=0;
	void TRY(int k)	// gia su da dat duoc x1 ... x[k-1]
	{
		if(k>n)	//k-1 >=n
		{
			cout<<"\n"<<setw(5)<<++dem<<":	";
			for(int i=1;i<=n;i++)	cout<<"("<<i<<","<<x[i]<<")";
		}
		else
		{
			for(int t=1;t<=n;t++)
			if(datduoc(k,t))	// dat duoc hau thu k vao (k,t)
			{
				x[k] = t;
				TRY(k+1);
			}	
		}
	}	
	bool datduoc(int k,int t)
	{
		for(int i=1;i<k;i++)
		{
			if(x[i] == t)	return 0;	// cot
			if(k-i == abs(x[i]-t))	return 0;	// an theo duong cheo
		}
		return 1;
	}
	public:void sol()
	{
		cin>>n;
		TRY(1);	// ban dau chua dat con nao (gsu da dat duoc k-1 con)	
	}
};
int main()
{
	Hau H;
	H.sol();
}
