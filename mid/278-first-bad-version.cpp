#include "../gen.h"

// https://leetcode.com/problems/first-bad-version/
// Runtime	: 0 ms
// Memory	: 6 MB

// Sorted array of n-size.
// Search for <int> bad.

bool isBadVersion(int version)
{
    return rand() % 1;
}

class Solution
{
  public:
    int firstBadVersion(int n)
    {
        unsigned int left = 1;
        unsigned int right = n;
        while (left <= right) {
            int pivot = (left + right) / 2;
            if ((isBadVersion(pivot - 1) == false) && isBadVersion(pivot) == true)
                return pivot;
            else if (isBadVersion(pivot) == false)
                left = pivot + 1;
            else
                right = pivot - 1;
        }
        return -1;
    }
};

int main()
{
    int bad;
    return bad;
}