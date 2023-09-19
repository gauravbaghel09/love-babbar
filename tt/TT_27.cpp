#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> list1{1, 2, 3, 4, 5, 6};
    list<int>::iterator it;
    for (it = list1.begin(); it != list1.end(); it++)
    {
        cout << *it << " ";
    }

    // for (auto i : list1)
    // {
    //     cout << i << " ";
    // }
}
// void printqueue(deque<int> q)
// {
//     deque<int>::iterator it;
//     for (it = q.begin(); it != q.end(); it++)
//     {
//         cout << *it << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     deque<int> q;

//     auto it1 = q.begin();
//     auto it2 = q.begin();
//     it2 = it1 + 3;
//     q.push_back(11);
//     q.push_back(22);
//     q.push_front(33);
//     q.push_front(44);
//     q.push_front(55);
//     q.push_front(66);
//     printqueue(q);
//     // q.pop_back();
//     // q.pop_front();
//     q.erase(it1, it2);
//     printqueue(q);
// }
// int main()
// {
//     pair<string, int> p1;
//     pair<string, int> p2;
//     p2 = make_pair("ankit", 25);
//     p1.first = "gaurav baghel";
//     p1.second = 23;
//     p1.swap(p2);
//     cout << p1.first << endl;
//     cout << p1.second << endl;
//     cout << p2.first << endl;
//     cout << p2.second << endl;
// }
// void insertpos(vector<int> &v1, int pos, int ele)
// {
//     for (int i = 0; i < v1.size(); i++)
//     {
//         if (i == pos)
//         {
//             v1[i] == ele;
//             v1[pos] = v1[pos + 1];
//         }
//     }
// }
// void printvec(vector<int> v1)
// {
//     for (int i = 0; i < v1.size(); i++)
//     {
//         cout << v1[i] << " ";
//     }
// }
// int main()
// {

//     vector<int> v1;
//     v1.push_back(10);
//     v1.push_back(20);
//     v1.push_back(30);
//     v1.push_back(40);
//     printvec(v1);
//     cout << endl;
//     insertpos(v1, 2, 25);
//     printvec(v1);
//     // cout << v1[0];
// }