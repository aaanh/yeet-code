#include "../gen.h"

// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number
// Runtime	: 40 ms
// Memory	: 10.1 MB

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res(nums.size(), 0);
        
        for (size_t i = 0; i < nums.size(); i++) {
            for (size_t j = i; j < nums.size(); j++) {
                if (j != i) {
                    if (nums[i] > nums[j]) {
                        res[i] = res[i] + 1;
                    } else if (nums[i] != nums[j]) {
                        res[j] = res[j] + 1;
                    }    
                }
            }
        }
        return(res);
    }
};