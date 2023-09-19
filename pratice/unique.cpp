#include <iostream>
#include <vector>
using namespace std;
int uniqueEle(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int n;
    cout << "enetr size of arr : ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int find = uniqueEle(arr);
    cout << "unique ele is : " << find << endl;
}