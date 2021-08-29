//Giai phuong trinh ax+b=0 tren C
//Bai tap ve nha giai va bien luan ax^2+bx+c=0 tren truong so phuc C

#include<bits/stdc++.h>
#include<complex>
using namespace std;
int main()
{
	complex<double> a,b,K(0,0);
	cout<<"Nhap a = "; cin>>a;
	cout<<"Nhap b = "; cin>>b;
	if(a==K) cout<<(b==K?"vo so nghiem":"vo nghiem");
	else cout<<-b/a;
	
}


