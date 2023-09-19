#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vr;
    vr.push_back(5);
    vr.emplace_back(6);
    vr.emplace_back(8);
    vr.emplace_back(9);

    vector<pair<int, int>> vec; // vector with pair.
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> vt(5);       // 0 0 0 0 0
    vector<int> vt2(5, 100); // 100 100 100 100 100

    vector<int> v1(5, 1);
    vector<int> v2(v1); // copy v1 into v2.

    // printing vector with the help of iterator.
    vector<int>::iterator it = vt2.begin(); // using iterator.
    cout << "begin in vt2 : " << *(it) << endl;

    it = it + 2;
    cout << "index 2 in vt : " << *(it) << " " << endl;

    vector<int>::iterator it2 = vr.end();
    cout << "using indexing : " << vr[0] << " " << endl;
    cout << "vr back  : " << vr.back() << " " << endl;

    for (auto it3 = vt2.begin(); it3 != vt2.end(); it3++)
    {
        cout << *(it3) << " ";
    }
    cout << endl;

    for (auto it : vr)
    {
        cout << it << " ";
    }

    // erase element;
    vr.erase(vr.begin()); //{10,20,30,40,50};
    vr.erase(vr.begin() + 1);
    vr.erase(vr.begin() + 2, vr.begin() + 4); //{10,20,50}

    // insert element in vector.
    vector<int> vor(2, 100);
    vor.insert(vor.begin(), 300);
    vor.insert(vor.begin() + 1, 2, 10); //{300,10,10,100,100}

    cout << vor.size();
    vor.pop_back();
    vor.swap(vr);
    vor.clear();
    vor.empty();
}