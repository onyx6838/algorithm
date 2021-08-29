//#include<iostream>
//#include"singleList.cpp"
//#include"Node.cpp"
//#include"student.cpp"
//#include"singleListItr.cpp"

#include<iostream>
#include"SLIST.cpp"
#include"conio.h"
#include"Node.cpp"
#include"student.cpp"
#include"SLItr.cpp"
using namespace std;
class studentApp
{
	private:
		SingleList<sinhvien> sv;
	public:
		void input();
		void remove();
		void outlist();
		void listStd();
};
void studentApp::input()
{
	int n;
	sinhvien a;
	cout<<"\nNhap so sinh vien:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\nNhap sinh vien thu "<<i<<" :";
		cin>>a;
		if(sv.insertLast(a)) cout<<"\nThem thanh cong!";
		else cout<<"\nThem that bai!";
	}
}
void studentApp::remove()
{
	int x;
	//sinhvien a;
	cout<<"\nNhap ma sinh vien muon xoa.";
	cin>>x;
	Node<sinhvien> *p=sv.first();
	while(p!=NULL)
	{
		if(p->getElem().getma()==x)
		{
			sv.remove(p);
			break;
		}
		p=p->getNext();
	}
	if(p==NULL)	cout<<"\nK tim thay svien co ma"<<x;
}
void studentApp::listStd()
{
	SingleListItr<sinhvien> v(&sv);
	v.reset();
	while(v.hasNext())
	{
		cout<<v.next()<<endl;
	}
}
void studentApp::outlist()
{
	SingleListItr<sinhvien> v(&sv);
	v.reset();
	sinhvien a;
	while(v.hasNext())
	{
		a=v.next();
		if(a.getluong() > 2000000) cout<<a<<endl;
	}
}
int main()
{
	studentApp a;
	a.input();
	a.listStd();
	cout<<"\nSinh vien co luong lon hon 2tr______________________\n";
	a.outlist();
	a.remove();
	cout<<"\nDs sv sau khi xoa____________________\n";
}
