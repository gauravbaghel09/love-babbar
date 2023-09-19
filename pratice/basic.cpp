#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// void reverse(int arr[], int size, int s, int e)
// {

//     while (s <= e)
//     {
//         swap(arr[s], arr[e]);
//         s++;
//         e--;
//     }
// }
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;
    int s = 0;
    int e = size - 1;
    // reverse(arr, size, s, e);
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}