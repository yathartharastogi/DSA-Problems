/*
 * Problem : Beautiful Year
 * Platform : Codeforces #271A
 * Difficulty : Easy
 * Topic : Implementation, Brute Force
 *
 * Time Complexity  : O(Y)
 * Space Complexity : O(1)
 * Submitted on : 16/07/2026
 * Submitted by : Yathartha Rastogi
 */

import java.util.*;

public class BeautifulYear {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int year = sc.nextInt();
        Set<Character> set = new HashSet<>();

        // Increment year until all 4 digits are distinct
        while (true) {
            year++;
            set.clear();
            for (char c : String.valueOf(year).toCharArray()) {
                set.add(c);
            }
            // A 4-digit number with 4 distinct characters is a beautiful year
            if (set.size() == 4) {
                System.out.println(year);
                break;
            }
        }
        sc.close();
    }
}
