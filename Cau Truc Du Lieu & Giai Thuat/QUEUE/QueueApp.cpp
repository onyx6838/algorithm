#ifndef QUEUEAPP_CPP
#define QUEUEAPP_CPP 1
#include<iostream>
#include<conio.h>
#include"Queue.cpp"
#include"student.cpp"
using namespace std;
class QueueApp
{
	private:
		Queue<sinhvien> V;
	public:
		int menu();
		void run();
		void enq();
		void deq();
		void Size();
		void getq();
};
int QueueApp::menu()
{
	cout<<"1. Them sinh vien.";
	cout<<"\n2. Lay sinh vien ra khoi Queue.";
	cout<<"\n3. Lay thong tin svien dau tien cua Queue.";
	cout<<"\n4. Size Queue.";
	cout<<"\n5. End.";
	cout<<"\nMoi ban chon:";
	int chon;
	cin>>chon;
	return chon;
}

void QueueApp::run()
{
	int ch;
	do
	{
		system("cls");
		ch = menu();
		system("cls");
		cout<<"\n";
		switch(ch)
		{
			case 1:
				enq();
				break;
			case 2:
				deq();
				break;
			case 3:
				getq();
				break;
			case 4:
				Size();
				break;	
		}
	}
	while(ch != 5);
}
void QueueApp::deq()
{
	sinhvien p;
	if(V.dequeue(p))
	{
		cout<<"sinh vien da lay:\n";
		cout<<p;
	}
	else
	{
		cout<<"Khong the lay thong tin sinh vien!";
	}
	getch();
}
void QueueApp::Size()
{
	cout<<V.size();
	getch();
}
void QueueApp::enq()
{
	sinhvien x;
	cout<<"Nhap thong tin sinh vien muon them:";
	cin>>x;
	if(V.enqueue(x))
	{
	  cout<<"Them thanh cong!";
     }
	else cout<<"\nThem khong thanh cong!";
	getch();
}
void QueueApp::getq()
{
	sinhvien x;
	if(V.front(x))
	{
		cout<<"sinh vien da lay:\n";
		cout<<x;
	}
	else
	{
		cout<<"Khong the lay thong tin sinh vien!";
	}
	getch();
}
#endif
