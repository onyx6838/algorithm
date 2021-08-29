#include"iostream"
#include"conio.h"
#include"stdio.h"
#include"windows.h"
#include"vector.cpp"
#include"vectorItr.cpp"
using namespace std;
class VectorApp	// Lop ung dung lop vector va lop VectorItr
{
	private:
		Vector<float> V;
	public:
		int menu();
		void run();
		void GetElement();
		void InsertElement();
		void RemoveElement();
		void ReplaceElement();
		void ListElement();
};
int VectorApp::menu()
{
	cout<<"\n1.Chen 1 ptu vao Vector";
	cout<<"\n2.Xoa 1 ptu cua Vector";
	cout<<"\n3.Thay the gia tri cua 1 ptu";
	cout<<"\n4.Lay gia tri cua 1 ptu";
	cout<<"\n5.In danh sach cac ptu co trong Vector";
	cout<<"\n6.Ket thuc ctrinh";
	cout<<"\nChon chuc nang tu 1 den 6: ";
	int n;
	cin>>n;
	return n;
}
void VectorApp::run()
{
	int ch;
	do
	{
		system("cls");
		ch=menu();
		system("cls");
		cout<<"\n";
		switch(ch)
		{
			case 1:
				InsertElement();
				break;
			case 2:
				RemoveElement();
				break;
			case 3:
				ReplaceElement();
				break;
			case 4:
				GetElement();
				break;
			case 5:
				ListElement();
				break;				
		}
	}while(ch!=6);
}
void VectorApp::InsertElement()
{
	float x;//sinhvien x;
	int r;
	cout<<"Vi tri chen ";
	cin>>r;
	cout<<"Nhap gia tri ";
	cin>>x;
	if(V.insertAtRank(r,x))
		cout<<"Chen ptu thanh cong";
	else
		cout<<"Chen ptu khong thanh cong. Loi do vi tri chen";
	getch();
}
void VectorApp::RemoveElement()
{
	float x;
	int r;
	cout<<"Nhap vi tri cua ptu can xoa bo: ";
	cin>>r;
	if(V.removeAtRank(r,x))
		cout<<"Phan tu bi xoa bo di: "<<x;
	else
		cout<<"Xoa ptu khong thanh cong. Loi do vi tri xoa";
	getch();		
}
void VectorApp::ReplaceElement()
{
	float x;
	int r;
	cout<<"Nhap gia tri can thay the:";
	cin>>x;
	cout<<"Nhap vi tri can thay the";
	cin>>r;
	if(V.replaceAtRank(r,x))
		cout<<"Thay the ptu thanh cong";
	else
		cout<<"Thay the ptu khong thanh cong. Loi do vi tri thay the";
	getch();		
}
void VectorApp::GetElement()
{
	float x;
	int r;
	cout<<"Nhap vi tri can lay phan tu:";
	cin>>r;
	if(V.getAtRank(r,x))
		cout<<"Phan tu lay duoc: "<<x;
	else
		cout<<"Lay ptu khong thanh cong. Loi do vi tri lay";
	getch();		
}
void VectorApp::ListElement()
{
	VectorItr<float> Itr(&V);
	cout<<"Danh sach cac ptu";
	while(Itr.hasNext())
		cout<<Itr.next()<<" ";
	getch();	
}		
