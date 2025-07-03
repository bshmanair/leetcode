// 242. Valid anagram

#include <iostream>
#include <vector>
using namespace std;

/**
 * Hash tables (implemented through arrays, not unordered sets)
 * ============================================================
 * Time O(n + m), Space O(1)
 *
 * Since we're dealing with alphabets only, the special constraint is that the fixed size limit is 26.
 * With just one pass of the array, we can increment element by 1 if the alphabet in that index exists in s, then decrement the same if in t.
 *
 * If all arrays are 0, they're anagrams.
 *
 */

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
        {
            return false;
        }

        int count[26];
        for (int i = 0; i < s.length(); i++)
        {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (int val : count)
        {
            if (val != 0)
            {
                return false;
            }
        }
        return true;
    }
};