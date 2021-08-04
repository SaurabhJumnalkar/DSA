#include <bits/stdc++.h>
using namespace std;
string arr;
int subset(string arr, int index = 0, string curr = "")
{
    if (index ==arr.length())
    {
        cout << "{"<<curr<<"}" << endl;
        return 0;
    }
    subset(arr, index + 1, curr +arr[index]);
    subset(arr, index + 1, curr);
}

int main()
{
    cin>>arr;

    subset(arr);
}
