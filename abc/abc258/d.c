#include <stdio.h>
int main() {
    long long int n, x;
    long long int a[200000];
    long long int b[200000];
    scanf("%lld %lld", &n, &x);
    for (long long int i = 0; i < n; ++i) {
        scanf("%lld %lld", &a[i], &b[i]);
    }

    long long int dp[200000];
    dp[0] = a[0] + b[0];
    for (int i = 1; i < n; ++i) {
        dp[i] = dp[i-1] + a[i] + b[i];
    }

    long long int ans = 2000000000000000000;
    for (int i = 0; i < n; ++i) {
        long long int t = dp[i];
        if (i+1 < x) {
            t += (x-i-1) * b[i];
        }
        if (t < ans) {
            ans = t;
        }
    }
    printf("%lld\n", ans);
    return 0;
}
