#include"iostream"
#include"Point.cpp"
#include"cmath"
using namespace std;
class Triangle
{
	private:
		Point a,b,c;
	public:
		Triangle(Point x=0,Point y=0,Point z=0)
		{
			a=x;b=y;c=z;
		};
		void inputT();
		void displayT();
		
		friend istream &operator>>(istream &in,Triangle &x);
		friend ostream &operator<<(ostream &ou,Triangle &x);
		
		float S();
		float P();
		
		int Tri();
};
istream &operator>>(istream &is,Triangle &x)
{
	cout<<"Nhap canh a: ";
	is>>x.a;
	cout<<"\nNhap canh b: ";
	is>>x.b;
	cout<<"\nNhap canh c: ";
	is>>x.c;
//	if(Tri())	cout<<"Tao thanh TG";
//	else cout<<"Khong tao thanh TG";
	return is;
}
ostream &operator<<(ostream &os,Triangle &x)
{
	os<<"\na = "<<x.a;
	os<<"\nb = "<<x.b;
	os<<"\nc = "<<x.c;
	return os;
}
int Triangle::Tri()
{
	float ab,bc,ca;
	ab=a.distance(b);
	bc=b.distance(c);
	ca=c.distance(a);
	if(ab+bc>ca || bc+ca>ab || ca+ab>bc)	return 1;
	return 0;
}
void Triangle::inputT()
{
	cout<<"Nhap canh a: ";
	a.input();
	cout<<"\nNhap canh b: ";
	b.input();
	cout<<"\nNhap canh c: ";
	c.input();
	if(Tri())	cout<<"Tao thanh TG";
	else cout<<"Khong tao thanh TG";
}
void Triangle::displayT()
{
	cout<<"\na = ";a.display();
	cout<<"\nb = ";b.display();
	cout<<"\nc = ";c.display();
}
float Triangle::P()
{
	return a.distance(b)+b.distance(c)+c.distance(a);
}
float Triangle::S()
{
	float p,ab,bc,ca;
	p=P()/2;
	ab=a.distance(b);
	bc=b.distance(c);
	ca=c.distance(a);
	return sqrt(p*(p-ab)*(p-bc)*(p-ca));
}
int main()
{
	Triangle a;
	cin>>a;
	cout<<a;
	cout<<"\nChu vi = "<<a.P();
	cout<<"\nDien tich = "<<a.S();
}
