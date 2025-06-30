// 509. Fibonacci Number

/**
 * Dynamic Programming by Memoization
 * ==================================
 * Time O(n), Space O(1)
 *
 * Only the previous 2 numbers are necessary to dynamically keep adding up to the nth term in the Fibonacci sequence. (a and b makes c)
 *
 * Summate the sequence as we go (sum)
 *
 */

class Solution
{
public:
    int fib(int n)
    {
        int sum = 0;
        int a = 0, b = 1, c = 0;
        if (n == 1)
            return 1;
        if (n == 2)
            return 1;
        for (int i = 3; i <= n + 1; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
};