#include <bits/stdc++.h>
using namespace std;

long long a, b, x;
long long f(long long n) {
    long long d = 0;
    long long nt = n;
    while (nt > 0) {
        nt /= 10;
        ++d;
    }
    return a * n + b * d;
}
int main() {
    scanf("%lld %lld %lld", &a, &b, &x);
    long long l, r;
    l = 0;
    r = 1000000001;
    for(int i = 0; i < 30; ++i) {
        long long m = (l + r) / 2;
        if (f(m) <= x) l = m;
        else r = m;
    }
    printf("%lld\n", min(l, 1000000000LL));

    return 0;
}
