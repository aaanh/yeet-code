#include "../gen.h"

// https://leetcode.com/problems/running-sum-of-1d-array
// Runtime	: 4 ms
// Memory	: 8.5 MB

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> running;
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0)
            {
                running.push_back(nums[i]);
            }    
            else
            {
                running.push_back(nums[i] + running[i-1]);    
            }            
        }
        return running;
    }
};