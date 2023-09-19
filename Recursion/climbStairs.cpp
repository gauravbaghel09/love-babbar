#include <iostream>
using namespace std;
int climb(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    int ans = climb(n - 1) + climb(n - 2);

    return ans;
}
int main()
{
    int n;
    cout << "enter a number : ";
    cin >> n;
    int ans = climb(n);
    cout << "ans is : " << ans << endl;
    return 0;
}