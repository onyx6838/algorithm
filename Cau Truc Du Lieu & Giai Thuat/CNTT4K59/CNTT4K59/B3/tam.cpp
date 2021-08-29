#include<bits/stdc++.h>
using namespace std;
class Diem
{
	float x,y;
	public:
	void Nhap();
	friend float KC(Diem A,Diem B) //khoang cach
	{
		return sqrt(pow(A.x-B.x,2)+pow(A.y-B.y,2));
	}
	friend float DT(Diem A,Diem B) //dinh thuc
	{
		return A.x*B.y-A.y*B.x;
	}
};
void Diem::Nhap()
{
	cout<<"Hoanh do : "; cin>>x;
	cout<<"Tung  do : "; cin>>y;
}

struct Tamgiac
{
	private : Diem A,B,C;
	public:
	void Nhap()
	{
		cout<<"Toa do A :\n"; A.Nhap();
		cout<<"Toa do B :\n"; B.Nhap();
		cout<<"Toa do C :\n"; C.Nhap();
	}
	float Chuvi()
	{
		return KC(A,B)+KC(A,C)+KC(B,C);
	}
	float Dientich()
	{
		return fabs(DT(A,B)+DT(B,C)+DT(C,A))/2;
	}
};
int main()
{
	Tamgiac T;
	T.Nhap();
	cout<<"\nChu vi "<<T.Chuvi();
	cout<<"\nDien tich "<<T.Dientich();
}


