import java.util.Scanner;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n, p, q;
        n = sc.nextInt();
        p = sc.nextInt();
        q = sc.nextInt();

        List<Integer> d = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            d.add(sc.nextInt());
        }

        int drinkMin = d.stream().min(Comparator.naturalOrder()).get();

        int ans = Math.min(p, drinkMin+q);
        System.out.println(ans);
    }
}
