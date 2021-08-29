#include<bits/stdc++.h>
using namespace std;
class People{
	private:
		string ma;
		string ten;
	public:
		People();
		void nhap();
		void xuat();
};
People::People()
{
	ma="";
	ten="";
}
void People::nhap()
{
	cout<<"Nhap ma hoc sinh: "; fflush(stdin); getline(cin,ma);
	cout<<"Nhap ten hoc sinh: "; fflush(stdin); getline(cin,ten);
}
void People::xuat()
{
	cout<<"\nMa: "<<ma;
	cout<<"\nTen: "<<ten;
}
class Student:public People{
	private:
		int tohop;
		float diemtoan;
		float diemvan;
		float diemly;
		float diemhoa;
		float diemsinh;
		float diemngoaingu;
		float diemsu;
		float diemdia;
		float diemGDCD;
		float diemKHTN;
		float diemKHXH;
	public:
		Student():People()
		{
			tohop=0;
			diemtoan=0;
			diemvan=0;
			diemly=0;
			diemhoa=0;
			diemsinh=0;
			diemngoaingu=0;
			diemsu=0;
			diemdia=0;
			diemGDCD=0;
			diemKHTN=0;
			diemKHXH=0;
		}
		void nhap();
		void xuat();
		float gettohopA0();
		float gettohopA1();
		float gettohopD0();
		float gettohopD7();
};
void Student::nhap()
{
	People::nhap();
	cout<<"Nhap diem toan: "; cin>>diemtoan;
	while (diemtoan<0 || diemtoan>10)
	{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap diem toan: "; cin>>diemtoan;}
	cout<<"Nhap diem van: "; cin>>diemvan;
	while (diemvan<0 || diemvan>10)
	{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap diem van: "; cin>>diemvan;}
	cout<<"Nhap diem ngoai ngu: "; cin>>diemngoaingu;
	while (diemngoaingu<0 || diemngoaingu>10)
	{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap diem ngoai ngu: "; cin>>diemngoaingu;}
	cout<<"Nhap to hop mon. Gia tri tuong ung nhu sau:\n1. Khoa hoc tu nhien\n2. Khoa hoc xa hoi";
	cout<<"\nNhap so de chon: "; cin>>tohop;
	while (tohop<1 || tohop>2)
	{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap so de chon: "; cin>>tohop;}
	if (tohop==1)
	{
		cout<<"Nhap diem vat ly: "; cin>>diemly;
		while (diemly<0 || diemly>10)
		{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap diem vat ly: "; cin>>diemly;}
		cout<<"Nhap diem hoa hoc: "; cin>>diemhoa;
		while (diemhoa<0 || diemhoa>10)
		{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap diem hoa hoc: "; cin>>diemhoa;}
		cout<<"Nhap diem sinh hoc: "; cin>>diemsinh;
		while (diemsinh<0 || diemsinh>10)
		{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap diem sinh hoc: "; cin>>diemsinh;}
		diemKHTN=(diemly+diemhoa+diemsinh)/3;
	}
	if (tohop==2)
	{
		cout<<"Nhap diem lich su: "; cin>>diemsu;
		while (diemsu<0 || diemsu>10)
		{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap diem lich su: "; cin>>diemsu;}
		cout<<"Nhap diem dia ly: "; cin>>diemdia;
		while (diemdia<0 || diemdia>10)
		{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap diem dia ly: "; cin>>diemdia;}
		cout<<"Nhap diem GDCD: "; cin>>diemGDCD;
		while (diemGDCD<0 || diemGDCD>10)
		{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap diem GDCD: "; cin>>diemGDCD;}
		diemKHXH=(diemsu+diemdia+diemGDCD)/3;
	}	
}
void Student::xuat()
{
	People::xuat();
	cout<<"\nDiem toan: "<<diemtoan;
	cout<<"\nDiem van: "<<diemvan;
	if (tohop==1)
	{
		cout<<"\nDiem vat ly: "<<diemly;
		cout<<"\nDiem hoa hoc: "<<diemhoa;
		cout<<"\nDiem sinh hoc: "<<diemsinh;
		cout<<"\nTong diem bai thi khoa hoc tu nhien: "<<diemKHTN;
	}
	if (tohop==2)
	{
		cout<<"\nDiem lich su: "<<diemsu;
		cout<<"\nDiem dia ly: "<<diemdia;
		cout<<"\nDiem GDCD: "<<diemGDCD;
		cout<<"\nTong diem bai thi khoa hoc xa hoi: "<<diemKHXH;
	}
	cout<<"\nDiem ngoai ngu: "<<diemngoaingu;
}
float Student::gettohopA0()
{
	return diemtoan+diemly+diemhoa;
}
float Student::gettohopA1()
{
	return diemtoan+diemly+diemngoaingu;
}
float Student::gettohopD0()
{
	return diemtoan+diemvan+diemngoaingu;
}
float Student::gettohopD7()
{
	return diemtoan+diemhoa+diemngoaingu;
}
void studentapp()
{
	int n; Student *A;
	cout<<"Nhap so luong hoc sinh: "; cin>>n;
	while (n<=0)
	{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap so luong hoc sinh: "; cin>>n;}
	A=new Student[n+1];
	int i=1;
	while (i<=n)
	{
		cout<<"Nhap thong tin hoc sinh thu "<<i<<":\n";
		A[i].nhap();
		i++;
	}
	cout<<"\nThong tin "<<n<<" hoc sinh:";
	int j=1;
	while (j<=n)
	{
		cout<<"\nHoc sinh thu "<<j<<":";
		A[j].xuat();
		j++;
	}
	cout<<"\n\nDanh sach cac hoc sinh trung tuyen nganh CNTT la:";
	int k=1, l=0;
	while (k<=n)
	{
		if (A[k].gettohopA0()>=21.5 || A[k].gettohopA1()>=21.5 || A[k].gettohopD7()>=21.5)
		{
			A[k].xuat();
			float t=A[k].gettohopA0()>=21.5?A[k].gettohopA0():(A[k].gettohopA1()>=21.5?A[k].gettohopA1():(A[k].gettohopD7()>=21.5?A[k].gettohopD7():0));
			cout<<"\nTong diem trung tuyen: "<<t;
			l=1;
		}
		k++;
	}
	if (l==0) cout<<"\nKhong co hoc sinh nao trung tuyen nganh CNTT";
}
void run()
{
	 studentapp();
}
int main()
{
	run();
}

