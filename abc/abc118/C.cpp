#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n;
	cin >> n;
	int a[100000];
	for(int ii = 0; ii < n; ii++) cin >> a[ii];
	int ans = a[0];
	rep(i, n-1){
		ans = __gcd(ans, a[i+1]);
	}
	cout << ans << endl;
	return 0;
}
