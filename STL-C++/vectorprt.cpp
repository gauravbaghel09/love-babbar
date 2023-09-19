#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &arr)
{
    for (int i = 0; i < 10; i++)
    {
        arr.push_back(i);
    }
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
}
int main()
{
    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // v.emplace_back(50);
    // v.pop_back();
    // v.erase(v.begin() + 2); // erase fun.
    // v.insert(v.begin(), 300);
    // // v.insert(v.begin() + 3, 0);
    // v.back();
    // cout << "back fun :  " << v.back() << endl;
    // cout << "size of vector : " << v.size() << endl;
    // cout << "capicity : " << v.capacity() << endl;
    // cout << "empty : " << v.empty() << endl;

    // cout << v[0] << endl;
    // cout << v[1] << endl;
    // cout << v[2] << endl;
    // cout << v[3] << endl;
    // cout << v[4] << endl;

    // for (auto it = v.begin(); it < v.end(); it++)
    // {
    //     cout << *(it) << " ";
    // }

    // cout << endl;
    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;

    // array;
    vector<int> vec;
    // int n;
    // cout << "enter the number : ";
    // for (int i = 0; i < 10; i++)
    // {
    //     cin >> n;
    //     vec.push_back(n);
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << vec[i] << " ";
    //}

    print(vec);
    for (int i = 0; i < 10; i++)
    {
        cout << vec[i] << " ";
    }
}