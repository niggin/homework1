#include "simple_queue.h"

template<class T>
void SimpleQueue<T>::push(T number)
{
	data.push_back(number);
}

template<class T>
T SimpleQueue<T>::pop()
{
	T temp = data[0];
	data.erase(data.begin());
	return temp;
}

template<class T>
bool SimpleQueue<T>::isEmpty() const
{
	return data.empty();
}