#include "gen.h"

// https://leetcode.com/problems/shuffle-the-array
// Runtime	: 12 ms
// Memory	: 9.6 MB

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int temp;
        int k = n;
        for (size_t i = 1; i <= n*2; i+=2)
        {
            temp = nums[k];
            nums.erase(nums.begin() + k);
            nums.insert(nums.begin() + i, temp);
            k++;
        }
        return nums;
    }
};