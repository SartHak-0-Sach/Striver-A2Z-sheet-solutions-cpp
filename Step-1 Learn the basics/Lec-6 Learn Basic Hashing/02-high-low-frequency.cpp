/*
    Time complexity: O( n )
    Space complexity: O( n )
    
    Where 'n' is the number of elements in the array.
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> getFrequencies(vector<int>& v) {
    
    // Declare a variable 'n' which is equal to the size 
    // of array 'v'.
    int n = v.size();
    
    // Declare a unordered map 'freq'
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        // Increment the frequency of the current element
        freq[v[i]]++;
    }

    // Initializing variables to determine
    // maximum frequency and minimum frequency element
    int maxFreq = 0, minFreq = n;
    int maxElement = 0, minElement = (int)1e9 + 1;
    
    // Traverse through map to find the elements.
    for (auto it : freq) {
        int count = it.second;
        int element = it.first;

        if (count > maxFreq) {
            // Found an element with frequency maximum among 
            // all elements found till now
            maxElement = element;
            maxFreq = count;
        }
        else if(count == maxFreq) {
            // Checking if the current element is smaller or not            
            maxElement = min(maxElement, element);
        }
        
        if (count < minFreq) {
            // Found an element with frequency maximum among 
            // all elements found till now
            minElement = element;
            minFreq = count;
        }
        else if(count == minFreq) {
            // Checking if the current element is smaller or not            
            minElement = min(minElement, element);
        }
    }
    
    vector<int> ans = {maxElement, minElement};
    return ans;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    vector<int> ans = getFrequencies(v);
    cout << "The element with maximum frequency is: " << ans[0] << "\n";
    cout << "The element with minimum frequency is: " << ans[1] << "\n";
    return 0;
}
