import java.util.*;

public class I_love_username {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int first = sc.nextInt();
        int min = first;
        int max = first;
        int count = 0;

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
    }
}