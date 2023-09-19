#include <iostream>
using namespace std;
class DeQ
{
public:
    int size;
    int *arr;
    int front;
    int rear;

    // constuctor.
    DeQ(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void pushRear(int data)
    {
        // Queue is full;
        if ((front == 0 && rear == size - 1))
        {
            cout << "Que is full,can not insert." << endl;
            return;
        }
        else if (front == -1) // single element.
        {
            front = rear = 0;
            // arr[rear] = data;
        }
        else if (rear == size - 1 && front != 0) // circular flow.
        {
            rear = 0;
            // arr[rear] = data;
        }
        else // normal flow.
        {
            rear++;
            // arr[rear] = data;
        }
        arr[rear] = data;
    }

    void pushFront(int data)
    {
        // Queue is full;
        if ((front == 0 && rear == size - 1))
        {
            cout << "Que is full,can not insert." << endl;
            return;
        }
        else if (front == -1) // single element.
        {
            front = rear = 0;
        }
        else if (front == 0 && rear != size - 1) // circular flow.
        {
            front = size - 1;
        }
        else // normal flow.
        {
            front--;
        }
        arr[rear] = data;
    }

    void popFront()
    {
        // check empty.
        if (front == -1)
        {
            cout << "Queue is empty,can not pop." << endl;
        }
        else if (front == rear) // single element.
        {
            arr[front] = -1;
            front = rear = -1;
        }
        else if (front == size - 1) // circular nature.
        {
            arr[front] = -1;
            front = 0;
        }
        else // normal flow.
        {
            arr[front] = -1;
            front++;
        }
    }

    void popRear()
    {
        // check empty.
        if (front == -1)
        {
            cout << "Queue is empty,can not pop." << endl;
        }
        else if (front == rear) // single element.
        {
            arr[front] = -1;
            front = rear = -1;
        }
        else if (rear == 0) // circular nature.
        {
            arr[rear] = -1;
            rear = size - 1;
        }
        else // normal flow.
        {
            arr[rear] = -1;
            rear--;
        }
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    DeQ q1(12);
    // q1.pushFront(12);
    // q1.pushFront(89);
    // q1.pushRear(30);
    // q1.pushRear(40);
    q1.pushRear(30);
    q1.pushRear(50);
    q1.pushRear(10);
    q1.pushRear(10);
    q1.pushRear(10);
    q1.pushRear(10);
    q1.pushRear(10);
    q1.pushRear(10);
    q1.pushRear(10);
    q1.pushRear(10);
    q1.pushRear(10);
    q1.pushRear(70);
    q1.pushRear(80);
    q1.popFront();
    q1.popRear();
    q1.popRear();
    q1.popFront();
    q1.pushFront(101);
    q1.pushRear(300);
    q1.print();
    return 0;
}