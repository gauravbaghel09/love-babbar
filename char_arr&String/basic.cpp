#include <iostream>
using namespace std;
#include <string.h>
int getlength(char ch[])
{
    int len = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}
void reverse(char ch[])
{
    int s = 0;
    int n = getlength(ch);
    int j = n - 1;

    while (s <= j)
    {
        swap(ch[s], ch[j]);
        s++;
        j--;
    }
}
int main()
{
    // char ch[100];
    // cout << "enter your name : " << endl;
    // cin >> ch;
    // cout << "your name is : " << ch<<endl;
    // cin.getline(ch, 50);
    // cout << "ur name is : " << ch;
    // cout << endl;
    // for (int i = 0; i < 7; i++)
    // {
    //     cout << "index : " << i << " value :  " << ch[i] << " " << endl;
    // }

    // int val = (int)ch[6]; // null char
    // cout << "value is :  " << val << endl;

    char ch[100];
    cin >> ch;
    int ans = getlength(ch);
    cout << "string is : " << ch << endl;
    cout << "length is : " << ans << endl;
    reverse(ch);
    cout << "reverse ch : " << ch << endl;
}