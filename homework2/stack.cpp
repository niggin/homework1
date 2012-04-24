#include "stack.h"

template<class T>
void Stack<T>::push(const T& s)
	{
		buf.push_back(s);
	}

template<class T>
T Stack<T>::pop()
	{
		T temp = buf.back();
		buf.pop_back();
		return temp;
	}

template<class T>
bool Stack<T>::isEmpty()
	{
		return buf.empty();
	}

bool isGoodBracketStructure(const std::string& str)
{
	Stack<char> a;
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