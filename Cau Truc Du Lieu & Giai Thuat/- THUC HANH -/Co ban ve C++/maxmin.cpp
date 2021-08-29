#include"iostream"
using namespace std;
void maxmin(int a,int b,int c,int &max,int &min)
{
	if(a>b && a>c) max=a;
	else if(b>a && b>c)	max=b;
	else if(c>a && c>b) max=c;
	cout<<"Max = "<<max;
	if(a<b && a<c) min=a;
	else if(b<a && b<c)	min=b;
	else if(c<a && c<b) min=c;
	cout<<"Min = "<<min;
}
int main()
{
	int a,b,c,max,min;
	cin>>a>>b>>c;
	maxmin(a,b,c,max,min);
}
