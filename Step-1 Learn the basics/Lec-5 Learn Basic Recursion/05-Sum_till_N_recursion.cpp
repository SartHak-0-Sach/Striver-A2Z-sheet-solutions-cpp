/*
    Time complexity: O(1)
    Space complexity: O(1)
*/

// long long sumFirstN(long long n) {
//     // Declare a variable 'ans'.
//     long long ans;

//     // Assign 'ans' to sum of first 'n' natural numbers.
//     ans = n * (n + 1) / 2;

//     return ans;
// }

// int RecursiveSum(int n, int &sum)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     RecursiveSum(n - 1, sum);
//     sum += n;
// }

// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int sum = 0;
//     RecursiveSum(n, sum);
//     cout << sum << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int RecursiveSum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + RecursiveSum(n - 1);
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int sum = RecursiveSum(n);
    cout << sum << endl;
    return 0;
}