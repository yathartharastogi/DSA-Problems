/*
 * Problem : Palindrome Number
 * Platform : LeetCode #9
 * Difficulty : Easy
 * Topic : Math
 *
 * Time Complexity  : O(log10(x))
 * Space Complexity : O(1)
 * Submitted on : 06/08/2026
 * Submitted by : Yathartha Rastogi
 */

class Solution {
    public boolean isPalindrome(int x) {
        // Negative numbers are not palindromes
        if (x < 0) return false;

        int original = x;
        int rev = 0;

        // Reverse the integer digits
        while (x != 0) {
            int last = x % 10;
            rev = rev * 10 + last;
            x /= 10;
        }

        // Compare reversed number with original
        return original == rev;
    }
}
