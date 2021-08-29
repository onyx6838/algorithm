#ifndef VECTORItr_cpp
#define VECTORItr_cpp 1
#include"vector.cpp"
template<class T>
class VectorItr
{
	private:
		Vector<T> *theVector;
		int Cur_Index;
	public:
		VectorItr(Vector<T> *V1)
		{
			theVector=V1;
			Cur_Index=0;
		}
		int hasNext()
		{
			if(Cur_Index<theVector->size())
				return 1;
			else
				return 0;	
		}
		T next()
		{
			T o;
			theVector->getAtRank(Cur_Index,o);
			Cur_Index++;
			return o;
		}	
};
#endif
