#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(2);
    st.push(3);
    st.push(4);

    st.pop();
    cout << "top ele is : " << st.top() << endl;

    if (st.empty())
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }
    cout << "size of stack is :" << st.size() << endl;
}