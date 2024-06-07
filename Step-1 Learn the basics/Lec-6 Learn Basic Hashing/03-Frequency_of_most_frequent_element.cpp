#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxFrequency(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end()); // Sort the input array in ascending order
        int ans = 0;                    // Initialize the answer variable to keep track of the maximum frequency
        int j = 0;                      // Initialize a pointer for the start of the sliding window
        long long int res = 0;          // Initialize a variable to keep track of the current sum of elements in the sliding window

        // Iterate through the sorted array
        for (int i = 0; i < nums.size(); i++)
        {
            res += nums[i];               // Add the current element to the current sum
            long long x = (i + 1);        // Calculate the size of the sliding window
            long long temp = nums[i] * x; // Calculate the required sum for making all elements in the window equal to the current element

            // Check if the difference between the required sum and the current sum is within the available operations (k)
            if ((temp - res) <= k)
            {
                // If it is, it means we can extend the window without exceeding the allowed operations
                // So we don't need to do anything here
            }
            else
            {
                // If the difference exceeds k, we need to shrink the window
                while (res > k && j < i)
                {
                    long long y = (i - j + 1); // Calculate the size of the current window
                    long long t = nums[i] * y; // Calculate the required sum for the current window

                    // If the required sum for the current window is within the allowed operations
                    if (t - res <= k)
                        break;      // Exit the loop as we've found a valid window size
                    res -= nums[j]; // Subtract the element at the start of the window from the current sum
                    j++;            // Move the start pointer of the window forward
                }
            }

            ans = max(ans, (i - j + 1)); // Update the maximum frequency by comparing with the current window size
        }

        return ans; // Return the maximum frequency achieved
    }
};