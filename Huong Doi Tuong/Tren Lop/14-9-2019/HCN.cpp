//#include"iostream"
//using namespace std;
//class HCN
//{
//	private:
//		float cd,cr;
//	public:
//		void nhap();
//		void in();
//		float tinhdt(){return cd*cr;};
//};
//void HCN::nhap()
//{
//	cout<<"nhap cd,cr";
//	cin>>cd>>cr;
//}
//void HCN::in()
//{
//	cout<<cd<<" "<<cr;
//}
//int main()
//{
//	float f;
//	HCN a;
//	a.nhap();
//	a.in();
//	f=a.tinhdt();
//	cout<<endl<<f;
//}
#include<iostream>
using namespace std;
class HCN
{
	private:
		float cd,cr;
	public:
		void nhap();
		void in();
		float tinhdt()
		{
			return this->cd*((*this).cr);
		}	
};
void HCN::nhap()
{
	cout<<"Nhap cdai crong";
	cin>>this->cd>>this->cr;
}
void HCN::in()
{
	cout<<(*this).cd<<(*this).cr;
}
int main()
{
	HCN a;
	float f;
	a.nhap();
	a.in();
	f=a.tinhdt();
	cout<<endl<<f;
}
