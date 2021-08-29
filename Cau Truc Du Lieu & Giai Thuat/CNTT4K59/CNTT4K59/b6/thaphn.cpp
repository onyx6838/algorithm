#include<bits/stdc++.h>
using namespace std;
void thap(int n,char A,char B,char C)
{
	if(n==1) cout<<"\nChuyen dia "<<n<<" tu "<<A<<" sang "<<B;
	else
	{
		thap(n-1,A,C,B);
		cout<<"\nChuyen dia "<<n<<" tu "<<A<<" sang "<<B;
		thap(n-1,C,B,A);
	}
}
int main()
{
	thap(5,'A','B','C');

}


