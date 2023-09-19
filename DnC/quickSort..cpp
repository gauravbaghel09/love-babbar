#include <iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
    // chose pivot ele.
    int pivotIndex = s;
    int pivotelement = arr[s];

    // find right postiton pivot ele and place it there.
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivotelement)
        {
            count++;
        }
    }
    // jab main loop se bahar hua, tho mere pass pivot ki right postion ko index ready hai.
    int rightindex = s + count;
    swap(arr[rightindex], arr[pivotIndex]);
    // pivotIndex = rightindex;

    // step 3: left main chote ele and right main bade.
    int i = s;
    int j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivotelement)
        {
            i++;
        }
        while (arr[j] > pivotelement)
        {
            j--;
        }
        // 2 case ho sakte hai
        //  A-> you found the ele to swap
        // B->no need to swap
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void QuickSort(int arr[], int s, int e)
{
    // base case.
    if (s >= e)
        return;

    // partition logic.
    int p = partition(arr, s, e);

    // left call
    QuickSort(arr, s, p - 1);

    // right call
    QuickSort(arr, p + 1, e);
}
int main()
{

    int arr[] = {3, 6, 8, 1, 9, 5};
    int size = 6;

    int s = 0;
    int e = size - 1;
    QuickSort(arr, s, e);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}