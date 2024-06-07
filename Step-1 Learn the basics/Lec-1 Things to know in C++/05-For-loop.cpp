// using for loop
#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 1;
    int c = a + b;
    int n;
    cout << "Enter the Nth number you want to find in Fibonacci series:- " << endl;
    cin >> n;
    if (n == 1)
    {
        cout << a << endl;
    }

    else if (n == 2)
    {
        cout << b << endl;
    }

    else if (n > 2)
    {
        for (int i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }

        cout << "The value of Nth number in the series is: " << c << endl;
    }

    else
    {
        cout << "Enter a valid number with respect to the series" << endl;
    }

    return 0;
}

// recursive approach
/*
    Time complexity: O(2^N)
    Space complexity: O(N)

    Where 'N' reprents the "Nth" number .
*/

/*
#include<bits/stdc++.h>
using namespace std;

int recur(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return recur(n - 1) + recur(n - 2);
}

int main()
{
    int n;
    cin>>n;

    cout<<recur(n)<<endl;
}
*/

// dynamic programming

/*
    Time complexity: O(N)
    Space complexity: O(N)

    Where 'N' reprents the "Nth" number .
*/

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    // declaring an 'n' size array.
    int dp[n + 1];
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout<<dp[n]<<endl;
}
*/

// space optimised dynamic programming
/*
    Time complexity: O(N)
    Space complexity: O(1)

    Where 1 represents the constant and 'N' reprents the "Nth" number .
*/

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a = 0;
    int b = 1;
    int c;
    for(int i = 0; i < n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    cout<<a<<endl;
}
*/