#ifndef INTARRAY_H
#define INTARRAY_H

class IntArray
{
private:
	int m_length{};
	int* m_data{}; // pointer because going to have to use dynamic memory

public:
	IntArray() = default;
	IntArray(int length) : m_length{ length }
	{
		assert(length >= 0);

		if (length > 0)
			m_data = new int[length]{};
	}
	~IntArray()
	{
		delete[] m_data; // array version
	}
	void erase()
	{
		delete[] m_data;

		m_data = nullptr;
		m_length = 0;
	}
	int& operator[](int index)
	{
		assert(index >= 0 && index < m_length);
		return m_data[index];
	}

	int getLength() const { return m_length; }
};
#endif
