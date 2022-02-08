#define _GLIBCXX_DEBUG
#define rep(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	long long k;
	cin >> n >> k;

	vector<pair<long long, long long>> ab(n);
	rep(0, i, n) cin >> ab[i].first >> ab[i].second;
	sort(ab.begin(), ab.end());

	long long ans = 0;
	int i = 0;
	while(k >= ab[i].first - ans){
		k -= ab[i].first - ans;
		k += ab[i].second;
		ans = ab[i].first;
		i++;
		if(i == n) break;
	}
	ans += k;
	cout << ans << endl;

	return 0;
}
