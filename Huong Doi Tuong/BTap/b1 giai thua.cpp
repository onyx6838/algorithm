// tinh gia tri da thuc 1!+2!+3!+4!+...+n!
#include<iostream>
using namespace std;
int gthua(int n)
{
	int k=1;
	for(int i=1;i<=n;i++)
		k*=i;
	return k;	
}
/*int gthuadequy(int n)
{
	if(n==1) return 1;
	return n*giaithua(n-1);
}*/
int main()
{
	int n;
	cout<<"n= ";cin>>n;
	cout<<n<<" giai thua = "<<gthua(n);
}

