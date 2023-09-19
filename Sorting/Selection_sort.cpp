#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
void selectionSort(vector<int> &arr)
{
    // int n = arr.size() - 1;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int minInd = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[minInd])
            {
                minInd = j;
            }
        }
        swap(arr[minInd], arr[i]);
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
    vector<int> arr{2, 5, 1, 8, 3};
    selectionSort(arr);
    printArr(arr);
    return 0;
}