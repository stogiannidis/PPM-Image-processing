

#ifndef _ARRAY2D
#define _ARRAY2D

#include <vector>

namespace math
{

	template <typename T>
	class Array2D
	{
	protected:
		std::vector<T> buffer; 

		unsigned int width, 					
					 height;		                

	public:

		const unsigned int getWidth() const;
		
		const unsigned int getHeight() const;


		T * getRawDataPtr();

		void setData(const T * const & data_ptr);        


		T & operator () (unsigned int x, unsigned int y);

		Array2D(unsigned int width = 0, unsigned int height = 0, const T * data_ptr = 0);

		Array2D(const Array2D &src);
		
		~Array2D();

		Array2D & operator = (const Array2D & right);

	};
	
} 
#include "array2d.hpp"


#endif