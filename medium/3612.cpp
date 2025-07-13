/* 3612. Process String with Special Operations I*/

#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string processStr(string s)
    {
        string result = "";
        for (char c : s)
        {
            if (c >= 'a' && c <= 'z')
            { // Lowercase letter
                result += c;
            }
            else if (c == '*')
            { // Remove
                if (!result.empty())
                    result.pop_back();
            }
            else if (c == '#')
            { // Duplicate
                result += result;
            }
            else if (c == '%')
            {
                reverse(result.begin(), result.end());
            }
        }
        return result;
    }
};