/*
 * Problem : Soft Drinking
 * Platform : Codeforces #151A
 * Difficulty : Easy
 * Topic : Math, Implementation
 *
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 * Submitted on : 11/06/2026
 * Submitted by : Yathartha Rastogi
 */

import java.util.*;

public class SoftDrinking {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int k = sc.nextInt();
        int l = sc.nextInt();
        int c = sc.nextInt();
        int d = sc.nextInt();
        int p = sc.nextInt();
        int nl = sc.nextInt();
        int np = sc.nextInt();

        // Total drinks, lime slices, and salt portions available
        int drinkToasts = (k * l) / nl;
        int limeToasts = c * d;
        int saltToasts = p / np;

        // Maximum equal toasts each friend can make
        int ans = Math.min(drinkToasts, Math.min(limeToasts, saltToasts)) / n;

        System.out.println(ans);
        sc.close();
    }
}
