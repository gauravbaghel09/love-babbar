#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void findMax(int arr[], int n, int i, int &maxi)
{
    if (i >= n)
        return;

    if (arr[i] > maxi)
        maxi = arr[i];

    findMax(arr, n, i + 1, maxi);
}
int main()
{
    int arr[] = {10, 20, 30, 40, 77, 12, 50, 60};
    int n = 8;
    int maxi = INT_MIN;
    int i = 0;
    findMax(arr, n, i, maxi);
    cout << "maximum is : " << maxi << endl;
}