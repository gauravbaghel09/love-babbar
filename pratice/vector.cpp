#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;
    int size = sizeof(arr) / sizeof(int);
    cout << size;
}