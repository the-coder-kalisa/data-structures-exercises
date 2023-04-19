#include <iostream>

using namespace std;

class Stack
{
    int *arr;
    int nextIndex;
    int capacity;

public:
    Stack()
    {
        capacity = 5;
        arr = new int[capacity];
        nextIndex = 0;
    }

    void push(int element)
    {
        if (nextIndex == capacity)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        arr[nextIndex] = element;
        nextIndex++;
    }

    int size()
    {
        return nextIndex;
    }

    int top()
    {
        if (nextIndex == 0)
        {
            cout << "Stack is empty" << endl;
            return 0;
        }
        return arr[nextIndex - 1];
    }
};

int main()
{
    Stack *s = new Stack();
    s->push(10);
    s->push(20);
    s->push(30);
    s->push(40);
    cout << s->size() << endl;
    cout << s->top() << endl;
    return 0;
}