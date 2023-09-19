#include <iostream>
using namespace std;
#include <bits/stdc++.h>
class CirQ
{
public:
    int size;
    int *arr;
    int front;
    int rear;

    CirQ(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int data)
    {
        // Queue is full;
        if ((front == 0 && rear == size - 1))
        {
            cout << "Que is full,can not insert." << endl;
        }
        else if (front == -1) // single element.
        {
            front = rear = 0;
            arr[rear] = data;
        }
        else if (rear == size - 1 && front != 0) // circular flow.
        {
            rear = 0;
            arr[rear] = data;
        }
        else // normal flow.
        {
            rear++;
            arr[rear] = data;
        }
    }

    void pop()
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
            front = 0;
        }
        else // normal flow.
        {
            front++;
        }
    }
};
int main()
{
    CirQ CQ(6);
    CQ.push(10);
    CQ.push(20);
    CQ.push(30);
}