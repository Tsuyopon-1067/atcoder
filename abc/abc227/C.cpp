#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long ans = 0;
    for(long long a = 1; a*a*a <= n; a++)for(long long b = a; a*b*b <= n; b++){
        if(a*b*b > n) break;
        ans += n / (a*b) - (b-1);
    }

    cout << ans << endl;
    
    return 0;
}
