/*
    Time Complexity: O( m ) 
    Space Complexity: O( m )

    where m is the number of factorial numbers less than or equal to n.
*/

#include <iostream>
#include <vector>
using namespace std;

vector<long long> factorialNumbers(long long n) {
    
    long long result = 1, cnt = 1;
    vector<long long> ans;
    
    while(result <= n / cnt) {
        // Multiplying 'result' with 'cnt'
        result *= cnt;
        
        // Incrementing 'cnt' by '1'
        cnt++;
        
        // Inserting 'result' in the array 'ans'
        ans.push_back(result);
    }
    
    return ans;
}

int main(int argc, char const *argv[])
{
    long long n;
    cin >> n;
    vector<long long> ans = factorialNumbers(n);
    for (long long i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
