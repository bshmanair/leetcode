// 1. Two Sum

/**
 * Hash table (for instant lookup)
 * ===============================
 * Time O(n), Space O(n)
 *
 * If you're at nums[i], you want to know:
 * Is there some earlier number nums[j] such that it meets a condition?
 * nums[j] == target - nums[i]
 *
 * So basically:
 * 1. Walk through the array
 * 2. For each element nums[i], compute the complement: target - nums[i]
 * 3. Check if the complement already exists in your hash map.
 * 4. If it does, you've found the pair.
 */

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];
            if (map.find(diff) != map.end())
            {
                return {map[diff], i};
            }
            map.insert({nums[i], i});
        }
        return {};
    }
};