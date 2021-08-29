#include"iostream"
#include"cmath"
using namespace std;
class MT
{
	private:
		int **a;
		int m,n;//int n
	public:
		void nhap();
		void xuat();
		int tongcheotren();
		int chanmin();	
};
void MT::nhap()
{
	cout<<"m = ";cin>>m;
	cout<<"n = ";cin>>n;
	a = new int*[m+1];
	for(int i=1;i<=m;i++)
		a[i]=new int[n+1];
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}
}
void MT::xuat()
{
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
			cout<<a[i][j]<<"\t";
			cout<<"\n";
	}
}
int MT::tongcheotren()
{
	int s=0;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			if(i<j)	s+=a[i][j];
	return s;		
}
int MT::chanmin()
{	
	int min=-1;
	for (int i=1;i<=m;i++)
	{
    	for (int j = 1;j<=n; j++) 
		{
    		if(a[i][j] % 2 == 0)
			{
            	if (min == -1) 
				{
              		min = a[i][j];
            	}
				else if (a[i][j] < min) 
				{
               		min = a[i][j];
            	}
        	}
    	}
    }
    return min;
}
int main()
{
	MT a;
	a.nhap();
	a.xuat();
	int tong = a.tongcheotren();
	cout<<endl<<tong;
	if(a.chanmin()==-1) 
		cout<<"\nk co";
	else
		cout<<endl<<a.chanmin();	
}
