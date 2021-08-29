#include"complex"
#include"iostream"
using namespace std;
typedef pair<double,double> Diem;
#define x first
#define y second
int main()
{
	Diem A(3,4),B,C;
	//3 cach khoi tao gia tri
	// 1: khoi tao ngay khi tao bien
	cout<<A.x<<" "<<A.y<<endl;
	B = {6,6};
	// 2: su dung cap dau {}
	cout<<B.x<<" "<<B.y<<endl;
	// 3: su dung ham make_pair 
	C = make_pair(1,2);
	cout<<C.x<<" "<<C.y<<endl;
}
