#include <iostream>
using namespace std;
class Heap
{
public:
    int arr[101];
    int size;

    Heap()
    {
        size = 0;
    }

    void insert(int val)
    {
        // value insert karo end me.
        size = size + 1;
        int index = size;
        arr[index] = val;

        // val ko place at right(correct pos) position.
        while (index > 1)
        {
            int parentIndex = index / 2;
            if (arr[index] > arr[parentIndex])
            {
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            }
            else
            {
                break;
            }
        }
    }
};
int main()
{
    Heap H;
    H.arr[0] = -1;
    H.arr[1] = 100;
    H.arr[2] = 50;
    H.arr[3] = 60;
    H.arr[4] = 40;
    H.arr[5] = 45;
    H.size = 5;
    cout << "printing the Heap " << endl;
    for (int i = 0; i <= H.size; i++)
    {
        cout << H.arr[i] << " ";
    }
    H.insert(110);
    cout << endl
         << "printing the heap " << endl;
    for (int i = 0; i <= H.size; i++)
    {
        cout << H.arr[i] << " ";
    }
    cout << endl;
}