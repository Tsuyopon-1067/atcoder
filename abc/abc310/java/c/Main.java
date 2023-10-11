import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;

public class Main {
    public static void main(String ... args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        Set<String> st = new HashSet<>();

        for (int i = 0; i < n; i++) {
            String tmp = sc.next();
            String reverse = new StringBuilder(tmp).reverse().toString();
            if (tmp.compareTo(reverse) > 0) {
                tmp = reverse;
            }

            st.add(tmp);
        }
        System.out.println(st.size());
    }
}