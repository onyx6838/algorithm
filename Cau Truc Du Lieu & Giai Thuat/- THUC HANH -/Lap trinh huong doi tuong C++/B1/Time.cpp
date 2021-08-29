#include"iostream"
using namespace std;
class Time
{
	private:
		int hr,mn,sc;
	public:
		Time(int h=0,int m=0,int s=0);
		void input();
		void display();
		
		friend istream &operator>>(istream &in,Time &a);
		friend ostream &operator<<(ostream &ou,Time &a);
		
		void setHour(int h){hr=h;};
		void setMinute(int m){mn=m;};
		void setSecond(int s){sc=s;};
		
		int getHour(){return hr;};
		int getMinute(){return mn;};
		int getSecond(){return sc;};
};
istream &operator>>(istream &in,Time &a)
{
	cout<<"Hour: ";in>>a.hr;
	cout<<"Minute: ";in>>a.mn;
	cout<<"Second: ";in>>a.sc;
	return in;
}
ostream &operator<<(ostream &ou,Time &a)
{
	if(a.hr<10) ou<<"0"<<a.hr<<":";
	else ou<<":"<<a.hr;
	if(a.mn<10) ou<<"0"<<a.mn;
	else ou<<a.mn;
	if(a.sc<10) ou<<":"<<"0"<<a.sc;
	else ou<<":"<<a.sc;
	return ou;
}
Time::Time(int h,int m,int s)
{
	hr=(h>=0 && h<=23?h:0);
	mn=(m>=0 && m<=59?m:0);
	sc=(s>=0 && s<=59?s:0);
}
void Time::input()
{
	cout<<"Nhap gio: ";cin>>hr;
	cout<<"Nhap minute: ";cin>>mn;
	cout<<"Nhap giay: ";cin>>sc;
}
void Time::display()
{
	if(hr<10) cout<<"0"<<hr<<":";
	else cout<<":"<<hr;
	if(mn<10) cout<<"0"<<mn;
	else cout<<mn;
	if(sc<10) cout<<":"<<"0"<<sc;
	else cout<<":"<<sc;
}
int main()
{
	Time a;
	cin>>a;
	cout<<a;
//	a.display();	
}
