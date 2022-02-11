#include "../gen.h"

// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
// Runtime	: 0 ms
// Memory	: 5.9 MB

class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;
        
        while(num != 0) {
            if (num % 2 == 1) {
                num--;
                steps++;
            } else {
                num = num/2;
                steps++;    
            }
        }
        return steps;
    }
};