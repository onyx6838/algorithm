#include"iostream"
using namespace std;
class hs
{
	private:
		char ma[30],ten[30];
		float diem;
		int khoa;
	public:
		friend istream &operator>>(istream &in,hs &a);
		friend ostream &operator<<(ostream &ou,hs &a);
		int getkhoa(){return khoa;}
		float getdiem(){return diem;}
};
istream &operator>>(istream &in,hs &a)
{
	cout<<"\nTen HS: ";
	in.ignore(1);
	in.get(a.ten,30);
	cout<<"Ma HS: ";
	in.ignore(1);
	in.get(a.ma,30);
	cout<<"Diem HS: ";
	in>>a.diem;
	cout<<"Khoa HS: ";
	in>>a.khoa;
	return in;
}
ostream &operator<<(ostream &ou,hs &a)
{
	ou<<"\n- Ten: ";
	ou<<a.ten;
	ou<<"\n- Ma: ";
	ou<<a.ma;
	ou<<"\n- Diem: ";
	ou<<a.diem;
	ou<<"\n- Khoa: ";
	ou<<a.khoa;
	return ou;
}
