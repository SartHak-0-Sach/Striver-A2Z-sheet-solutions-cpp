#include <iostream>
using namespace std;
string palindrome_recursion(string s)
{
    if (s.length() == 1)
    {
        return "Yes";
    }
    if (s[0] == s[s.length() - 1])
    {
        return palindrome_recursion(s.substr(1, s.length() - 2));
    }
    else
    {
        return "No";
    }
}

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    cout << palindrome_recursion(s);
    return 0;
}

// Leetcode solution
// class Solution {
// public:
//     bool isPalindrome(string s) {
//        int start=0;
//        int end=s.size()-1;
//        while(start<=end){
//            if(!isalnum(s[start])){start++; continue;}
//            if(!isalnum(s[end])){end--;continue;}
//            if(tolower(s[start])!=tolower(s[end]))return false;
//            else{
//                start++;
//                end--;
//            }
//        }
//        return true;
// }
// };