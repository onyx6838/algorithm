#include"iostream"
using namespace std;
int MaxMin(int a,int b,int c,bool ismax=true)
{
	int max,min;
	if(ismax==true)
	{
		if(a>b && a>c) max=a;
		else if(b>a && b>c)	max=b;
		else if(c>a && c>b) max=c;
		return max;
	}
	else
	{
		if(a<b && a<c) min=a;
		else if(b<a && b<c)	min=b;
		else if(c<a && c<b) min=c;
		return min;
	}
}
int main()
{
	int a,b,c,max,min;
	cin>>a>>b>>c;
	max=MaxMin(a,b,c);
	cout<<"max = "<<max;
	min=MaxMin(a,b,c,false);
	cout<<"\nmin = "<<min;
	cout<<"\nSo khong phai max,min = "<<(a+b+c)-max-min;
}
