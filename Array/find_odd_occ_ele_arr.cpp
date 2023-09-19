// 1 - all element occ even no of time except one.
// 2 - all repeating occ of element appear in pairs & pairs are not
//     adjacent(there con not be more than two consecutive occ any ele)
// 3 - find the ele that appears odd number of times.

#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (s == e)
        {
            return s;
        }
        // case2 mid-even or mid-odd
        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                s = mid + 2;
            }
            else
            {
                e = mid;
            }
        }
        else
        {
            if (arr[mid] == arr[mid - 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    vector<int> arr{1, 1, 2, 2, 3, 3, 4, 4, 3, 3, 5, 600, 600, 4, 4};
    int ans = solve(arr);
    cout << "ans is : " << arr[ans] << endl;
    return 0;
}