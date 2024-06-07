/*
    Time Complexity: O(log(n))

    Space Complexity: O(1)

    Where 'n' is the given number.
*/

#include <iostream>
using namespace std;

int countDigits(int n)
{
    // Initializing 'cur' and 'ans'.
    int cur = n, ans = 0;

    // Iterating while 'cur' > 0.
    while (cur > 0)
    {
        // 'd_0' gives us the digit at 'ones' place decimal notation of 'cur'.
        int d_0 = cur % 10;
        if (d_0 != 0)
        {
            // Incrementing 'ans' by 1 if current digit divides 'n' evenly.
            ans += (n % d_0) == 0;
        }
        cur /= 10;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << countDigits(n) << "\n";
    return 0;
}
