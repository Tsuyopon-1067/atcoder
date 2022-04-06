import java.util.Scanner;

class B2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; ++i) a[i] = sc.nextInt();

        for (int i = 0; i <= 2001; ++i) {
            boolean flag = true;
            for (int j = 0; j < n; ++j) {
                if (a[j] == i) flag = false;
            }
            if (flag) {
                System.out.println(i);
                return;
            }
        }
    }
}
