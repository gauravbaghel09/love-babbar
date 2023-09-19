#include <iostream>
using namespace std;
class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int data)
    {
        if (rear == size)
        {
            cout << "Q is empty." << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    void pop()
    {
        if (rear == front)
        {
            cout << "Q is empty." << endl;
        }
        else
        {
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }

    int getfront()
    {
        if (rear == front)
        {
            cout << "Q is empty." << endl;
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    bool isempty()
    {
        if (rear == front)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int getsize()
    {
        return rear - front;
    }
};
int main()
{
    Queue q(10);
    q.push(2);
    q.push(12);
    q.push(22);
    q.push(23);
    cout << "size of Q is : " << q.getsize() << endl;
    q.pop();
    cout << "size of Q is : " << q.getsize() << endl;

    cout << "front ele of Q : " << q.getfront() << endl;

    if (q.isempty())
    {
        cout << "Q is empty." << endl;
    }
    else
    {
        cout << "Q is not empty." << endl;
    }
}