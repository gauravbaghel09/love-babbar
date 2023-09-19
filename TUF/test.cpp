#include <iostream>
#include <limits.h>
using namespace std;
int secondlar(int arr[], int size)
{
    int largest = arr[0];
    int secondl = -1;
    for (int i = 1; i <= size; i++)
    {
        if (arr[i] > largest)
        {
            secondl = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondl)
        {
            secondl = arr[i];
        }

        return secondl;
    }
}
int main()
{

    int arr[] = {10, 2, 3, 5, 0, 7};
    int size = 6;
    int Slargest = secondlar(arr, size);
    cout << "second largest is : " << Slargest << endl;
    // int Ssmallest = Ssmall(arr, size);
    // cout << "second small ele : " << Ssmallest << endl;
    return 0;
}