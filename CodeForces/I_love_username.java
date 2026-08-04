/*
 * Problem : I_love_%username%
 * Platform : Codeforces #155A
 * Difficulty : Easy
 * Topic : Implementation, Array
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 * Submitted on : 11/06/2026
 * Submitted by : Yathartha Rastogi
 */

import java.util.*;

public class I_love_username {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int first = sc.nextInt();

        int min = first;
        int max = first;
        int count = 0;

        // Iterate through contest scores and count amazing performances
        for (int i = 1; i < n; i++) {
            int score = sc.nextInt();

            if (score > max) {
                max = score;
                count++;
            } else if (score < min) {
                min = score;
                count++;
            }
        }

        System.out.println(count);
        sc.close();
    }
}
