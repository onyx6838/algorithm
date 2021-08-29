#include<iostream>
#include<conio.h>
#include"stdio.h"
#include"vectorItr.cpp"
#include"VECTOR.cpp"
#include"sinhvien.cpp"

using namespace std;
class svApp
{
	private:
		Vector<Sinhvien> v;
	public:
		int menu();
		void run();
		void getStudent();
		void insertStudent();
		void replaceStudent();
		void removeStudent();
		void listStudent();
};
int svApp::menu()
{
	cout<<"\n1. Lay thong tin sinh vien.";
	cout<<"\n2. Chen them sinh vien.";
	cout<<"\n3. Xoa mot sinh vien.";
	cout<<"\n4. Thay the mot sinh vien.";
	cout<<"\n5. Danh sach thong tin sinh vien.";
	cout<<"\n6. Ket thuc chuong trinh !";
	cout<<"\nMoi ban nhap :";
	int n;
	cin>>n;
	return n;
}
void svApp::run()
{
	int ch;
	do
	{
		system("cls");
		ch = menu();
		system("cls");
		switch(ch)
		{
			case 1:
				getStudent();
				break;
			case 2:
				insertStudent();
				break;
			case 3:
				removeStudent();
				break;
			case 4:
				replaceStudent();
				break;
			case 5:
				listStudent();
				break;
						
		}
	}while(ch != 6);
}

void svApp::insertStudent()
{
	Sinhvien x;
	int r;
	cout<<"\nNhap vi tri muon them sinh vien :";
	cin>>r;
	cout<<"\nNhap thong tin sinh vien can chen :";
	cin>>x;
	if(v.insertAtRank(r,x))
		cout<<"\nChen sinh vien thanh cong!";
	else cout<<"\nLoi chen. Do nhap sai vi tri chen!";
	getch();
}

void svApp::getStudent()
{
	int r;
	Sinhvien x;
	cout<<"\nNhap vi tri sinh vien :";
	cin>>r;
	if(v.getAtRank(r,x)) cout<<"\nThong tinh sinh vien :"<<x;
	else cout<<"\nKhong the lay thong tin. Loi do vi tri lay!";
	getch();
}

void svApp::removeStudent()
{
	int r;
	Sinhvien x;
	cout<<"\nNhap vao vi tri muon xoa :";
	cin>>r;
	if(v.removeAtRank(r,x)) cout<<"\nThong tin sinh vien bi xoa :"<<x;
	else cout<<"\nXoa khong thanh cong. Loi do vo tri xoa!";
	getch();
}

void svApp::replaceStudent()
{
	int r;
	Sinhvien x;
	cout<<"\nNhap vi tri muon thay the :";
	cin>>r;
	cout<<"\nNhap thong tin sinh vien moi:";
	cin>>x;
	if(v.replaceAtRank(r,x)) cout<<"\nThay the thanh cong!";
	else cout<<"\nThay the khong thanh cong. Loi do vi tri thay!";
	getch();
}
void svApp::listStudent()
{
	VectorItr<Sinhvien> Itr(&v);
	while(Itr.hasNext()) cout<<Itr.Next()<<endl;
	getch();
}



