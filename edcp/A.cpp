#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    for(int i = 0; i < n; i++) cin >> h[i];

    const int INF = 100000000;
    vector<int> dp(n+1, INF);
    dp[0] = 0;
    reps(1, i, n){
        dp[i] = dp[i-1] + abs(h[i] - h[i-1]);
        if(i >= 2) dp[i] = min(dp[i], dp[i-2] + abs(h[i] - h[i-2]));
    }
    cout << dp[n-1] << endl;
    
    return 0;
}
