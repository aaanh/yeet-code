#include "../gen.h"

// https://leetcode.com/problems/decompress-run-length-encoded-list/
// Runtime	: 8 ms
// Memory	: 10.1 MB

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> res;
        for (size_t i = 0; i < nums.size(); i+=2) 
        {
            for (size_t j = 0; j < nums[i]; j++)
            {
                res.push_back(nums[i+1]);
            }
        }
        return res;
    }
};