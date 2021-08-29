#ifndef VECTORItr_cpp
#define  VECTORItr_cpp 1
#include"VECTOR.cpp"
template<class T>

class VectorItr
{
	private:
		Vector<T> *theVector;
		int cur_Index;
	public:
		VectorItr(Vector<T> *v1)
		{
			theVector = v1;
			cur_Index = 0;
		}	
		int hasNext()
		{
			if(cur_Index < theVector->size()) return 1;
			else return 0;
		}
		T Next()
		{
			T o;
			theVector->getAtRank(cur_Index,o);
			cur_Index++;
			return o;
		}
};
#endif
