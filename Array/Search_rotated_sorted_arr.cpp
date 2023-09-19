#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int key)
{
    if (high < low)
        return -1;

    int mid = (low + high) / 2;
    if (key == arr[mid])
        return mid;

    if (key > arr[mid])
        return binarySearch(arr, (mid + 1), high, key);

    return binarySearch(arr, low, (mid - 1), key);
}
int findPivot(int arr[], int n,int)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        if (arr[mid] < arr[mid - 1])
        {
            return mid - 1;
        }
        if (arr[s] <= arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int pivotedBinarySearch(int arr[], int n, int key)
{
    int pivot = findPivot(arr, 0, n - 1);

    if (key >= arr[0] && key <= arr[pivot])
    {
        int ans = binarySearch(arr, 0, pivot, key);
    }
    if (pivot + 1 < n && key >= arr[pivot + 1] && key <= arr[n])
    {
        int ans = binarySearch(arr, pivot + 1, n, key);
        return ans;
    }
    return -1;
}
int main()
{
    int arr1[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int key = 7;

    cout << "Index of the element is : " << pivotedBinarySearch(arr1, n, key);

    return 0;
}
