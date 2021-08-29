#include"iostream"
#include"lopSP.cpp"
using namespace std;
int main()
{
	sophuc c1,c2,c3;
	cout<<"nhap so phuc thu nhat\n";c1.nhap();
	cout<<"nhap so phuc thu hai\n";c2.nhap();
	cout<<"nhap so phuc thu ba\n";c3.nhap();
	sophuc c;
	cout<<"\nDay cac so phuc vua nhap";
	cout<<"\nc1=";c1.xuat();
	cout<<"\nc2=";c2.xuat();
	cout<<"\nc3=";c3.xuat();
	c=(c1+c2)*c3/(c1-c2);
	cout<<"\n\n(c1+c2)*c3/(c1-c2)=";
	c.xuat();
}
//Ham trong public(khong la ham friend ) thi co doi mac dinh la con tro this
//Khai bao friend cua phg thuc thi phai co du n doi (vi` k con` la phg thuc trong class)
//(n-1) doi neu khong co friend (do da co con tro this)
