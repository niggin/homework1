#include <iostream>
#include <vector>

class Stack
{
	std::vector<int> buf;
public:
	virtual void push(const int& s);
	virtual int pop();
	virtual bool isEmpty();
	virtual ~Stack() {}
};
bool isGoodBracketStructure(const std::string& str);