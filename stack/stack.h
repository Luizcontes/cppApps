//stack.h
#define DEFAULT_SIZE 10

class Stack {

    private:
        int size;
        int top;
        int* values;
    
    public:
        /*
        Stack(int size = DEFAULT_SIZE);
        virtual ~Stack();
        bool isFull();
        bool isEmpty();
        void push(int);
        int pop();
        */

    Stack(int size = DEFAULT_SIZE)
    {

        this->size = size;
        values = new int[size];
        top = -1;
    }
    /*
    Stack()
    {

        delete[] values;
    }
    */
    bool isFull()
    {

        if (top < size - 1)
            return false;
        else
            return true;
    }

    bool isEmpty()
    {

        if (top == -1)
            return true;
        else
            return false;
    }

    void push(int x)
    {

        if (!isFull())
        {
            top++;
            values[top] = x;
        }
    }

    int pop()
    {

        int retVal = 0;
        if (!isEmpty())
        {
            retVal = values[top];
            top--;
        }
        return retVal;
    }
};