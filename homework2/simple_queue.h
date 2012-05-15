#include "queue.h"
#include <iostream>
#include <vector>

class SimpleQueue: public Queue
{
	std::vector<int> data;
public:
	SimpleQueue() {}
	virtual void push(const int& number);
    virtual int pop();
    virtual bool isEmpty() const;
    virtual ~SimpleQueue() {}
};