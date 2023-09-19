#include <iostream>
using namespace std;
int fact(int n)
{
    cout << "fact call for n " << n << endl;
    // base case
    if (n == 1)
    {
        return 1;
    }

    // recusive call
    int ans = n * fact(n - 1);
    return ans;
}
int main()
{
    int n;
    cout << "enetr a number : ";
    cin >> n;
    int ans = fact(n);
    cout << "fact is  : " << ans << endl;
    return 0;
}