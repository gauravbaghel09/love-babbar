#include <iostream>
#include <math.h>
using namespace std;
int DecBin(int n)
{
    int ans = 0;
    int rem;
    int i = 0;
    while (n != 0)
    {
        rem = n % 10;
        ans = rem * pow(2, i) + ans;
        i++;

        n = n / 10;
    }
    return ans;

    // int arr[10];
    // int i = 0;
    // while (n > 0)
    // {
    //     arr[i] = n % 2;
    //     n = n / 2;
    //     i++;
    // }
    // for (int j = i - 1; j >= 0; j--)
    // {
    //     cout << arr[j];
    // }
}

int main()
{
    int n = 1001;
    int ans = DecBin(n);
    cout << ans;
    return 0;
}