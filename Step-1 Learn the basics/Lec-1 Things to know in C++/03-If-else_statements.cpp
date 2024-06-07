/*
    Time complexity: O(1)
    Space complexity: O(1)
*/

#include <iostream>
using namespace std;

string compareIfElse(int a, int b)
{

    if (a > b)
        return "greater";
    else if (a < b)
        return "smaller";
    else
        return "equal";
}

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;
    cout << compareIfElse(a, b) << endl;
    return 0;
}
