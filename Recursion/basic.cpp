#include <iostream>
using namespace std;
int main()
{
    int n = 0647; // if any numeric constant that begin with '0' followed immediately by one or more
                  // decimal digits,will be interpreted as octal.
    cout << n;    // 423
}

//  0647 ->  6*8^2 + 4*8^1 + 7*8^0 = 423;