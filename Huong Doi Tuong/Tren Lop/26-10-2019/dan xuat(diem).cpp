#include"iostream"
using namespace std;
class TD
{
	private:
		float x,y;
	public:
		TD(){x=y=0;}
		TD(float a,float b){x=a;y=b;}		
};
class Diem:public TD
{
	private:
		int mau;
	public:
		Diem():TD(){mau=1;}
		Diem(float a,float b,int m):TD(a,b)
		{
			mau=m;
		}	
};
int main()
{
	Diem O,A,B(-1,1,2),C(5,1.5,3);
}
