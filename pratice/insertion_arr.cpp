#include <iostream>
#define size 20
using namespace std;
int arrSum(int arr[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total = total + arr[i];
    }
    return total;
}
int MinEle(int arr[], int n)
{
    int minimum = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }
    return minimum;
}
int MaxEle(int arr[], int n)
{
    int maximum = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    return maximum;
}
int main()
{
    int arr[] = {2, 5, 7, 4, 9, 1};
    int n = 6;
    int min = MinEle(arr, n);
    cout << "minimum element is : " << min << endl;
    int max = MaxEle(arr, n);
    cout << "maximum element is : " << max << endl;
    int total = arrSum(arr, size);
    cout << "total is : " << total << endl;
    // printArr(arr,size);
}