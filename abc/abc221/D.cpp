#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	vector<int> ans(n, 0);
	for(int i = 0; i < n; i++) cin >> a[i] >> b[i];

	vector<pair<int, int>> t(n);
	rep(i, n){
		t[i].first = a[i];
		t[i].second = a[i] + b[i] - 1;
	}
	sort(t.begin(), t.end());

	rep(i, n){

	}
	rep(i, n) printf("%d ", ans[i]);
	return 0;
}
