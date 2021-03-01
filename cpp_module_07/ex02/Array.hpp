#ifndef Array_hpp
#define Array_hpp

#include <exception>

template <typename T>
class Array
{
private:
	unsigned int _size;
	T* _array;
public:
	Array()
	{
		_array = new T[0];
		_size = 0;
	}

	Array(unsigned int n)
	{
		_size = n;
		_array = new T[n];
	}

	Array(const Array& other)
	{
		_array = new T[other.size()];
		_size = other.size();
		for (unsigned int i = 0;i < _size;i++)
			_array[i] = other._array[i];
	}

	virtual ~Array()
	{
		delete[] _array;
	}

	Array &operator=(const Array& other)
	{
		if (this == &other)
			return *this;
		
		delete[] _array;
		_array = new T[other.size()];
		_size = other.size();
		for (unsigned int i = 0;i < _size;i++)
			_array[i] = other._array[i];

		return *this;
	}

 	T &operator[](unsigned int idx) const
	{
		if (idx >= _size)
			throw ArrayOutOfBoundException();
		return _array[idx];
	}
	
	unsigned int size() const
	{
		return _size;
	}

	class ArrayOutOfBoundException : public std::exception
	{
	public:
		virtual const char* what() const _NOEXCEPT
		{
			return "Error: Array: Out of bounds";
		}
	};
};

#endif