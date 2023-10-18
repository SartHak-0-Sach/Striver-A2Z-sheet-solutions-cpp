// Approach-1 Reversing the bits representation

/*
    Time Complexity: O(1)
    Space Complexity: O(1)
*/

// long reverseBits(long n){
//     // 'bits' array to store the bits representation of 'n'.
//     vector<int> bits(32, 0);

//     // Preparing the bits array.
//     for(int i=0;i<32;i++){
//         // If the ith bit is set.
//         if ((n & (long)1 << i) > 0){
//             bits[i] = 1;
//         }
//     }
//     for(int i=0;i<16;i++){
//         // Swapping the left and rightmost bits.
//         swap(bits[i],bits[31-i]);
//     }

//     // 'ans' will store the value for the reversed bits representation.
//     long ans = 0;

//     for(int i=0;i<32;i++){
//         // If the i'th bit is set.
//         if (bits[i] == 1){
//             ans += (long)1 << i;
//         }
//     }
//     return ans;
// }

// Approach-2 Extracting each bit

/*
    Time Complexity: O(1)
    Space Complexity: O(1)
*/

// long reverseBits(long n){
//     // 'ans' will store the value of reversed bits representation.
//     long ans = 0;

//     for(int i=0;i<32;i++){
//         // 'k' is the i'th bit.
//         int k = n & (1<<i);

//         // If the i'th bit from right is Set.
//         if (k>0){
//             // Increase the value of ans by value of i'th bit from left.  
//             ans += (long)1<<(31-i);
//         }
//     }  
//     return ans;
// }




// Leetcode Question:-

#include <iostream>
#include <climits>
using namespace std;
class Solution {                      
public:
    int reverse(int x) {
        int r=0;      // decleare r 
        while(x){
         if (r>INT_MAX/10 || r<INT_MIN/10) return 0; // check 32 bit range, if out of range then return 0 
         r=r*10+x%10; // find remainder and add its to r
         x=x/10;     // Update the value of x
        } 
        return r;  // if r in the 32 bit range then return r
    }
};

int main()
{
    int n;
    cin >> n;
    Solution s;
    cout << s.reverse(n) << endl;
    return 0;
}