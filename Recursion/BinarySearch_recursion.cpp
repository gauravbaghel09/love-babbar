#include <iostream>
#include <vector>
using namespace std;
int bs(vector<int> &arr, int s, int e, int key)
{
    // base case
    if (s > e) // case 1 -> key not found
        return -1;

    int mid = (s + e) / 2;

    if (arr[mid] == key) // case 2-> key found
        return mid;

    // arr[mid]<key -> right me search
    if (arr[mid] < key)
    {
        return bs(arr, mid + 1, e, key);
    }
    else
    { // arr[mid] > key  ->  left search
        return bs(arr, s, mid - 1, key);
    }
}
int main()
{
    vector<int> v{10, 20, 30, 40, 50};
    int target = 40;

    int n = v.size();
    int s = 0;
    int e = n - 1;
    int ans = bs(v, s, e, target);
    cout << "ans is : " << ans;
}