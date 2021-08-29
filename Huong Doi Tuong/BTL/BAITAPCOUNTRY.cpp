#include<bits/stdc++.h>
using namespace std;
void listchoose()
{
	cout<<"Moi ban lua chon:";
	cout<<"\n1. Nhap vao day cac nuoc";
	cout<<"\n2. Xuat ra day cac nuoc";
	cout<<"\n3. Tim cac nuoc co nhiet do trong khoang 20-30oC";
	cout<<"\n4. Tim cac nuoc co do am trong khoang 60-70%";
	cout<<"\n5. Tim cac nuoc co dien tich lon nhat";
	cout<<"\n6. Tim cac nuoc co mat do dan so thap nhat";
}
void getch()
{
	cout<<"\n";
	system("pause");
}
int menu()
{
	listchoose();
	int select;
	cout<<"\nNhap so de chon: ";
	cin>>select;
	while (select<1 || select>6) 
	{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap so de chon: "; cin>>select;}
	return select;
}
class Country{
	private:
		string code;
		string capital;
		long long population;
		double area;
	public:
		void nhap();
		void xuat();
		double layMDDS();
		double laydientich();	
};
void Country::nhap()
{
	cout<<"Nhap ma cua nuoc: "; fflush(stdin); getline(cin,code);
	cout<<"Nhap thu do cua nuoc: "; fflush(stdin); getline(cin,capital);
	cout<<"Nhap dan so cua nuoc: "; cin>>population;
	while(population<0)
	{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap dan so cua nuoc: "; cin>>population;}
	cout<<"Nhap dien tich cua nuoc: "; cin>>area;
	while(area<0)
	{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap dien tich cua nuoc: "; cin>>area;}
}
void Country::xuat()
{
	cout<<"\nMa: "<<code;
	cout<<"\nThu do: "<<capital;
	cout<<"\nDan so: "<<population<<" nguoi";
	cout<<"\nDien tich: "<<area<<"km2";
}
double Country::layMDDS()
{
	double MDDS;
	MDDS=population/area;
	return MDDS;
}
double Country::laydientich()
{
	return area;
}
class WeatherForecast:public Country{
	private:
		int temperature;
		int humidity;
	public:
		void nhap();
		void xuat();
		int laynhietdo();
		int laydoam();
};
void WeatherForecast::nhap()
{
	Country::nhap();
	cout<<"Nhap nhiet do cua nuoc (don vi oC): "; cin>>temperature;
	cout<<"Nhap do am cua nuoc (don vi %): "; cin>>humidity;
	while (humidity<0 || humidity>100)
	{cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap do am cua nuoc: "; cin>>humidity;}
}
void WeatherForecast::xuat()
{
	Country::xuat();
	cout<<"\nNhiet do: "<<temperature<<"oC";
	cout<<"\nDo am: "<<humidity<<"%";
}
int WeatherForecast::laynhietdo()
{
	return temperature;
}
int WeatherForecast::laydoam()
{
	return humidity;
}
class Day{
	private:
		int n;
		WeatherForecast *A;
	public:
		void nhap();
		void xuat();
		void kiemtranhietdo();
		void kiemtradoam();
		void dientichlonnhat();
		void matdodansothapnhat();
};
void Day::nhap()
{
	cout<<"Nhap so nuoc: "; cin>>n;
	while (n<=0) {cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap so nuoc: "; cin>>n;}
	A=new WeatherForecast[n+1];
	for (int i=1;i<=n;i++)
	{
		cout<<"Nhap thong tin nuoc thu "<<i<<":\n";
		A[i].nhap();
	}
	cout<<"Da nhap xong!";
	getch();
}
void Day::xuat()
{
	if (!n) cout<<"\nChua co thong tin cac nuoc";
	else
	{
		cout<<"\nThong tin "<<n<<" nuoc vua nhap:";
		for (int i=1;i<=n;i++)
		{
			cout<<"\nNuoc thu "<<i<<":";
			A[i].xuat();
		}
	}
	getch();
}
void Day::kiemtranhietdo()
{
	if (!n) cout<<"\nChua co thong tin cac nuoc";
	else
	{
		cout<<"\nCac nuoc co nhiet do trong khoang 20-30oC la:";
		for (int i=1;i<=n;i++)
		{
			if (A[i].laynhietdo()>=20 && A[i].laynhietdo()<=30)
			A[i].xuat();
			else cout<<"\nKhong co nuoc nao co nhiet do trong khoang 20-30oC";
		}
	}
	getch();
}
void Day::kiemtradoam()
{
	if (!n) cout<<"\nChua co thong tin cac nuoc";
	else
	{
		cout<<"\nCac nuoc co do am trong khoang 60-70% la:";
		for (int i=1;i<=n;i++)
		{
			if (A[i].laydoam()>=60 && A[i].laydoam()<=70)
			A[i].xuat();
			else cout<<"\nKhong co nuoc nao co do am trong khoang 60-70%";
		}
	}
	getch();
}
void Day::dientichlonnhat()
{
	if (!n) cout<<"\nChua co thong tin cac nuoc";
	else
	{
		double max=A[1].laydientich();
		for (int i=2;i<=n;i++)
		if (A[i].laydientich()>max) max=A[i].laydientich();
		cout<<"\nCac nuoc co dien tich lon nhat la:";
		for (int i=1;i<=n;i++)
		if (A[i].laydientich()==max) A[i].xuat();
	}
	getch();
}
void Day::matdodansothapnhat()
{
	if (!n) cout<<"\nChua co thong tin cac nuoc";
	else
	{
		double min=A[1].layMDDS();
		for (int i=2;i<=n;i++)
		if (A[i].layMDDS()<min) min=A[i].layMDDS();
		cout<<"\nCac nuoc co mat do dan so thap nhat la:";
		for (int i=1;i<=n;i++)
		if (A[i].layMDDS()==min)
		{
			A[i].xuat();
			cout<<"\nMat do dan so: "<<A[i].layMDDS()<<" nguoi/km2";
		}
	}
	getch();
}
void WeatherForecastapp()
{
	Day A; int choose;
	do
	{
		system("cls");
		choose=menu();
		system("cls");
		cout<<"";
		switch(choose)
		{
			case 1:
				A.nhap();
				break;
			case 2:
				A.xuat();
				break;
			case 3:
				A.kiemtranhietdo();
				break;
			case 4:
				A.kiemtradoam();
				break;
			case 5:
				A.dientichlonnhat();
				break;
			case 6:
				A.matdodansothapnhat();
				break;	
		}
	}while (choose>=1 && choose <=6);
}
void run()
{
	 WeatherForecastapp();
}
int main()
{
	run();
}
