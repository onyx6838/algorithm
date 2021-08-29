#include"iostream"
#include"cmath""
using namespace std;
template<class T>
T UCLN(T a,T b)
{
	a=abs(a);
	b=abs(b);
	while(a && b)
	{
		if(a>b) a-=b;
		else b-=a;
	}
	return a;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<UCLN(a,b);
}
