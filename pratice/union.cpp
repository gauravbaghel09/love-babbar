#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    // first array.
    // int arr[] = {1, 2, 3, 4};
    vector<int> arr{3, 2, 1, 4, 8};
    // second array.
    vector<int> brr{6, 7, 1, 2, 5, 9};
    // int brr[] = {6, 7, 8, 9};
    // thrid arr.
    // int sizea = 4;
    // int sizeb = 4;
    vector<int> ans;
    int k = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i] != brr[j])
            {
                ans.push_back(arr[i]);
            }
        }
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}