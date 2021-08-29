#include"iostream"
#include"conio.h"
#ifndef ARSTKAPP_CPP
#define ARSTKAPP_CPP 1
#include"ArrayStack.cpp"
using namespace std;
class ArraySTKApp
{
	private:
		ArrayStack<int> V;
	public:
		int menu();
		void run();
		void Size();
		void pushI();
		void popI();
		void ISEMPTY();	
		void TOP();
};
int ArraySTKApp::menu()
{
	cout<<"1. Lay 1 phan tu cua Stack. ";
	cout<<"\n2. Them 1 phan tu vao Stack. ";
	cout<<"\n3. Xem phan tu dau cua Stack. ";
	cout<<"\n4. Stack is Empty ?. ";
	cout<<"\n5. Size of Stack. ";
	cout<<"\n6. End .";
	cout<<"\nMoi ban chon:";
	int chon;
	cin>>chon;
	return chon;
}
void ArraySTKApp::run()
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
				popI();
				break;
			case 2:
				pushI();
				break;
			case 3:
				TOP();
				break;
			case 4:
				ISEMPTY();
				break;
			case 5:
				Size();
				break;	
		}
	}
	while(ch != 6);
}
void ArraySTKApp::pushI()
{
	int x;
	cout<<"Gia tri them: ";
	cin>>x;
	if(V.push(x))
		cout<<"Add Ele into Stack Success! ";
	else
		cout<<"Fail to add Ele into Stack! ";
	getch();	
}
void ArraySTKApp::popI()
{
	int x;
	if(V.pop(x))
		cout<<"Ele out! "<<x;
	else
		cout<<"Fail to take Ele out of Stack! ";
	getch();	
}
void ArraySTKApp::TOP()
{
	int x;
	if(V.top(x)==0)	cout<<"No ele !";
	else 
		cout<<"Info ele of stack: "<<x;
	getch();
}
void ArraySTKApp::ISEMPTY()
{
	if(V.isEmpty())	cout<<"Stack Empty";
	else cout<<"Stack have ele!";
	getch();
}
void ArraySTKApp::Size()
{
	cout<<V.size();
	getch();
}
#endif
