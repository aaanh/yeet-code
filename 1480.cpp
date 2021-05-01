#include "gen.h"

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