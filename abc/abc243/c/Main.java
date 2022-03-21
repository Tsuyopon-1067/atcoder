import java.util.Scanner;
import java.util.Map;
import java.util.HashMap;
import java.lang.Math;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] x = new int[n];
        int[] y = new int[n];
        for (int i = 0; i < n; ++i) {
            x[i] = sc.nextInt();
            y[i] = sc.nextInt();
        }
        String s = sc.next();

        HashMap<Integer, Integer> rList = new HashMap<Integer, Integer>();
        HashMap<Integer, Integer> lList = new HashMap<Integer, Integer>();
        for (int i = 0; i < n; ++i) {
            rList.put(y[i], 1000000000);
            lList.put(y[i], 0);
        }

        for (int i = 0; i < n; ++i) {
            if (s.charAt(i) == 'R') {
                int tmp = Math.min(rList.get(y[i]), x[i]);
                rList.put(y[i], tmp);
            } else {
                int tmp = Math.max(lList.get(y[i]), x[i]);
                lList.put(y[i], tmp);
            }
        }

        for (int i = 0; i < n; ++i) {
            if (lList.get(y[i]) - rList.get(y[i]) > 0) {
                System.out.println("Yes");
                return;
            }
        }

        System.out.println("No");
    }
}
