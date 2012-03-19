#include "ring_buffer.h"

template<class T>
RingBuffer<T>::RingBuffer(int new_size)
{
	size = new_size;
	data = new T[size];
	count = 0;
	begin_index = 0;
}

template<class T>
RingBuffer<T>::RingBuffer()
{
	*this = RingBuffer(100);
}

template<class T>
RingBuffer<T>::~RingBuffer()
{
	delete[] data;
}

template<class T>
void RingBuffer<T>::push_back(T x)
{
	if(count>=size) resize(size*2);
	data[(begin_index+count)%size] = x;
	++count;
}

template<class T>
T RingBuffer<T>::pop_front()
{
	T temp;
	--count;
	temp = data[begin_index];
	++begin_index;
	if(begin_index==size) begin_index=0;
	return temp;
}

template<class T>
int RingBuffer<T>::get_size()
{
	return size;
}

template<class T>
void RingBuffer<T>::resize(int new_size)
{
	T* new_data = new T[new_size];
	int x;
	if (new_size<count) x = new_size;
	else x = count;
	for(int i=0;i<=x;++i) new_data[(begin_index+i)%new_size] = data[(begin_index+i)%size];
	delete[] data;
	data = new_data;
	size = new_size;
}

template<class T>
bool RingBuffer<T>::is_full() const
{
	if(count==size) return true;
	else return false;
}

template<class T>
bool RingBuffer<T>::is_empty() const
{
	if(count==0) return true;
	else return false;
}