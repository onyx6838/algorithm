#include<bits/stdc++.h>
using namespace std;
int d[10000005]={};
char x[10000005]={};
bool kt;
void TRY(long k,long n)
{
	long y=0;
	for(char a:x)
	{
		d[a]++;
		y=y*10+(a-'0');
    }
    if(kt==true) return;
    if(y>=n)
    {
    	if(d['4']==d['7'])
    	{
         printf("%s\n",x);
         kt=true;
         return;
        }
	}
	d[4]=0;
	d[7]=0;
	x[k]='4';TRY(k+1,n);
	x[k]='7';TRY(k+1,n);
}
int main()
{
	long n;
	cin>>n;
	TRY(0,n);
}
