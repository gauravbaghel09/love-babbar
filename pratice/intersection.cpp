#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{2, 3, 3, 4, 5, 6};
    vector<int> brr{0, 3, 3, 8, 4, 9};

    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        // int ele = arr[i];
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i] == brr[j])
            {
                brr[j] = -1;
                ans.push_back(arr[i]);
            }
        }
    }
    // for (auto value : ans)
    // {
    //     cout << value << " ";
    // }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}