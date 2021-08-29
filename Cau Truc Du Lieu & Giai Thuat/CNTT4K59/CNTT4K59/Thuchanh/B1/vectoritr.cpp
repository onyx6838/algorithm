#ifndef VectorItr_cpp
#define VectorItr_cpp
#include"Vector.cpp"
template <class T>
class VectorItr{
	private :
		 Vector<T>* theVector;
		 int cur_Index;
	public:
		VectorItr(Vector<T>*V1)
		{
			theVector = V1;
			cur_Index = 0;
		}
		int hasNext(){return cur_Index<theVector->size();}
		T next(){
			T o;
			theVector->getAtRank(cur_Index, o);
			cur_Index++;
			return o;
		}
};//End of class VectorItr
#endif

