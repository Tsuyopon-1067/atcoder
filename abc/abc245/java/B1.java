import java.util.Scanner;
import java.util.*;

class B1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];

        HashSet<Integer> st = new HashSet<Integer>();
        for(int i = 0; i < n; ++i) st.add(sc.nextInt());

        for (int i = 0; i < 2001; ++i) {
            if (!st.contains(i)) {
                System.out.println(i);
                return;
            }
        }
    }
}
