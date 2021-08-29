#include<bits/stdc++.h>
using namespace std;
void xoa(int k,char *x)
{
	if(k==strlen(x))	return;	// k=n xoa ca chuoi
	if(k==0)	{printf("%s",x);return;}	// k=0 thi k xoa
	int p=0;	// p dat vi tri cho max cua k+1 so dc xet
	for(int i=1;i<=k;i++)	if(x[i] > x[p])	p=i;// vi tri max tai p va xet tiep voi k con` lai
	printf("%c",x[p]);
	xoa(k-p, x+p+1);	// ktra tiep k+1 so dc xet (voi k da xoa)
}
int main()
{
	int k;
	char x[100005];
	printf("Nhap vao so ban dau: ");
	scanf("%s",x);
	printf("Nhap so k = "); scanf("%d",&k);
	xoa(k,x);
}

