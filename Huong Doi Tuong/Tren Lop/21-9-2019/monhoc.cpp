//Constructor k doi, mac dinh ,co doi
#include"iostream"
using namespace std;
class MH{
	private:
		string ma,ten;
		int STC;
	public:
//		MH(string s1="",string s2="",int STC=2)
//		{
//			ma=s1;ten=s2;this->STC=STC;
//		}
		//Khai bao mac dinh khi k dung constructor k doi
//		MH()
//		{
//			ma="CPMM01";ten="Lap trinh huong doi tuong";STC=2;
//		}
		//Constructor k doi da~ gan cac du lieu cua lop khi khoi tao se co gia tri nhu the
		MH(){
		};
		MH(const string &mamon)
		{
			ma=mamon;
			ten="lap trinh huong doi tuong";STC=2;
		}
		//So bien cua constructor toi da la 3 doi( do thuoc tinh =3),co the dung
		//constructor 2 doi, 1 doi do nguoi dung muon khoi gan gia tri
		//Luu y: can XD it nhat ham tao khong doi'
		friend istream &operator>>(istream &input,MH &x)
		{
			cout<<"nhap ma mon: ";getline(input,x.ma);
			cout<<"nhap ten mon: ";getline(input,x.ten);
			cout<<"so tin chi: ";input>>x.STC;
			return input;
		}
		friend ostream &operator<<(ostream &output,const MH &x)
		{
			output<<x.ma<<" "<<x.ten<<" "<<x.STC<<endl;
			return output;
		}
};
int main()
{
	//Kieu 
//	MH m1("CPMM01","Lap trinh huong doi tuong",3),m2;
//	cin>>m2;
//	cout<<m1<<m2;
	//Kieu
//	MH m1,m2;
//	cin>>m2;
//	cout<<m1<<m2;
	//Kieu
	MH m1("CPMM01"),m2;
	cin>>m2;
	cout<<m1;
}
