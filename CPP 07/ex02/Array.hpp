#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T> class Array
{
	private:
		T *elements;
		unsigned int array_size;
	public:
		Array(){this->array_size = 0;this->elements = NULL;};
		Array(unsigned int n){
			this->array_size = n;
			this->elements = new T[n]();};
		~Array(){
			if (this->elements)
				delete[] this->elements;
		};
		Array(const Array &copy){
				this->elements = new T[copy.array_size];
				for (unsigned int i = 0; i < copy.array_size; i++)
				{
					this->elements[i] = copy.elements[i];
				}
				this->array_size = copy.array_size;
		};
		Array &operator=(const Array &copy){
			if (this != &copy)
			{
				if (this->elements)
					delete[] this->elements;
				this->elements = new T[copy.array_size];
				for (unsigned int i = 0; i < copy.array_size; i++)
				{
					this->elements[i] = copy.elements[i];
				}
				this->array_size = copy.array_size;
			}
			return (*this);
		};
		unsigned int	size(){return (this->array_size);};
		T &operator[](int index) const {
			if (index < 0 || index >= (int)this->array_size)
				throw std::out_of_range("\033[31mIncorrect Index\n\033[0m");
			else
			{
				return (this->elements[index]);
			}
		};
};


#endif