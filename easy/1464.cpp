#include <iostream>
#include <cstdint>
#include <vector>
using namespace std;

// 1464. Maximum Product of Two Elements in an Array

/**
 * Time O(n), Space O(1)
 *
 * No standard term for this technique
 * If max1 catches, give its old number to max2
 * If max2 catches, its because max1 already has a bigger number
 */

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        uint16_t max1 = 0, max2 = 0;
        for (int num : nums)
        {
            if (num > max1)
            {
                max2 = max1;
                max1 = num;
            }
            else if (num > max2)
            {
                max2 = num;
            }
        }
        return (max1 - 1) * (max2 - 1);
    }
};