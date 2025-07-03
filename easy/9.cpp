// 9. Palindrome Number

/**
 * Time O(log10 x) Space O(1)
 * Bounds checking excludes negative numbers, numbers divisible by 10.
 * We compare x with its reversed half only if the length is even, otherwise compare the same but without the ones.
 */

class Solution
{
public:
    bool isPalindrome(int x)
    {
        // Negative numbers and numbers ending in 0 (but not 0 itself) can't be palindromes
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

        int reversedHalf = 0;
        while (x > reversedHalf)
        {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        // For even length: x == reversedHalf
        // For odd length: x == reversedHalf / 10 (middle digit doesn't matter)
        return x == reversedHalf || x == reversedHalf / 10;
    }
};
