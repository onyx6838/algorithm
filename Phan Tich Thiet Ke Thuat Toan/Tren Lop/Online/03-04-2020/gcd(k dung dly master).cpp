//Danh gia xau nhat va tot nhat
#include<bits/stdc++.h>
using namespace std;
int UCLN(int a,int b)
{
	return b?UCLN(b,a%b):a;
// Tot nhat b=0 => Do phuc tap Omega(1)
// Xau nhat  1= ucln(1,0) = ucln(0,1) = ucln(2,1) = 
//			= ucln(3,2) = ucln(5,3) = ucln(8,5)
//			= .......(F[n],F[n-1]) = O(n)
// Dinh ly F[n] < 2^n
/*
F[0] = 1 < 2^0
F[1] = 1 < 2^1
F[2] = 2 < 2^2
F[3] = F[1] + F[2] < 2 * F[2] < 2^3

Xau nhat ham UCLN T(n) => log(n)
*/
}
int main()
{
	cout<<UCLN(1800,1440);
}

