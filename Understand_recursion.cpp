#include <iostream>
#include <vector>
using namespace std;

void recursiveFunction(int n, vector<int> &ans) // Pass the vector by reference
{
    if (n == 0)
    {
        return;
    }
    recursiveFunction(n - 1, ans); // Recursive call
    ans.push_back(n);
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> ans;
    recursiveFunction(n, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}