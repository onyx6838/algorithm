// ghep 3 HCN thanh HV ???
#include<bits/stdc++.h>
using namespace std;
main ()
{
	int a,b,c,d,e,f;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	// Kieu ghep 1
	if(b>a)	swap(a,b);
	if(d>c)	swap(c,d);
	if(f>e)	swap(e,f);
	/*if(a==c==e && (b+d+f)==a||(b+d+f)==c ||(b+d+f)==e)
		printf("Ghep dc");
	else printf("k thoa man");*/
	// Kieu ghep 2
	if(b>a)	swap(a,b);
	if(d==e && ((a-b)==e || (a-b)==d)  && c+f==a)	
		printf("Ghep dc");
	else printf("K thoa man");
}


