#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printSubseq(string str, string output, int i, vector<string> &v)
{
    if (i == str.length())
    {
        // cout << output << endl;
        // store
        v.push_back(output);
        return;
    }
    // exclude
    printSubseq(str, output, i + 1, v);

    // include
    output.push_back(str[i]); // output =output + atr[i];
    printSubseq(str, output, i + 1, v);
}
int main()
{
    string str = "abcd";
    string output = " ";
    int i = 0;
    vector<string> v; // store
    printSubseq(str, output, i, v);

    // printing store seq in v.
    cout << "printing all seq : " << endl;
    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "szie of vector is : " << v.size() << endl;
}