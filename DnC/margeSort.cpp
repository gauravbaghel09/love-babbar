#include <iostream>
using namespace std;

void marge(int arr[], int s, int e)
{

    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *left = new int[len1];
    int *right = new int[len2];

    // copy value.
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k];
        k++;
    }
    // right arr ko copy karta hai ye loop.
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k];
        k++;
    }

    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrInd = s;

    while (leftIndex < len1 && rightIndex < len2)
    {
        if (left[leftIndex] < right[rightIndex])
        {
            arr[mainArrInd++] = left[leftIndex++];
        }
        else
        {
            arr[mainArrInd++] = right[rightIndex++];
        }
    }

    // copy logic for left arr.
    while (leftIndex < len1)
    {
        arr[mainArrInd++] = left[leftIndex++];
    }
    while (rightIndex < len2)
    {
        arr[mainArrInd++] = right[rightIndex++];
    }

    // delete[] left;
    // delete[] right;
}
void margeSort(int arr[], int s, int e)
{
    // base case
    // s == e->single ele
    // s > e -> invalid arr

    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    // leftpart sort kardo
    margeSort(arr, s, mid);
    // rightpart sort karo
    margeSort(arr, mid + 1, e);
    // marge 2 sorted arr.
    marge(arr, s, e);
}
int main()
{
    int arr[] = {99, 2, 4, 6, 2, 2, 2, 8, 9, 1, 13, 11, 3};
    int size = sizeof(arr) / sizeof(int);
    int s = 0;
    int e = size - 1;
    margeSort(arr, s, e);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}