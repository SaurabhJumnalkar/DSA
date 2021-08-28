#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int original = n;
    int number, sum = 0;
    while (n > 0)
    {
        number = n % 10;
        sum += pow(number, 3);
        n = n / 10;
    }
    if (sum == original)
    {   
        cout<<sum;
        cout << "yes";
    }
    else
    {   
        cout<<sum;
        cout << "No";
    }
}