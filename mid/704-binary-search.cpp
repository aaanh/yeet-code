#include "../gen.h"

// https://leetcode.com/problems/binary-search/
// Runtime	: 0 ms
// Memory	: 6.1 MB

// ! Solution code was taken from Leet Code
// Disclaimer: Created for the purpose of code and problem comprehension.

class Solution {
    public:
    int search(vector<int> &nums, int target) {
        int pivot, left = 0, right = nums.size() - 1;
        while (left <= right) {
            pivot = left + (right - left) / 2;
            if (nums[pivot] == target) return pivot;
            if (target < nums[pivot])
                right = pivot - 1;
            else
                left = pivot + 1;
        }
        return -1;
    }
};

class MySolution

/**
 * Problem comprehension:
 * - Array index from 0 to array.size() - 1, sorted by ascending.
 * - Binary search works by comparing the value of middle index
 */

{
    public:
    int search(vector<int> &nums, int target) {}
}

int main() 
{
    Solution solution;
    vector<int> input = {-1, 0, 3, 5, 9, 12};
    int index = solution.search(input, 9);
    printf("Index is: %d", index);
    return index;
}