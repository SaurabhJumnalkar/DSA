#include <iostream>
using namespace std;
 
// Function to find the total number of ways to get a change of `N`
// from an unlimited supply of coins in set `S`
int count(int S[], int n, int N)
{
    // if the total is 0, return 1
    if (N == 0) {
        return 1;
    }
 
    // return 0 if total becomes negative
    if (N < 0) {
        return 0;
    }
 
    // initialize the total number of ways to 0
    int result = 0;
 
    // do for each coin
    for (int i = 0; i < n; i++)
    {
        // recur to see if total can be reached by including
        // current coin `S[i]`
        result += count(S, n, N - S[i]);
    }
 
    // return the total number of ways
    return result;
}
 
// Coin Change Problem
int main()
{
    // `n` coins of given denominations
    int S[] = { 1, 2, 3 };
    int n = sizeof(S) / sizeof(S[0]);
    
    // total change required
    int N = 4;
 
    cout << "The total number of ways to get the desired change is "
         << count(S, n, N);
 
    return 0;
}