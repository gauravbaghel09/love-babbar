#include <iostream>
#include <vector>
using namespace std;
void bubble_sort(vector<int> &arr)
{
    // for (int i = 1; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr.size() - i; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             swap(arr[j], arr[j + 1]);
    //         }
    //     }
    // }

    for (int i = 0; i < arr.size() - 1; i++)
    {
        int swapcount = 0;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[j], arr[i]);
                swapcount++;
            }
            if (swapcount == 0)
            {
                // already sorted, no need to check in further rounds
                break;
            }
        }
    }
}
void printArr(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    vector<int> arr{10, 1, 2, 5, 3, 7};
    // cout << arr.size();
    bubble_sort(arr);
    printArr(arr);
    return 0;
}