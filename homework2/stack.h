#include <iostream>
#include <vector>

template <class T>
class Stack
{
	std::vector<T> buf;
public:
	//use const T& instead of raw T whenever possible
	virtual void push(const T& s);
	virtual T pop();
	virtual bool isEmpty();
	virtual ~Stack() {}
};
bool isGoodBracketStructure(const std::string& str);