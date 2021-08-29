#include"iostream"
using namespace std;
class A
{
	int *a;
	public:
		A(int x=100)
		{
			a=new int;
			*a=x;
		}
//		void operator=(const A &ob)
//		{
//			a=new int;
//			*a=*(ob.a);
//		}
//		//"Phuong thuc toan tu gan" '=' dung cho cac doi tuong la con tro de
//		//tranh lay dia chi tra gia tri k nhu mong muon
		A(const A &ob)
		{
			a=new int;
			*a=*(ob.a);
		}
		//Gia su co doi tuong ob1.De cap phat bo nho cho ob2 thi khoi gan gia tri ob2=bo1
		//-->Ham tao sao chep
		void transform()
		{
			(*a)+=10;
		}
		void xuat()
		{
			cout<<*a<<endl;
		}
};
int main()
{
	A ob(1000);
	A ob2(ob);
	ob.xuat();
	ob2.xuat();
	ob.transform();
	ob.xuat();
	ob2.xuat();
	ob=500;
	ob.xuat();
	ob2.xuat();
}
