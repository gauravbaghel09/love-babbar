#include <iostream>
using namespace std;
void printcounting(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    printcounting(n - 1);
}
int main()
{
    int n;
    cout << "enetr a number : ";
    cin >> n;
    printcounting(n);
    // cout << ans;
}