class Queue
{
public:
    virtual void push(const int& number);
    virtual int pop();
    virtual bool isEmpty() const;
    virtual ~Queue() {}
};