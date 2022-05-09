import java.util.Scanner;

class a {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] h = new int[n+1];
        int[] dp = new int[n+1];
        for (int i = 1; i <= n; ++i) h[i] = sc.nextInt();

        for (int i = 2; i <= n; ++i) {
            dp[i] = dp[i-1] + Math.abs(h[i] - h[i-1]);
            if (i - 2 >= 1) dp[i] = Math.min(dp[i], dp[i-2] + Math.abs(h[i] - h[i-2]));
        }
        System.out.println(dp[n]);
    }
}
