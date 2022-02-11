#include "../gen.h"

// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
// Runtime	: 0 ms
// Memory	: 6.1 MB

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        int waste = 0;
        int digits = to_string(n).length();
        
        for (size_t i = digits-1; i >= 1; i--) 
        {
            int op = static_cast<int>(pow(10, i));
            // cout << op << " ";
            product *= n / op; // cout << product << " ";
            sum += n / op; // cout << sum << " ";
            n -= (n / op) * op;
            // cout << n << "\n";
        }
        product *= n;
        sum += n;
        return product - sum;
    }
};