// Approach-1 Brute Force

/*
    Time Complexity: O(n*sqrt(n))

    Space Complexity: O(1)

    Where 'n' is the given integer.
*/

#include <iostream>
using namespace std;

int sumOfAllDivisors(int n)
{
    int ans = 0;

    // Iterating over all 'i'.
    for (int i = 1; i <= n; i++)
    {

        // Calculating the value of ’sumOfDivisors(i)’ for current 'i'.
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {

                // Avoid counting sqrt(i) twice.
                if (i / j == j)
                {
                    ans += j;
                }
                else
                {
                    ans += j + i / j;
                }
            }
        }
    }

    return ans;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << sumOfAllDivisors(n) << endl;
    return 0;
}

// Approach-2

/*
    Time Complexity: O(n)
    Space Complexity: O(1)
    Where 'n' is the given integer.

int sumOfAllDivisors(int n)
{
    int ans = 0;

    // Iterating over all 'i'. Each 'i' contributes to final answer
    // exactly 'floor(n/i)' times.
    for (int i = 1; i <= n; i++)
    {
        ans += i * (n / i);
    }

    return ans;
}
*/

// Approach-3 Harmonic Lemma
/*
What is Harmonic Lemma?
Consider the sequence, ‘s’ = [n/1, n/2,..., n/i,…,n/n]. Harmonic lemma states that there will be at most 2 * sqrt(n) distinct values in this sequence. We need to find the value of ∑ i * (n / i).

Let’s say k = ‘floor(n/i)’.
This gives us k <= n/i < k+1.
This gives us i <= n/k
From this, we can find the range of ‘i’ for which ‘n/i’ is constant. Since there are 2 * sqrt(n) such values, we can find the final answer in sqrt time complexity as follows:

Find the range [l,r] of ‘i’ for which ‘floor(n/i)’ is constant.
Add sum(l,r) * (floor(n/i)) to the final answer, where sum(l,r) = l + (l + 1) + (l + 2) + … + r.
Move on to the next range.
The steps are as follows:

function sumOfAllDivisors(int ‘n’)

Initialize ‘ans’ = 0
Initialize ‘l’ = 1
while(‘l’ <= ‘n’)
‘val’ = n / l
‘r’ = n / val
‘sum’ = (r * (r + 1)) / 2 - (l * (l - 1)) / 2
‘ans’ += sum * val
‘l’ = r + 1
Return ‘ans’.
Time Complexity
O(sqrt(n)), where ‘n’ is the given integer.

We are iterating over distinct values of ‘n / l’, and there are 2 * sqrt(n) such values (using harmonic lemma).

Hence, the time complexity is O(sqrt(n)).

Space Complexity
O(1).

We are not using any extra space.

Hence, the space complexity is O(1).
*/

/*
    Time Complexity: O(sqrt(n))

    Space Complexity: O(1)

    Where 'n' is the given integer.

int sumOfAllDivisors(int n)
{
    int ans = 0;
    int l = 1;

    // Iterating over all values of 'l' such that 'n/l' is distinct.
    // There at most 2*sqrt(n) such values.
    while (l <= n)
    {
        int val = n / l;

        // 'r' = maximum value of 'i' such that 'n/i' is val.
        int r = n / val;

        ans += ((r * (r + 1)) / 2 - (l * (l - 1)) / 2) * val;

        // moving on to next range.
        l = r + 1;
    }

    return ans;
}
*/