#include"iostream"
using namespace std;
template<class T>
T max2(T a,T b)
{
	return a>b?a:b;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<max2(a,b);
}
