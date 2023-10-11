import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n, m;
        n = sc.nextInt();
        m = sc.nextInt();

        List<Integer> p = new ArrayList<>();
        List<Integer> c = new ArrayList<>();
        List<List<Integer>> f = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            p.add(sc.nextInt());
            c.add(sc.nextInt());
            f.add(new ArrayList<>());
            for (int j = 0; j < c.get(i); j++) {
                f.get(i).add(sc.nextInt());
            }
        }

        String ans = "No";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                boolean hasAllFacility = true;
                for (Integer k : f.get(i)) {
                    if (!f.get(j).contains(k)) {
                        hasAllFacility = false;
                    }
                }

                boolean hasUniqueFacility = false;
                for (Integer k : f.get(j)) {
                    if (!f.get(i).contains(k)) {
                        hasUniqueFacility = true;
                    }
                }

                if (p.get(i) >= p.get(j) && hasAllFacility && (p.get(i) > p.get(j) || hasUniqueFacility)) {
                    ans = "Yes";
                }
            }
        }

        System.out.println(ans);
    }
}
