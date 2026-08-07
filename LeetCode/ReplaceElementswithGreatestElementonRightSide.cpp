/*
 * Problem : Replace Elements with Greatest Element on Right Side
 * Platform : LeetCode #1299
 * Difficulty : Easy
 * Topic : Array
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 * Submitted on : 06/08/2026
 * Submitted by : Yathartha Rastogi
 */

class Solution {
    public int[] replaceElements(int[] A) {
        // Traverse array right-to-left keeping track of maximum element seen so far
        for (int i = A.length - 1, mx = -1; i >= 0; --i)
            mx = Math.max(A[i], A[i] = mx);
        return A;
    }
}
