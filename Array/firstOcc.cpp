#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int firstOcc(vector<int> arr, int target)
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
            e = mid - 1; // left search.
        }
        else if (arr[mid] < target)
        {
            s = mid + 1; // right search.
        }
        else
        {
            e = mid - 1; // left search.
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{

    vector<int> arr{1, 1, 2, 3, 4, 4, 4, 4, 4, 7, 8};
    int target = 1;
    int indexFirstOcc = firstOcc(arr, target);
    cout << "index of first occ : " << indexFirstOcc << endl;

    // using stl algo.
    auto ans2 = lower_bound(arr.begin(), arr.end(), target);
    cout << "using stl algo : " << ans2 - arr.begin() << endl;
}