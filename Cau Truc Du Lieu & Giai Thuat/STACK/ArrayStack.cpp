#ifndef ARSTK_CPP
#define ARSTK_CPP 1
#include"iostream"
using namespace std;
template<class T>
class ArrayStack
{
	private:
		int N;//So phan tu toi da
		T *S;
		int t;//Luu chi so phan tu cuoi cung
	public:
		ArrayStack(int c=25);
		int isEmpty();
		int size();
		int top(T &o);
		int push(T o);
		int pop(T &o);
};
template<class T>
ArrayStack<T>::ArrayStack(int c)
{
	N=c;
	S=new T[N];
	t=-1;
}
template<class T>
int ArrayStack<T>::isEmpty()
{
	return (t<0);
}
template<class T>
int ArrayStack<T>::size()
{
	return t+1;
}
template<class T>
int ArrayStack<T>::top(T &o)//lay phan tu dau stack nhung k xoa (peek)
{
	if(t < 0) return 0;
	o = S[t];
	return 1;
}
template<class T>
int ArrayStack<T>::push(T o)
{
	if(t==N-1)	return 0;
	else
	{
		S[++t]=o;
		return 1;
	}
}
template<class T>
int ArrayStack<T>::pop(T &o)//lay ptu dau` va` xoa (pop)
{
	if(t<0)	return 0;
	o=S[t--];
	return 1;
}
#endif
