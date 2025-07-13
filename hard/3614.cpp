/* Process String with Special Operations II*/

#include <stack>
#include <string>
using namespace std;

class Solution
{
public:
    char processStr(string s, long long k)
    {
        stack<long long> lengths;
        stack<char> ops;
        long long len = 0;

        for (char c : s)
        { // not building string unlike last variant
            if (c >= 'a' && c <= 'z')
            {
                len++;
            }
            else if (c == '*')
            {
                if (len > 0)
                    len--;
            }
            else if (c == '#')
            {
                len *= 2;
                if (len > 1e15)
                    len = 1e15; // prevent overflow (even if string exceeds 1e15)
            }

            ops.push(c);
            lengths.push(len);
        }

        if (k >= len)
            return '.';

        for (int i = s.size() - 1; i >= 0; --i)
        {
            char op = ops.top();
            ops.pop();
            long long currLen = lengths.top();
            lengths.pop();

            if (op == '%')
            {
                k = currLen - 1 - k;
            }
            else if (op == '#')
            {
                if (k >= currLen / 2)
                {
                    k -= currLen / 2;
                }
            }
            else if (op == '*')
            {
            }
            else
            {
                if (k == currLen - 1)
                {
                    return s[i];
                }
            }
        }

        return '?';
    }
};
