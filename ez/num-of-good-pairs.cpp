#include "../gen.h"

// https://leetcode.com/problems/number-of-good-pairs/
// Runtime	: 4 ms
// Memory	: 7.2 MB

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int counter = 0;
        for (size_t i = 0; i <= nums.size(); i++)
        {
            for (size_t j = i; j < nums.size(); j++)
            {
                if (nums[i] == nums[j] && i < j)
                    counter++;
            }
        }
        return counter;
    }
};