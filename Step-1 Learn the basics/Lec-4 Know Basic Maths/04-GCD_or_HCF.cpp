// Brute Force approach

/*
    Time Complexity: O(a)

    Space Complexity: O(1)

    Where 'a' is minimum of 'n' and 'm'.
*/

#include <iostream>
using namespace std;

int calcGCD(int n, int m)
{
    int ans = 1;

    // Iterating through all integers from 1 to min(n,m) and
    // finding the greatest integer that divides both 'n' and 'm'.
    for (int i = 1; i <= min(n, m); i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            ans = i;
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    cout << calcGCD(n, m) << endl;
    return 0;
}
