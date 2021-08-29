#include"iostream"
using namespace std;
class DN
{
	private:
		int n;
		int *a;
	public:  
		void nhap()
		{
			cout<<"n = ";cin>>n;
			a=new int[n+1];
			for(int i=1;i<=n;i++)
				{
					cout<<"a["<<i<<"] = ";
					cin>>a[i];
				}
		}
		void xuat()
		{
			for(int i=1;i<=n;i++)
			{
				cout<<a[i]<<" ";
			}
		}
		int tong()
		{
			int s=0;
			for(int i=1;i<=n;i++)
			{
				s+=a[i];
			}
			return s;
		}
		float TBC()
		{
			int s=0;
			for(int i=1;i<=n;i++)
			{
				s+=a[i];
			}
			return 1.0*s/n;
		}
		int max()
		{
			float max=a[1];
			for(int i=1;i<=n;i++)
			{
				if(max<a[i])	max=a[i];
			}
			return max;
		}
		int min()
		{	
			float min=a[1];
			for(int i=1;i<=n;i++)
			{
				if(min>a[i])	min=a[i];
			}
			return min;
		}	
};
int main()
{
	DN a,b,c;
		cout<<"Nhap day a: \n";
	a.nhap();
	cout<<"Tong day a = "<<a.tong();
	cout<<"\nTBC day a = "<<a.TBC();
	cout<<"\nMax day a = "<<a.max();
	cout<<"\nMin day a = "<<a.min();
		cout<<"\nNhap day b: \n";
	b.nhap();
	cout<<"Tong day b = "<<b.tong();
	cout<<"\nTBC day b = "<<b.TBC();
	cout<<"\nMax day b = "<<b.max();
	cout<<"\nMin day b = "<<b.min();
		cout<<"\nNhap day c: \n";
	c.nhap();
	cout<<"Tong day c = "<<c.tong();
	cout<<"\nTBC day c = "<<c.TBC();
	cout<<"\nMax day c = "<<c.max();
	cout<<"\nMin day c = "<<c.min();
}
