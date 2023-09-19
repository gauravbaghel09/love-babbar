#include <iostream>
using namespace std;
int peekEle(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int arr[] = {0, 10, 5, 2};
    int size = 4;
    int ans = peekEle(arr, size);
    cout << "peek element : " << arr[ans] << endl;
    return 0;
}