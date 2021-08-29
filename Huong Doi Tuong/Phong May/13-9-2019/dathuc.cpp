#include"iostream"
using namespace std;
typedef struct dathuc
{
	int n;//bac
	float *a;//mang cac tham chieu	
};
istream &operator>>(istream &in,dathuc &s)
{
	cout<<"Bac da thuc ";
	in>>s.n;
	s.a=new float[s.n+1];
	for(int i=0;i<=s.n;i++)	
	{
		cout<<"He so thu "<<i<<" = ";
		in>>s.a[i];	
	}
	return in;
}
ostream &operator<<(ostream &out,const dathuc &s)
{
	cout<<" - He so"<<endl;
	cout<<s.a[0]<<" + ";
	for(int i=1;i<s.n;i++)
	{
		out<<s.a[i]<<"*x"<<"^"<<i;
		out<<" + ";
	}
	cout<<s.a[s.n]<<"*x^"<<s.n;
	return out;
}
dathuc operator+(dathuc &s,dathuc &x)
{
	int k,i;
	dathuc c;
	k=s.n>x.n?s.n:x.n;
	c.n=k;
//	for(i=0;i<=k;i++)
//    	if (i<=s.n && i<=x.n)
//    		c.a[i] = s.a[i] + x.a[i];
//    	else if(i<=s.n)
//    		c.a[i] = s.a[i];
//		else
//    		c.a[i] = x.a[i];
//			i=k;
//    while(i>0 && c.a[i]==0.0) --i;
//    	c.n = i;
//	return c;
	for(i=0;i<=s.n && i<=x.n;i++)
		c.a[i]=s.a[i]+x.a[i];
	if(s.n>x.n)
		while(i<=k)	
		{
			c.a[i]=s.a[i];
			i++;
		}
	else		
		while(i<=k)
		{
			c.a[i]=x.a[i];
			i++;
		}
	return c;
}
//dathuc operator-(const dathuc &s,const dathuc &x)
//{
//	
//}
int main()
{
	dathuc a,b,f;
	int n;
	cin>>a;cout<<a;
	cout<<endl;
	cin>>b;cout<<b;
	a+b=f;
	cout<<f;
}
