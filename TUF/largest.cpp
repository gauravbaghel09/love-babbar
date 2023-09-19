#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 10, 6, 7, 4, 3, 9, 3};
    int size = sizeof(arr) / sizeof(int);
    cout << "size : " << size << endl;

    int largest = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "largest : " << largest << endl;

    int secondLar = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > secondLar && arr[i] != largest)
        {
            secondLar = arr[i];
        }
    }
    cout << "second largest is :  " << secondLar << endl;
}