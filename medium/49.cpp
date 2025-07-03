// 49. Group Anagrams

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

/**
 *  Hash Map
 *  ========
 *
 * - Filters the string vector into the hash map
 * - Counts letters for each word in the input
 * - Converts count to a string key
 * - Groups the word using the key
 * - Converts the map to output format then returns result
 */

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> map;
        for (string &word : strs)
        {
            int count[26] = {0};
            for (char c : word)
                count[c - 'a']++;

            string key;
            for (int i = 0; i < 26; ++i)
            {
                key += '#' + to_string(count[i]); // TODO: ???
            }

            map[key].push_back(word);
        }
        vector<vector<string>> res;
        for (auto &[key, group] : map)
        {
            res.push_back(group);
        }

        return res;
    }
};
