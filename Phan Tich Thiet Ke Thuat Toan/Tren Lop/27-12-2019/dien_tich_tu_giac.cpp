#include<bits/stdc++.h>
#include<complex>
#define x first
#define y second
using namespace std;
typedef pair<double,double> Diem;

int main()
{
	Diem A[6];
	for(int i=0;i<4;i++)	cin>>A[i].x>>A[i].y;
	A[4] = A[0];
	double s=0;
	for(int i=1;i<=4;i++)
		s += A[i-1].x * A[i].y - A[i-1].y * A[i].x;
	cout<<fabs(s)/2;
}

