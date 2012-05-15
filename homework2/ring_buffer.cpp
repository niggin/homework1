#include "ring_buffer.h"

RingBuffer::RingBuffer(const int new_size)
{
	size = new_size;
	data = new int[size];
	count = 0;
	begin_index = 0;
}

RingBuffer::RingBuffer()
{
	*this = RingBuffer(100);
}

RingBuffer::~RingBuffer()
{
	delete[] data;
}

void RingBuffer::push_back(const int& x)
{
	if(count>=size) resize(size*2);
	data[(begin_index+count)%size] = x;
	++count;
}

int RingBuffer::pop_front()
{
	int temp;
	--count;
	temp = data[begin_index];
	++begin_index;
	if(begin_index==size) begin_index=0;
	return temp;
}

int RingBuffer::get_size()
{
	return size;
}

void RingBuffer::resize(const int new_size)
{
	int* new_data = new int[new_size];
	int x;
	if (new_size<count) x = new_size;
	else x = count;
	for(int i=0;i<=x;++i) new_data[(begin_index+i)%new_size] = data[(begin_index+i)%size];
	delete[] data;
	data = new_data;
	size = new_size;
}

bool RingBuffer::is_full() const
{
	if(count==size) return true;
	else return false;
}

bool RingBuffer::is_empty() const
{
	if(count==0) return true;
	else return false;
}