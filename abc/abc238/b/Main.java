import java.util.Scanner;
import java.util.Arrays;

class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int a[] = new int[n+2];
        a[n] = 0;
        a[n+1] = 360;
        int k = 0;
        for (int i = 0; i < n; i++) {
            int t = sc.nextInt();
            k += t;
            a[i] = k % 360;
        }

        Arrays.sort(a);
        int ans = 0;
        for (int i = 0; i < n+1; i++) {
            ans = Math.max(ans, a[i+1]-a[i]);
        }
        System.out.println(ans);
    }
}
