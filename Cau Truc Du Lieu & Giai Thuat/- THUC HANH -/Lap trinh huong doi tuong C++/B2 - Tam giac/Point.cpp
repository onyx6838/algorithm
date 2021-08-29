#include"iostream"
#include"cmath"
using namespace std;
class Point
{
	private:
		float x,y;
	public:
		Point(int x1=0,int y1=0)
		{
			x=x1;
			y=y1;
		};
		void input();
		void display();
		
		friend istream &operator>>(istream &in,Point &a);
		friend ostream &operator<<(ostream &ou,Point &a);
		
		void setX(float x1){x=x1;};
		void setY(float y1){y=y1;};
		
		float getX(){return x;};
		float getY(){return y;};
		float distance(Point d);
};
istream &operator>>(istream &in,Point &a)
{
	cout<<"\nNhap x: ";in>>a.x;
	cout<<"Nhap y: ";in>>a.y;
	return in;
}
ostream &operator<<(ostream &ou,Point &a)
{
	ou<<"( "<<a.x<<","<<a.y<<" )";
	return ou;
}
void Point::input()
{
	cout<<"\nNhap x: ";cin>>x;
	cout<<"Nhap y: ";cin>>y;
}
void Point::display()
{
	cout<<"( "<<x<<","<<y<<" )";
}
float Point::distance(Point d)
{
	return sqrt(pow(x-d.x,2)+pow(y-d.y,2));
}
