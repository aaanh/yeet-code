#include "../gen.h"

// https://leetcode.com/problems/richest-customer-wealth/
// Runtime  : 4 ms
// Memory   : 8 MB

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = -1;
        for (auto i : accounts)
        {
            int sum = 0;
            for (auto j : i)
            {
                sum += j;
            }
            max = std::max(max, sum);
        }
        return max;
    }
};