#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> pr = {1, 3};
    cout << "first : " << pr.first << " "
         << "second : " << pr.second << endl;

    pair<int, pair<int, int>> tr = {1, {3, 5}};
    cout << "tr first : " << tr.first << " " << tr.second.first << " " << tr.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[0].first << endl;
    cout << arr[0].second << endl;
    cout << arr[1].first << endl;
    cout << arr[1].second << endl;
    cout << arr[2].first << endl;
    cout << arr[2].second << endl;
}