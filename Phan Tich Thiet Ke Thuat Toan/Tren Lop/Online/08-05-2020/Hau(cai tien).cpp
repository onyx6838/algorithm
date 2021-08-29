// dung mang hoac map
#include<bits/stdc++.h>
using namespace std;
class Hau
{
	int n,x[100],dem=0;
	/*
		co the dung map hoac unordered_map
	*/
//	unordered_map<int,bool> cot,chinh,phu;	// cheo chinh, cheo phu
	int cot[100]={}, chinh1[200]={}, *chinh = chinh1 + 100, phu[200]={};
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
			if(cot[t]==0 && chinh1[k-t]==0 && phu[k+t]==0)
			{
				cot[t] = chinh1[k-t] = phu[k+t] = 1;
				x[k] = t;
				TRY(k+1);
				cot[t] = chinh1[k-t] = phu[k+t] = 0;
			}	
		}
	}	
	public:void sol()
	{
		cin>>n;	
		TRY(1);	// ban dau chua dat con nao (gsu da dat duoc k-1 con)
		cout<<dem;
	}
};
int main()
{
	Hau H;
	H.sol();
}
