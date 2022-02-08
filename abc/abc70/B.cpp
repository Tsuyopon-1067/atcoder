#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int ans = 0;
	int n = max(b, d);

	for(int i = 0; i <= n; i++){
		if(a <= i && i <= b && c <= i && i <= d) ans++;
	}
	if(ans > 0) ans--;
	cout << ans << endl;
	return 0;
}
