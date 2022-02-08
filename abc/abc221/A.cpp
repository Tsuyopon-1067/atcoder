#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	int ans = 1;
	rep(i, a-b) ans *= 32;
	cout << ans << endl;
	return 0;
}
