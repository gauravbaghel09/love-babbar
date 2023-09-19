#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int lastOcc(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            s = mid + 1; // right search.
        }
        else if (arr[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    vector<int> arr{1, 1, 1, 2, 2, 3, 3, 3, 3, 4, 5};
    int target = 3;
    int index = lastOcc(arr, target);
    cout << "last Occ of element is : " << index << endl;

    auto ans2 = upper_bound(arr.begin(), arr.end(), target);
    cout << "ans to usind stl algo : " << ans2 - arr.begin() << endl;
    return 0;
}