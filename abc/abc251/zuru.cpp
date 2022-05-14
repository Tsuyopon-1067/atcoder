#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
#define reps(i, s, n) for (long long i = (long long)(s); i < (long long)(n); ++i)
#define rrep(i, n) for (long long i = (long long)(n-1); i >= 0; --i)
#define MOD 1000000007
#define INF 2000000000
#define INFL 1000000000000000000
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
template <typename T> long long count_digit(T n) { long long res = 0; while (n > 0) { ++res; n /= 10; } return res; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long w;
    cin >> w;
    vector<vector<ll>> dp(4, vector<ll>(4);
    vector<bool> flags(1000001, false);
    

    dp[1].push_back(1);
    dp[1].push_back(2);
    dp[1].push_back(4);
    dp[2].push_back(3);
    dp[2].push_back(5);
    dp[2].push_back(6);
    dp[3].push_back(7);

    flags[1] = true;
    flags[2] = true;
    
    reps (1, n, w+1) {
        
    }
    
    
    return 0;
}
