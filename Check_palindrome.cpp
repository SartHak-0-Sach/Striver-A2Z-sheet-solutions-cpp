/*
#include <iostream>
using namespace std;

bool palindrome(int n)
{
    int temp = n;
    int rev = 0;
    while (temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << palindrome(n) << endl;
    return 0;
}
*/

// Leetcode Question solution:-

#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }

        long long reversed = 0;
        long long temp = x;

        while (temp != 0)
        {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }

        return (reversed == x);
    }
};

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    Solution s;
    cout << s.isPalindrome(n) << endl;
    return 0;
}

// Method-2

/*
class Solution {
public:
    bool isPalindrome(int x) {
        int count=1, a, b, *arr;
        long int p=10;
        if(x<0)return false;
        while (p<=x)
        {
        p*=10;
        count++;
        }
        p=1;
        arr= new int[count];
        for(int i=0; i<count;i++)
        {
            p*=10;
            if(i!=0){
arr[i]=((x%p)-x%(p/10))/(p/10);
            }
            else
            {
                arr[i]=x%p;
            }
        }
        for(int i=0; i<count; i++)
        {
          a=arr[i];
          b=arr[count-i-1];
            if(a!=b){delete[] arr;
        arr=NULL;return false;}
        }
return true;
    }
};
*/

// Method-3

/*
class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        if(x < 0 ) return false;
        for (int i = 0; i < str.length()/2; i++){
            if(str[i] != str[str.length() - 1 - i]) return false;
        }
        return true;
    }
};
*/