//#include"iostream"
//using namespace std;
//class A
//{
//	public:
//		void f(){cout<<"\nLop A";
//		}
//};
//class B:public A
//{
//	public:
//		void f(){cout<<"\nLop B";
//		}
//};
//class C:public B
//{
//	public:
//		void f(){cout<<"\nLop C";}
//};
//int main()
//{
//	C c;
//	c.f();
//	B *b;
//	b=&c;	//phai lay dia chi cua lop co so (b la lop co so) va gan nguoc lai cho lop dx
//	b->f();// K goi dc ham f cua c
//	// ngay ca khi gan dia chi cua lop c cho class b
//	A *a;
//	a=&c;a->f();
//	a=b;a->f();
//}



//#include<iostream>
//using namespace std;
//class A
//{
//	public:
//		virtual void f(){cout<<"\nLop A";
//		}
//};
//class B:public A
//{
//	public:
//	 void f(){cout<<"\nLop B";}
//};
//int main()
//{
//	B b,*b1;
//	b.f();
//	//con tro thi tro den dia chi dung dau "->"
//	b1=new B;
//	b1->f();
//	A a;
//	a.f();
//	A *a1;
//	a1=&a;//Tro den dia chi lop A
//	//Goi lop A thi dung` ham` f() cua A
//	a1->f();
//	a1=&b;
//	a1->f();
//}

#include<iostream>
using namespace std;
class A
{
	public:
		virtual void f(){cout<<"\nLop A";}
};
class B:public A
{
	public:
		void f(){cout<<"\nLop B";}
};
void dahinh(A *p)
{
	p->f();//class A tro den dia chi nao thi su dung phg thuc day'
}
int main()
{
	A a;
	B b;
	dahinh(&a);
	dahinh(&b);
}
