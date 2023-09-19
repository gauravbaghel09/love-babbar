#include <iostream>
using namespace std;
int firstOcc(int arr[], int s, int e, int key)
{

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 2, 2, 2, 4, 4, 4, 4, 7, 7, 7};
    int size = sizeof(arr) / sizeof(int);
    int focc = firstOcc(arr, 0, size - 1, 4);
    cout << "first occ is : " << focc << endl;

    // int locc = lastocc(arr, 0, size - 1, 4);
    // cout << "last occ is : " << locc << endl;

    return 0;
}