#ifndef VECTOR_CPP
#define VECTOR_CPP 0

template<class T>

class Vector
{
	private:
		int N;
		T *v;
		int n;
	public:
		Vector();
		~Vector();
		int getAtRank(int r, T &o);
		int replaceAtRank(int r, T o);
		int insertAtRank(int r, T o);
		int removeAtRank(int r, T &o);
		int size();
		int isEmpty();
};

template<class T>

Vector<T>::Vector()
{
	v = new T;
	N = 1;
	n = 0;
}

template<class T>

Vector<T>::~Vector()
{
	delete [] v;
}

template<class T> 

int Vector<T>::insertAtRank(int r, T o)
{
	if(r < 0 || r > n) return 0;
	if(n == N) // phat trien mang
	{
		T *A;
		N *= 2;
		A = new T [N];
		for(int i = 0; i < n; i++)
		{
			A[i] = v[i];
		}
		delete [] v;
		v = A;
	}
	int k = n - 1;
	while(k >= r)
	{
		v[k+1] = v[k];
		k--;
	}
	v[r] = o;// chen o vao vi tri r
	n++;
	return 1;
}

template<class T>
int Vector<T>::getAtRank(int r, T &o)
{
	if(r < 0 || r > n - 1) return 0;
	o = v[r];//gan phan tu can  lay tai vi tri r vao o
	return 1;
}

template<class T>
int Vector<T>::removeAtRank(int r, T &o)
{
	if(r < 0 || r > n - 1) return 0;
	o = v[r];
	int k = r;
	while(k < n - 1)
	{
		v[k] = v[k+1];
		k++;
	}
	n--;
	return 1;
}
template<class T>
int Vector<T>::replaceAtRank(int r, T o)
{
	if(r < 0 || r > n - 1 ) return 0;
	v[r] = o;
	return 1;
}
template<class T>

int Vector<T>::size()
{
	return n;
}

template<class T>

int Vector<T>::isEmpty()
{
	return n == 0;
}
#endif
