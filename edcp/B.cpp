#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for(int i = 0; i < n; i++) cin >> h[i];

    const long long INF = 1000000000000;
    vector<long long> dp(n+1, INF);
    dp[0] = 0;
    reps(1, i, n){
        reps(1, j, k+1){
            if(i - j >= 0) dp[i] = min(dp[i], dp[i-j] + abs(h[i] - h[i-j]));
        }
    }
    cout << dp[n-1] << endl;
    
    return 0;
}
