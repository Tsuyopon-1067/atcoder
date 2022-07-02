#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    long long int a[10][10];
    long long int tmp[10];
    for (int i = 0; i < n; ++i) {
        scanf("%lld", &tmp[i]);
    }
    for (int i = 0; i < n; ++i) {
        for (int j = n-1; j >= 0; --j) {
            a[i][j] = tmp[i] % 10;
            tmp[i] /= 10;
        }
    }

    long long int tate = 0;
    long long int yoko = 0;
    long long int lr = 0;
    long long int rl = 0;
    long long int rtate = 0;
    long long int ryoko = 0;
    long long int rlr = 0;
    long long int rrl = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            long long int ttate = 0;
            long long int tyoko = 0;
            long long int tlr = 0;
            long long int trl = 0;
            long long int trtate = 0;
            long long int tryoko = 0;
            long long int trlr = 0;
            long long int trrl = 0;
            for (int k = 0; k < n; ++k) {
                ttate *= 10;
                tyoko *= 10;
                tlr *= 10;
                trl *= 10;
                trtate *= 10;
                tryoko *= 10;
                trlr *= 10;
                trrl *= 10;

                ttate += a[(i+k)%n][j];
                tyoko += a[i][(j+k)%n];
                tlr += a[(i+k)%n][(j+k)%n];
                trl += a[(i+k)%n][(j-k+n)%n];
                trtate += a[(i-k+n)%n][j];
                tryoko += a[i][(j-k+n)%n];
                trlr += a[(i-k+n)%n][(j+k)%n];
                trrl += a[(i-k+n)%n][(j-k+n)%n];
            }

            if (tate < ttate) {
                tate = ttate;
            }
            if (yoko < tyoko) {
                yoko = tyoko;
            }
            if (lr < tlr) {
                lr = tlr;
            }
            if (rl < trl) {
                rl = trl;
            }
            if (rtate < trtate) {
                rtate = trtate;
            }
            if (ryoko < tryoko) {
                ryoko = tryoko;
            }
            if (rlr < trlr) {
                rlr = trlr;
            }
            if (rrl < trrl) {
                rrl = trrl;
            }
        }
    }
    long long int ans = tate;
    if (ans < yoko) {
        ans = yoko;
    }
    if (ans < lr) {
        ans = lr;
    }
    if (ans < rl) {
        ans = rl;
    }
    if (ans < rtate) {
        ans = rtate;
    }
    if (ans < ryoko) {
        ans = ryoko;
    }
    if (ans < rlr) {
        ans = rlr;
    }
    if (ans < rrl) {
        ans = rrl;
    }
    printf("%lld\n", ans);
    return 0;
}
