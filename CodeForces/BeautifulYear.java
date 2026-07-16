import java.util.*;

public class BeautifulYear {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int year = sc.nextInt();
        Set<Character> set = new HashSet<>();
        while(true){
            year++;
            set.clear();
            for(char c : String.valueOf(year).toCharArray()){
                set.add(c);
            }
            if(set.size() == 4){
                System.out.println(year);
                break;
            }
        }
        
    }
}