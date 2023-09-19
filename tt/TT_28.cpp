#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // set<int> st;
    // st.insert(20);
    // st.insert(3);
    // st.insert(4);
    // st.insert(5);
    // st.insert(6);
    // // set<int>::iterator it;
    // // for (it = st.begin(); it != st.end(); it++)
    // // {
    // //     cout << *it << " ";
    // // }
    // // int num = st.erase(1);
    // // cout << num << endl;
    // auto it = st.begin();
    // // it++;
    // st.erase(it);
    // for (auto i : st)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // auto it2 = st.find(20);
    // cout << *it << endl;
    // set<char> st = {'a', 'b', 'c', 'd'};
    // char ch;
    // cout << "enter alphabet to be find :  ";
    // cin >> ch;

    // set<char>::iterator it;
    // it = st.begin();

    // if (*it == ch)
    // {
    //     cout << "element is found";
    // }
    // else
    // {
    //     cout << "element is not found";
    // }

    // map<int, string> m;
    // // m.insert(0, 'er');
    // m[3] = "gaurav";
    // m[1] = "ankit";
    // m[2] = "baghel";
    // cout << endl;
    // m.erase(2);
    // for (auto i : m)
    // {
    //     cout << "key : " << i.first << " value : " << i.second << endl;
    // }

    // two sum.
    int arr[] = {2, 70, 11, 7};
    int target = 9;
    vector<int> v;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                v.push_back(i);
                v.push_back(j);
            }
        }
    }
    for (auto i : v)
    {
        cout << i << " ";
    }
}