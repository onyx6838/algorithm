#include"iostream"
#include"hs.cpp"
using namespace std;
class lop
{
	private:
		int n;
		hs *a;
	public:
		friend istream &operator>>(istream &in,lop &x);
		friend ostream &operator<<(ostream &ou,lop &x);
		void thongke(lop &x);		
};
istream &operator>>(istream &in,lop &x)
{
	cout<<"Nhap n = ";
	in>>x.n;
	x.a=new hs[x.n+1];
	for(int i=1;i<=x.n;i++)
	{
		cout<<"Nhap HS "<<i;
		in>>x.a[i];
		cout<<endl;
	}
	return in;
}
ostream &operator<<(ostream &ou,lop &x)
{
	for(int i=1;i<=x.n;i++)
	{
		ou<<endl;
		ou<<"HS "<<i;
		ou<<x.a[i];
	}
	return ou;
}
void lop::thongke(lop &x)
{
	int dem[5];
	float d[5];
	for(int j=1;j<=4;j++)
	{
		dem[j]=0;d[j]=0;
		for(int i=1;i<=n;i++)
		{
			if(x.a[i].getkhoa()==j)
			{
				d[j]+=x.a[i].getdiem();
				dem[j]++;
			}
		}
		cout<<"\nKhoa "<<j<<" co "<<dem[j]<<" hoc sinh\n";
		if(dem[j])	cout<<"Diem Tb cua khoa "<<j<<" = "<<(d[j]/dem[j])<<endl;
		else cout<<"Khong tinh diem hoc sinh khoa "<<j<<endl;
	}
//	int m,h,b,t;
//	float s1,s2,s3,s4;
//	s1=s2=s3=s4=0;
//	m=h=b=t=0;
//	for(int i=1;i<=x.n;i++)
//	{
//		if(x.a[i].getkhoa()==1)	
//		{
//			m++;
//			s1+=x.a[i].getdiem();	
//		}
//		if(x.a[i].getkhoa()==2)
//		{
//			h++;
//			s2+=x.a[i].getdiem();	
//		}	
//		if(x.a[i].getkhoa()==3)	
//		{
//			b++;
//			s3+=x.a[i].getdiem();
//		}
//		if(x.a[i].getkhoa()==4)
//		{
//			t++;
//			s4+=x.a[i].getdiem();
//		}
//	}
//	cout<<"\nHS khoa 1 = "<<m;
//	cout<<"\nHS khoa 2 = "<<h;
//	cout<<"\nHS khoa 3 = "<<b;
//	cout<<"\nHS khoa 4 = "<<t;
//	
//	if(m!=0)	{cout<<"\nDiem tb HS khoa 1 = "<<s1/m;}
//	else s1=0;
//	if(h!=0)	{cout<<"\nDiem tb HS khoa 2 = "<<s2/h;}	
//	else s2=0;
//	if(b!=0)	{cout<<"\nDiem tb HS khoa 3 = "<<s3/b;}
//	else s3=0;
//	if(t!=0)	{cout<<"\nDiem tb HS khoa 4 = "<<s4/t;}
//	else s4=0;
}
