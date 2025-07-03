// 347. Top K Frequent Elements

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

/**
 * Bucket Sort
 *
 * - Filter array into hash table
 * - Sort the hashtable into buckets (vector of int vectors) where we organize numbers by the frequency index
 * - Walk from the bucket's end to its beginning and take k elements
 */

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> map;
        vector<vector<int>> buckets(nums.size() + 1);
        for (int num : nums)
        {
            map[num]++;
        }
        for (auto &[num, freq] : map)
        {
            buckets[freq].push_back(num);
        }

        vector<int> v;
        for (int i = buckets.size() - 1; i >= 0 && v.size() < k; i--)
        {
            for (int num : buckets[i])
            {
                v.push_back(num);
                if (v.size() == k)
                    break;
            }
        }

        return v;
    }
};