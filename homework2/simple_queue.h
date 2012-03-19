#include "queue.h"
#include <iostream>
#include <vector>

template<class T>
class SimpleQueue: public Queue<T>
{
	std::vector<T> data;
public:
	SimpleQueue() {};
	virtual void push(T number);
    virtual T pop();
    virtual bool isEmpty() const;
    virtual ~SimpleQueue() {}
};