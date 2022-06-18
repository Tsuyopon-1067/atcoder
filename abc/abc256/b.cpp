#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template <typename T> using MaxHeap = priority_queue<T>;
template <typename T> using MinHeap = priority_queue<T, vector<T>, greater<T>>;
template <typename T> bool chmin(T &a, const T &b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template <typename T> bool chmax(T &a, const T &b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define ff first
#define ss second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define all(a) a.begin(), a.end()
#define SZ(x) ((ll)(x).size())
const ll INF = 8e18;
const ll mod = 998244353;

int main() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    rep(i, n)cin>>a[i];
    ll now = 0;
    rep(i, n){
        ll ii = n-i-1;
        a[ii] += now;
        now = a[ii];
    }
    ll cnt = 0;
    rep(i, n)if(a[i] >= 4)cnt++;
    cout<<cnt<<endl;
}
