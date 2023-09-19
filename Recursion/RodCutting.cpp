#include <iostream>
#include <bits/stdc++.h>
#include <limits.h>
using namespace std;
int solve(int n, int x, int y, int z)
{
    if (n == 0)
    {
        return 0;
    }

    // int ans1 = solve(n-x,x,y,z)+1;
    // int ans2 = solve(n-y,x,y,z)+1;
    // int ans3 = solve(n-z,x,y,z)+1;
    // int ans = max(ans1, max(ans2, ans3));
    int a = INT_MIN;
    if (n - x >= 0)
    {
        a = solve(n - x, x, y, z) + 1;
    }
    int b = INT_MIN;
    if (n - y >= 0)
    {
        b = solve(n - y, x, y, z) + 1;
    }
    int c = INT_MIN;
    if (n - z >= 0)
    {
        b = solve(n - z, x, y, z) + 1;
    }

    int ans = max(a, max(b, c));

    return ans;
}
int main()
{
    int n = 8;
    int x = 3;
    int y = 3;
    int z = 3;

    int ans = solve(n, x, y, z);
    cout << "ans : " << ans << endl;
}