// chuyen dia~ vao B theo thu tu be tren lon hon duoi
// can thap C lm trung gian 
#include<bits/stdc++.h>
using namespace std;
void ThapHN(int n,char A,char B,char C)
{
	if(n>1)	ThapHN(n-1,A,C,B); // chuyen tu dia A sang dia C (dia B trung gian)	(n-1) vi dia dau tien da chuyen
	cout<<"\nChuyen dia "<<n<<" tu "<<A<<" sang "<<B;
	if(n>1)	ThapHN(n-1,C,B,A); // chuyen tu dia C sang dia B (dia A trung gian)
}
int main()
{
	int n;
	cout<<"Nhap vao so dia n: "; cin>>n;
	ThapHN(n,'A','B','C');
}

