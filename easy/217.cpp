// 217. Contains Duplicate
#include <unordered_map>
#include <vector>
#include <iostream>
using namespace std;

/**
 * Hash table (for instant lookup)
 * ===============================
 * Time O(n), Space O(n)
 *
 * Used to track count
 * Duplicity condition: count[num] > 1
 */

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> count;
        for (int num : nums)
        {
            count[num]++;
            if (count[num] > 1)
            {
                return true;
            }
        }
        return false;
    }
};