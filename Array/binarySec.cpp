#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int binary(vector<int> &arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            s = mid + 1;
        }
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }

        mid = (s + e) / 2;
    }
    return -1;
}
int main()
{
    // int arr[] = {1, 2, 4, 5, 7, 8, 90};
    vector<int> arr{1, 2, 3, 4, 6, 7, 8, 90};
    // int size = sizeof(arr) / sizeof(int);
    // int index = binary(arr, 90);
    if (binary_search(arr.begin(), arr.end(), 900))
    {
        cout << "target found " << endl;
    }
    else
    {
        cout << "target not found " << endl;
    }
}