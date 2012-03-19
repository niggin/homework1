#include <iostream>
#include <vector>

template <class T>
class Stack
{
	std::vector<T> buf;
public:
	virtual void push(T s);
	virtual T pop();
	virtual bool isEmpty();
	virtual ~Stack() {}
};
bool isGoodBracketStructure(const std::string& str);