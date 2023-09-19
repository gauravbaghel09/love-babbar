#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    queue<int> qu;
    // insertion.
    qu.push(12);
    qu.push(13);
    qu.push(14);
    qu.push(15);
    qu.push(16);

    // size.
    cout << "size of queue is : " << qu.size() << endl;

    // removal.
    qu.pop();
    cout << "size of queue is : " << qu.size() << endl;

    // check empty.
    if (qu.empty())
    {
        cout << "Q is empty" << endl;
    }
    else
    {
        cout << "Q is not empty" << endl;
    }

    // check front.
    cout << "front element of Q is : " << qu.front() << endl;
}