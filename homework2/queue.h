template<class T>
class Queue
{
public:
    virtual void push(T number);
    virtual T pop();
    virtual bool isEmpty() const;
    virtual ~Queue() {}
};