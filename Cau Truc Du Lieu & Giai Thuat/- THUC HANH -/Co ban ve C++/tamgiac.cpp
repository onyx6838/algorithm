#include"iostream"
using namespace std;

int KTTG(int a,int b,int c)
{
	if(a+b>c || a+c>b || b+c>a)
		return 1;
	return 0;	
}
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int f=KTTG(a,b,c);
	if(f) cout<<"y";
	else cout<<"n";
}
