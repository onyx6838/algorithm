#ifndef VECTOR_CPP
#define VECTOR_CPP 0
template<class T>
class Vector
{
	private:
		int N;	//So chieu toi da cua Vector
		T *V; 	//Luu tru du lieu
		int n; //So phan tu hien co trong Vector
	public:
		Vector();
		~Vector();
		int getAtRank(int r,T &o);
		int replaceAtRank(int r,T o);
		int insertAtRank(int r,T o);
		int removeAtRank(int r,T &o);
		int insertLast(T o);
		int size();
		int isEmpty();	
};
template<class T>
Vector<T>::Vector()//Vector tra kieu T
{
	V=new T[1];
	N=1;
	n=0;
}
template<class T>
Vector<T>::~Vector()
{
	delete[] V;
}
//Ham insertRank
template<class T>
int Vector<T>::insertAtRank(int r,T o)//r vi tri cua ptu chen` vao
{
	if(r<0 || r>n)	return 0;
	if(n==N) // Phat trien mang theo chien luoc nhân dôi
	{
		T *A;
		N=2*N;
		A=new T[N];
		for(int i=0;i<n;i++)	A[i]=V[i];
		delete[] V;
		V=A;
		int k=n-1;
		while (k>=r)	//Chuyen cac phan tu r ve sau 1 vi tri
		{
			V[k+1]=V[k];
			k--;
		}
	}	
	V[r]=o;	//Chen o vao vi tri r 
	n++;
	return 1;
}
// Ham lay ra 1 phan tu
template<class T>
int Vector<T>::getAtRank(int r,T &o)
{
	if(r<0 || r>n-1)	return 0;
	o=V[r];
	return 1;
}
//Ham thay the 1 ptu
template<class T>
int Vector<T>::replaceAtRank(int r,T o)
{
	if(r<0 || r>n-1)	return 0;
	V[r]=o;
	return 1;
}
template<class T>
int Vector<T>::removeAtRank(int r,T &o)
{
	if(r<0 || r>n-1)
		return 0;
	o=V[r];
	int k=r;
	while(k<n-1)	//chuyen cac ptu sau r ve truoc 1 vi tri
	{
		V[k]=V[k+1];
		k++;
	}
	n--;
	return 1;
}
template<class T>
int Vector<T>::size(){return n;}
template<class T>
int Vector<T>::isEmpty()
{
	return n==0;
}
#endif
