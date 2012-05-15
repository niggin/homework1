#include "stack.h"

void Stack::push(const int& s)
	{
		buf.push_back(s);
	}

int Stack::pop()
	{
		int temp = buf.back();
		buf.pop_back();
		return temp;
	}

bool Stack::isEmpty()
	{
		return buf.empty();
	}

bool isGoodBracketStructure(const std::string& str)
{
	Stack a;
	int length=str.size();
	for (int i=0;i<length;++i)
	{
		if((str[i]=='{')||(str[i]=='[')||(str[i]=='(')) a.push(str[i]);
		else 
			{
				char temp;
				switch (a.pop())
					{
					case '{': temp='}'; break;
					case '[': temp=']'; break;
					case '(': temp=')'; break;
					default: return false;
					}
				if (temp!=str[i]) 
					{
						return false;
					}
			}
	}
	if(a.isEmpty()) return true;
	else return false;
}