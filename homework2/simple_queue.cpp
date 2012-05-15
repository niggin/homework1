#include "simple_queue.h"

void SimpleQueue::push(const int& number)
{
	data.push_back(number);
}

int SimpleQueue::pop()
{
	int temp = data[0];
	data.erase(data.begin());
	return temp;
}

bool SimpleQueue::isEmpty() const
{
	return data.empty();
}