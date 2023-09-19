#include <iostream>
using namespace std;
void Lseft(int arr[], int n, int times)
{
    int temp[n];
    int k = 0;
    for (int i = times; i < n; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    for (int i = 0; i < times; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
}
void rightRotate(int arr[], int n, int times)
{
    int temp[times];
    int k = 0;
    for (int i = n - times; i < n; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    for (int i = n - times - 1; i >= 0; i--)
    {
        arr[i + k] = arr[i];
    }
    for (int i = 0; i < times; i++)
    {
        arr[i] = temp[i];
    }
}

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {2, 4, 5, 6, 7, 8};
    int n = 6;
    Lseft(arr, n, 2);
    cout << endl;
    rightRotate(arr, n, 2);
    printarr(arr, n);
}