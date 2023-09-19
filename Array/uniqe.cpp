#include <iostream>
using namespace std;
void find(int arr[], int n)
{

    int brr[10] = {0};
    for (int i = 0; i < n; i++)
    {
        brr[arr[i]]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (brr[i] == 1)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 3, 1};
    int size = sizeof(arr) / sizeof(int);
    find(arr, size);
}