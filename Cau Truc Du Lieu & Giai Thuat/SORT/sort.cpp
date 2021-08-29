#include<iostream>
using namespace std;
template<class T>
class dayso
{
	private:
		T *a;
		int n;
	public:
		friend void Swap(T &a,T &b);
		void input();
		friend void pushdown(T *a, int i, int n);
		void heapsort();
		int binarySearch(int L, int R, T x);
		void output();
		int size(){return n;}
};
template<class T>
void Swap(T &a,T &b)
{
	T tg=a;
	a=b;
	b=tg;
}
template<class T>
void dayso<T>::input()
{
	cin>>n;
	a = new T[n];
	for(int i = 1; i <= n; i++)
	{
		cin>>a[i];
	}
}
template<class T>
void pushdown(T *a, int i, int n)
{
	int j = i, max, kt = 0;
	while(j <= n/2 && kt==0)
	{
		if(2*j == n)
		{
			max = 2*j;
		}
		else 
		{
			if(a[2*j] <= a[2*j+1])	max = 2*j+1;
			else	max = 2*j;
		}
		if(a[j] < a[max])
		{
			Swap(a[j],a[max]);
			j = max;
		}
		else 
		{
			kt = 1;
		}
	}
}
template<class T>
void dayso<T>::heapsort()
{
	int i;
	for(i =n/2; i >= 1; i--)
	{
		pushdown(a,i,n);
	}
	for(i = n; i >=2; i--)
	{
		Swap(a[1],a[i]);
		pushdown(a,1,i-1);
	}
}
template<class T>
void dayso<T>::output()
{
	for(int i = 1; i <= n; i++)
	{
		cout<<a[i]<<" ";
	}
}
template<class T>
int dayso<T>::binarySearch(int L, int R, T x)
{
	while(L <= R)
	{
		int M = L + (R-L)/2;
		if(a[M] == x) return M;
		else if(a[M] > x) R = M-1;
		else L = M+1;
	}
	return -1;
}
int main()
{
	dayso<int> a;
	a.input();
	a.heapsort();
	cout<<"\nDay so :";
	a.output();
	int x;
	printf("\nNhap x can tim:");
	cin>>x;	
	if(a.binarySearch(1,a.size(),x)!=-1) cout<<"\nCo ";
	else cout<<"\nKhong";
	return 0;
}
