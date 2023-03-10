#include <iostream>

using namespace std;

struct Queue
{
    int front, rear, capacity;
    int *arr;

    Queue(int c)
    {
        front = rear = 0;
        capacity = c;
        arr = new int;
    }

    void enqueue(int data)
    {
        if (rear == capacity)
        {
            cout << "Queue is full" << endl;
            return;
        }
        arr[rear] = data;
        rear++;
    }

    void dequeue()
    {
        if (front == rear)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        for (int i = 0; i < rear - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
    }

    void display()
    {
        int i;
        if (front == rear)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        for (i = front; i < rear; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{

    Queue q(5);
    q.display();

    q.enqueue(10);
    q.enqueue(300);
    q.enqueue(800);

    cout << "Call display when some 3 elements added" << endl;

    q.display();
    q.dequeue();
    q.dequeue();

    cout << endl
         << "Display after two node deletion" << endl;

    q.display();

    int fronttElement = q.front;

    cout << endl
         << "Reading the front element" << endl
         << "Front : " << fronttElement << endl;

    return 0;
}