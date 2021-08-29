#include<bits/stdc++.h>
using namespace std;
typedef double Ham(double); 
// khai bao 1 ham cho trc de tim nghiem
// co 1 ham f de truyen tham so ham vao ham chia doi
double ChiaDoi(double a, double b, Ham f, double ep =1e-4)
{
	while(b - a > ep)
	{
		double c = (b+a)/2;	// chia doi
		f(a) * f(c) <= 0 ? b = c : a = c;	// neu tich ac moi < 0 thi dua b ve cho c de chia
											// k thi dua a ve gan c de chia doi tiep
	}
	return (b+a)/2;
}
int main()
{
	cout<<"pi = "<<ChiaDoi(3,3.5,sin,0.0001);
	// tim doc upper_bound va lower_bound
}
