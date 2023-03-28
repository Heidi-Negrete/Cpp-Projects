#include <iostream>

// RAII.
template <typename T>
class DynamicArray
{
	size_t	m_size;
	T*	m_arr;

public:
	// constructor acquires the resource
	DynamicArray(size_t size)
		: m_size(size)
		, m_arr (new T[size])
	{
		std::cout << "Array Constructor\n";
	}

	// destructor deallocates the resource
	~DynamicArray()
	{
		delete[] m_arr;
		std::cout << "Array Destructor";
	}

	int get(size_t index) const
	{
		return m_arr[index];
	}

	void set(size_t index, int val)
	{
		m_arr[index] = val;
	}

	void print() const
	{
		for (size_t i = 0; i < m_size; i++)
		{
			std::cout << i << " " << m_arr[i] << "\n";
		}
	}
};
int main()
{
	DynamicArray<int> myArray(10);
	myArray.set(4, 7);
	myArray.print();
	return 0;
}