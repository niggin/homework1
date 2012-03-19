template<class T>
class RingBuffer
{
public:
	void push_back(T x);
	T pop_front();
	bool is_empty() const;
	bool is_full() const;
	void resize(int new_size);
	int get_size();
	RingBuffer();
	RingBuffer(int new_size);
	~RingBuffer();
private:
	T* data;
	int size;
	int count;
	int begin_index;
};