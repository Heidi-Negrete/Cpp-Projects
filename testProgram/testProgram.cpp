#include <iostream>

// RAII.
class IntArray
{
	size_t	m_size;
	int*	m_arr;

public:
	// constructor acquires the resource
	IntArray(size_t size)
		: m_size(size)
		, m_arr (new int[size])
	{
		std::cout << "Array Constructor\n";
	}

	// destructor deallocates the resource
	~IntArray()
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
	IntArray myArray(10);
	myArray.print();
	return 0;
}