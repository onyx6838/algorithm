#include<bits/stdc++.h>
using namespace std;
void listchoose()
{
	cout<<"Moi ban chon:";
	cout<<"\n1. Nhap vao thong tin cac mat hang";
	cout<<"\n2. In ra thong tin cac mat hang";
	cout<<"\n3. Tinh tong tien cua cac loai mat hang";
}
void getch()
{
	cout<<"\n";
	system("pause");
}
int menu()
{
	listchoose();
	int choose;
	cout<<"\nNhap so de chon: "; cin>>choose;
	while (choose<1 || choose>3)
	{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap so de chon: "; cin>>choose;}
	return choose;
}
class Mathang{
	private:
		int maso;
	public:
		void nhap();
		void xuat();
};
void Mathang::nhap()
{
	cout<<"Nhap ma so cua mat hang: "; cin>>maso;
	while (maso<=0)
	{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap ma so cua mat hang: "; cin>>maso;}
}
void Mathang::xuat()
{
	cout<<"\nMa so: "<<maso;
}
class Douong:public Mathang{
	private:
		int loai;
		int dongia;
		int SL;
	public:
		void nhap();
		void xuat();
		int tinhtien();
		int laydongia();
};
void Douong::nhap()
{
	Mathang::nhap();
	cout<<"Nhap loai do uong. Gia tri tuong ung nhu sau:\n1. Nuoc loc\n2. Nuoc ngot\n3. Bia";
	cout<<"\nNhap so de chon: "; cin>>loai;
	while (loai<1 || loai>3)
	{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap so de chon: "; cin>>loai;}
	cout<<"Nhap so luong mat hang: "; cin>>SL;
	while (SL<0)
	{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap so luong mat hang: "; cin>>SL;}
}
void Douong::xuat()
{
	Mathang::xuat();
	cout<<"\nLoai: ";
	if (loai==1) cout<<"Nuoc loc";
	if (loai==2) cout<<"Nuoc ngot";
	if (loai==3) cout<<"Bia";
	cout<<"\nSo luong: "<<SL;
}
int Douong::tinhtien()
{
	if (loai==1) dongia=5000;
	if (loai==2) dongia=10000;
	if (loai==3) dongia=8000;
	return dongia*SL;
}
class Day{
	private:
		int n;
		Douong *A;
	public:
		void nhap();
		void xuat();
		void intien();
};
void Day::nhap()
{
	cout<<"Nhap so luong do uong: "; cin>>n;
	while (n<=0)
	{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap so luong do uong: "; cin>>n;}
	A=new Douong[n+1];
	int i=1;
	while (i<=n)
	{
		cout<<"Nhap thong tin do uong thu "<<i<<":\n";
		A[i].nhap();
		i++;
	}
	cout<<"Da nhap xong";
	getch();
}
void Day::xuat()
{
	if (!n) cout<<"\nChua co thong tin ve cac loai do uong";
	else
	{
		cout<<"\nThong tin "<<n<<" do uong";
		int j=1;
		while (j<=n)
		{
			cout<<"\nDo uong thu "<<j<<":";
			A[j].xuat();
			j++;
		}
	}
	getch();
}
void Day::intien()
{
	if (!n) cout<<"\nChua co thong tin ve cac loai do uong";
	else
	{
		int s=0, k=1;
		while (k<=n)
		{
			s+=A[k].tinhtien();
			k++;
		}
		cout<<"\nTong tien cua cac loai do uong la: "<<s<<"VND";
	}
	getch();
}
void drinkapp()
{
	Day A;
	int select;
	do{
		system("cls");
		select=menu();
		system("cls");
		cout<<"";
		switch(select)
		{
			case 1:
				A.nhap();
				break;
			case 2:
				A.xuat();
				break;
			case 3:
				A.intien();
				break;
		}
	}while(select>=1 && select<=3);	
}
void run()
{
	 drinkapp();
}
int main()
{
	run();
}

