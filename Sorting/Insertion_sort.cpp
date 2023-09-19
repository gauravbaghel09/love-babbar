#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> arr{14, 2, 6, 1, 3, 9};
    int n = arr.size();
    // Insertion Sort.
    for (int i = 1; i < arr.size(); i++)
    {
        // Step 1 : fetch value.
        int val = arr[i];

        // step 2 : compare.
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > val)
            {
                // step 3 : shift.
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        // step 4: copy.
        arr[j + 1] = val;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}