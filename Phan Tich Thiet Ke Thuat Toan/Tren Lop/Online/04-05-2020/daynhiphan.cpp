// Sinh day nhi phan
#include<bits/stdc++.h>
using namespace std;
class nhiphan
{
	char x[100] = {};
	int n;
	void TRY(int k)	// gia su da co x1... den x[k-1]
	{
		if(k>n)	// da di het in ra chuoi
		{
			printf("%s \n",x+1);
			return;
		}
//		x[k] = '0'; TRY(k+1);
//		x[k] = '1'; TRY(k+1);
		for(x[k] = '0';x[k]<='1';x[k]++)	TRY(k+1);	// nhi phan 0 1 
		// di tiep sang cac nhanh 0 1 (hoac nhieu hon nnhu 0 1 2 3) va danh dau
	}
	public:void sol()
	{
		cin>>n;
		TRY(1); // xet day tu 1 den x[k-1]
	}
};
int main()
{
	nhiphan N;
	N.sol();
}

