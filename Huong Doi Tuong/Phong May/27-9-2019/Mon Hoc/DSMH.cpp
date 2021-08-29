#include"iostream"
#include"monhoc.cpp"
class DSMH
{
	private:
		monhoc *a;
		int n;
	public:
		friend istream &operator>>(istream &in,DSMH &x);
		friend ostream &operator<<(ostream &ou,DSMH &x);
		void operator!();
		int tongtinchi();	
		void find();	
};
istream &operator>>(istream &in,DSMH &x)
{
	cout<<"Nhap n= ";
	in>>x.n;
	x.a=new monhoc[x.n+1];
	for(int i=1;i<=x.n;i++)
	{	
		cout<<"Nhap mon "<<i;
		in>>x.a[i];
	}
	return in;
}
ostream &operator<<(ostream &ou,DSMH &x)
{
	for(int i=1;i<=x.n;i++)
	{
		ou<<"\nMon thu "<<i;
		ou<<x.a[i]<<endl;
	}
	return ou;
}
void DSMH::operator!()
{
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++)
			if(a[j].gettin()>a[i].gettin())	swap(a[i],a[j]);
}
int DSMH::tongtinchi()
{
	int s=0;
	for(int i=1;i<=n;i++)
		s+=a[i].gettin();
	return s;	
}
void DSMH::find()
{
	string tim;
	cout<<"\nNhap ten can tim";
	cin.ignore(1);
	getline(cin,tim);
	for(int i=1;i<=n;i++)
	{
		if((a[i].getmamon()==tim))	
		{
			cout<<"Da tim thay";
			return;
		}	
	}
	cout<<"khong tim thay";
}
int main()
{
	DSMH a;
	int n;
	cin>>a;
	cout<<"\n------------------";
	cout<<"\nDanh sach cac mon";
	cout<<a;
	!a;
	cout<<"\n-------------------";
	cout<<"\nDS sau khi sap xep";
	cout<<a;
	cout<<"\nTong tin chi: ";
	cout<<a.tongtinchi();
	a.find();
	return 0;
}
