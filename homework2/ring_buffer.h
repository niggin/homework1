#include <vector>

class RingBuffer
{
public:
	void push_back(const int& x);
	int pop_front();
	bool is_empty() const;
	bool is_full() const;
	void resize(const int new_size);
	int get_size();
	RingBuffer();
	RingBuffer(const int new_size);
	~RingBuffer();
private:
	int* data;
	int size;
	int count;
	int begin_index;
};