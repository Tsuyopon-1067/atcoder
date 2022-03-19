#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if (a % b == 0) return b;
    else return gcd(b, a%b);
}
int main() {
    long long a, b;
    cin >> a >> b; 
    cout << a*b/gcd(a,b) << endl;
    return 0;
}
