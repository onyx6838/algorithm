#include<iostream>
#include"singleList.cpp"
#include"conio.h"
#include"Node.cpp"
#include"student.cpp"
#include"singlelistitr.cpp"


using namespace std;

class studentApp
{
	private:
		singleList<sinhvien> sv;
	public:
		int menu();
		void run();
		void insAfter();
		void insFirst();
		void insLast();	
		void removeStd();
		void replaceStd();
		void listStd();
		void Size();
		void getsv();
};

int studentApp::menu()
{
	cout<<"\n1. Chen cuoi sinh vien.";
	cout<<"\n2. Chen truoc mot sinh vien.";
	cout<<"\n3. Chen sau mot sinh vien.";
	cout<<"\n4. Thay the mot sinh vien.";
	cout<<"\n5. Xoa mot sinh vien.";
	cout<<"\n6. Danh sach sinh vien.";
	cout<<"\n7. Size.";
	cout<<"\n8. In ra sinh vien thu.";
	cout<<"\n9. Ket thuc chuong trinh.";
	cout<<"\nMoi ban chon:";
	int chon;
	cin>>chon;
	return chon;
}

void studentApp::run()
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
				insLast();
				break;
			case 2:
				insFirst();
				break;
			case 3:
				insAfter();
				break;
			case 4:
				replaceStd();
				break;
			case 5:
				removeStd();
				break;
			case 6:
				listStd();
				break;
			case 7:
				Size();
				break;
			case 8:
				getsv();
				break;
		}
	}while(ch != 9);
}
void studentApp::getsv()
{	
	int i;
	Node<sinhvien> *p;
	cout<<"\nNhap sinh vien thu i:";
	cin>>i;
	p = sv.getNode(i);
	if(p == NULL)
		cout<<"\nKhong the lay thong tin sinh vien!";
	else
	cout<<p->getElem();
	getch();
}
void studentApp::Size()
{
	cout<< sv.size();
	getch();
}

void studentApp::insLast()
{
	sinhvien x;
	cout<<"\nNhap thong tin sinh vien muon them:";
	cin>>x;
	if(sv.insertLast(x) != NULL) cout<<"\nThem thanh cong!";
	else cout<<"\nThem khong thanh cong!";
	getch();
}
void studentApp::insFirst()
{
	sinhvien x;
	cout<<"\nNhap thong tin sinh vien :";
	cin>>x;
	if(sv.insertFirst(x) != NULL) cout<<"\nThem thanh cong!";
	else cout<"\nThem khong thanh cong!";
	getch();
}

void studentApp::insAfter()
{
	int i;
	sinhvien x;
	Node<sinhvien> *p;
	p = new Node<sinhvien>;
	
	cout<<"\nNhap vi tri muon chen sau:";
	cin>>i;
	while(i <= 0 || i > sv.size())
	{
		cout<<"\nVi tri khong hop le. Nhap lai!";
		cin>>i;
	}
	p = sv.getNode(i);
	cout<<"\nNhap sinh vien muon chen:";
	cin>>x;
	
	if(sv.insertAfter(p,x) != NULL) cout<<"\nChen thanh cong!";
	else cout<<"\nChen khong thanh cong!";
	getch();
}

void studentApp::removeStd()
{
	int i;
	Node<sinhvien> *p;
	cout<<"\nNhap vi tri muon xoa:";
	cin>>i;
	p = sv.getNode(i);
	if(p == NULL)
		cout<<"\nVi tri khong hop le!";
	else{
		sv.remove(p);
		cout<<"\nXoa  thanh cong!";
	}	
	getch();
}
void studentApp::replaceStd()
{	
	int i;
	sinhvien x;
	Node<sinhvien> *p;
	cout<<"\nNhap vi tri muon thay the:";
	cin>>i;
	p = sv.getNode(i);
	if(p == NULL) cout<<"\nVi tri khong hop le!";
	else
	{
		cout<<"\nNhap thong tin sinh vien:";
		cin>>x;
		sv.replace(p,x);
		cout<<"\nThay the thanh cong!";
	}
	getch();
}
void studentApp::listStd()
{
	singleListItr<sinhvien> v(&sv);
	v.resest();
	while(v.hasnext())
	{
		cout<<v.next()<<endl;
	}
	getch();
}


