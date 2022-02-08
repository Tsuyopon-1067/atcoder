#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[2][100];
	for(int i = 0; i < n; i++) cin >> a[0][i];
	for(int i = 0; i < n; i++) cin >> a[1][i];

	int k[100] = {0};
	rep(i, n){
		rep(j, i+1) k[i] += a[0][j];
		for(int j = i; j < n; j++) k[i] += a[1][j];
	}

	int ans = 0;
	rep(i, n) ans = max(ans, k[i]);
	cout << ans << endl;
	return 0;
}
