/*
    Time Complexity: O(n)

    Space Complexity: O(n)

    Where 'n' is the given integer.
*/

#include <iostream>
#include <vector>
using namespace std;

void recursiveFunction(int n, vector<string> &ans)
{
    if (n == 0)
    { // Base case
        return;
    }

    // Insert element in the array
    ans.push_back("Coding Ninjas");

    // Call recursive function
    recursiveFunction(n - 1, ans);
}

vector<string> printNTimes(int n)
{
    vector<string> ans;

    // Calling recursive function
    recursiveFunction(n, ans);

    return ans;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<string> result = printNTimes(n);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}