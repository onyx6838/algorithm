#include<bits/stdc++.h>
using namespace std;
class Sanpham{
	private:
		int maso;
	public:
		Sanpham();
		void nhap();
		void xuat();
};
Sanpham::Sanpham()
{
	maso=0;
}
void Sanpham::nhap()
{
	cout<<"Nhap ma so san pham: "; cin>>maso;
	while (maso<=0)
	{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap ma so san pham: "; cin>>maso;}	
}
void Sanpham::xuat()
{
	cout<<"\nMa so san pham: "<<maso;
}
class Dodiendandung:public Sanpham{
	private:
		int loai;
		int hieudienthe;
		float congsuat;
		float time;
	public:
		Dodiendandung():Sanpham()
		{
			loai=0;
			hieudienthe=0;
			congsuat=0;
			time=0;
		}
		void nhap();
		void xuat();
		float laythoigian();
		float laycongsuat();
};
void Dodiendandung::nhap()
{
	Sanpham::nhap();
	cout<<"Nhap loai do dien. Gia tri tuong ung nhu sau:\n1. Ti vi\n2. Tu lanh\n3. Quat\n4. Dieu hoa\n5. May giat\n6. Den";
	cout<<"\nNhap so de chon: "; cin>>loai;
	while (loai<1 || loai>6)
	{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap so de chon: "; cin>>loai;}
	cout<<"Nhap hieu dien the dinh muc cua do dien (don vi V): "; cin>>hieudienthe;
	while (hieudienthe<0)
	{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap hieu dien the dinh muc cua do dien (don vi V): "; cin>>hieudienthe;}
	cout<<"Nhap cong suat dinh muc cua do dien (don vi W): "; cin>>congsuat;
	while (congsuat<0)
	{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap cong suat dinh muc cua do dien (don vi W): "; cin>>congsuat;}
	cout<<"Nhap thoi gian chay cua do dien (don vi giay): "; cin>>time;
	while (time<0)
	{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap thoi gian chay cua do dien (don vi giay): "; cin>>time;}	
}
void Dodiendandung::xuat()
{
	Sanpham::xuat();
	cout<<"\nLoai: ";
	if (loai==1) cout<<"Ti vi";
	if (loai==2) cout<<"Tu lanh";
	if (loai==3) cout<<"Quat";
	if (loai==4) cout<<"Dieu hoa";
	if (loai==5) cout<<"May giat";
	if (loai==6) cout<<"Den";
	cout<<"\nHieu dien the dinh muc: "<<hieudienthe<<"V";
	cout<<"\nCong suat dinh muc: "<<congsuat<<"W";
	float giay=time;
	int phut=0;
	int gio=0;
	int ngay=0;
	while (giay>59)
	{
		giay-=60;
		phut+=1;
	}
	while (phut>59)
	{
		phut-=60;
		gio+=1;
	}
	while (gio>23)
	{
		gio-=23;
		ngay+=1;
	}
	cout<<"\nThoi gian chay: ";
	cout<<ngay<<" ngay "<<gio<<" gio "<<phut<<" phut "<<giay<<" giay";
}
float Dodiendandung::laythoigian()
{
	return time;
}
float Dodiendandung::laycongsuat()
{
	return congsuat;
}
void app()
{
	int n; Dodiendandung *A;
	cout<<"Nhap so luong san pham: "; cin>>n;
	while (n<=0)
	{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap so luong san pham: "; cin>>n;}
	A=new Dodiendandung[n+1];
	int i=1;
	while (i<=n)
	{
		cout<<"Nhap thong tin do dien thu "<<i<<":\n";
		A[i].nhap();
		i++;
	}
	cout<<"\nThong tin "<<n<<" do dien vua nhap:";
	int j=1;
	while (j<=n)
	{
		cout<<"\nDo dien thu "<<j<<":";
		A[j].xuat();
		j++;
	}
	float max=A[1].laythoigian()*A[1].laycongsuat();
	int k=2;
	while (k<=n)
	{
		if (A[k].laythoigian()*A[k].laycongsuat()>max) max=A[k].laythoigian()*A[k].laycongsuat();
		k++;
	}
	cout<<"\n\nCac do dien tieu thu dien nhieu nhat la:";
	int l=1;
	while (l<=n)
	{
		if (A[l].laythoigian()*A[l].laycongsuat()==max) 
		{
			A[l].xuat();
			cout<<"\nDien nang tieu thu: "<<(A[l].laythoigian()*A[l].laycongsuat()/1000)/3600<<"kWh";
		}
		l++;
	}
	int money=2500;
	cout<<"\n\nDon gia tien dien: "<<money<<"VND/kWh";
	int total=0;
	int o=0;
	while (o<=n)
	{
		total+=money*((A[o].laythoigian()*A[o].laycongsuat()/1000)/3600);
		o++;
	}
	cout<<"\nTong tien dien phai tra la: "<<total<<"VND";
}
void run()
{
	 app();
}
int main()
{
	run();
}

