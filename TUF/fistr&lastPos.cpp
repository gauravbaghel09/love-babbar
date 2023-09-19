#include <iostream>
using namespace std;

int firstpos(int arr[], int s, int e, int key)
{
    int first;
    if (s <= e)
    {
        int mid = s + (e - s) / 2;
        if ((mid == 0 || key > arr[mid - 1]) && arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            first = firstpos(arr, mid + 1, e, key);
        }
        else
        {
            first = firstpos(arr, s, mid - 1, key);
        }
    }
    return first;
}

int lastpos(int arr[], int s, int e, int key, int size)
{

    int last;
    if (s <= e)
    {
        int mid = s + (e - s) / 2;
        if ((mid == size - 1 || key < arr[mid + 1]) && arr[mid] == key)
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            last = lastpos(arr, s, mid - 1, key, size);
        }
        else
        {
            last = lastpos(arr, mid + 1, e, key, size);
        }
    }
    return last;
}

int main()
{
    int arr[] = {1, 2, 2, 2, 2, 3, 3, 3, 3};
    int size = sizeof(arr) / sizeof(int);
    int fpos = firstpos(arr, 0, size - 1, 2);
    cout << "first pos is " << fpos << endl;

    int lpos = lastpos(arr, 0, size - 1, 3, size);
    cout << "last postion is : " << lpos << endl;
    return 0;
}